//
// Created by Kevin Sun
//		2017/12/05
//
#ifndef IO_BINARY_
#define IO_BINARY_

#include <iostream>
#include <typeinfo>
#include <sstream>

#include "reflection.hpp"

namespace dage {

// Tuples Traversal for implementation
template<typename T, typename S>
struct OStreamBinary : OutTsBase<T,S> {
	template <typename Ele>
	void operator()(Ele&& ele, size_t idx) {
		auto& e = obj.*ele;
		Stream::to_stream(stream, e);
	}
	inline void operator()(MP_STR ele, size_t idx) { stream << (obj.*ele).c_str() << '\0';};
	inline void operator()(MP_BOOL ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_I8 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_U8 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_I16 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_U16 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_I32 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_U32 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_I64 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_U64 ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_FLOAT ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_DOUBLE ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};
	inline void operator()(MP_LDOUBLE ele, size_t idx) {auto& e = obj.*ele; stream.write((const char*)&e, sizeof(e));};

	OStreamBinary(T& _obj, S& _stream) :OutTsBase(_obj, _stream){};
};
template<typename T, typename S>
struct IStreamBinary : InTsBase<T,S> {
	template <typename Ele>
	void operator()(Ele&& ele, size_t idx) {
		auto& e = obj.*ele;
		Stream::from_stream(stream, e);
	}
	void operator()(MP_STR ele, size_t idx) {
		std::stringstream ss;
		char c = '\0';
		while(stream.get(c) && c != '\0') {
			ss.put(c);
		}
		obj.*ele = ss.str();
	}
	void operator()(MP_BOOL ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_I8 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_U8 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_I16 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_U16 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_I32 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_U32 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_I64 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_U64 ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_FLOAT ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_DOUBLE ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };
	void operator()(MP_LDOUBLE ele, size_t idx) { auto& i = obj.*ele; stream.read((char*)&i, sizeof(i)); };

	IStreamBinary(T& _obj, S& _stream) :InTsBase(_obj, _stream){}
};

// for debug dump fields
//ISTREAM_BRIDGE(OStreamBinaryBridge, TsBase);
//ISTREAM_BRIDGE(IStreamBinaryBridge, TsBase);

ISTREAM_BRIDGE(OStreamBinaryBridge, OStreamBinary);
ISTREAM_BRIDGE(IStreamBinaryBridge, IStreamBinary);
ISTREAM_BRIDGE(OStreamDumpInfoBridge, OutTsBase);

//////////////////////////////////////////////////////////////////////////

class Stream {
public:
	template<typename T>
	static void to_stream(std::ostream& os, T& t) {
		auto mbs = meta_class<T>::members();
		TupleExpand<decltype(mbs)>::apply_imp(mbs, OStreamBinaryBridge<T, std::ostream>(t, os));
	}

	template<typename T>
	static void from_stream(std::istream& is, T& t) {
		auto mbs = meta_class<T>::members();
		TupleExpand<decltype(mbs)>::apply_imp(mbs, IStreamBinaryBridge<T, std::istream>(t, is));
	}

	template<typename T>
	static void dumpto_stream(std::ostream& os, T& t) {
		auto mbs = meta_class<T>::members();
		TupleExpand<decltype(mbs)>::apply_imp(mbs, OStreamDumpInfoBridge<T, std::ostream>(t, os));
	}
};

}; // namespace dage

#endif // IO_BINARY_