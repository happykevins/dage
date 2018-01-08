//
// Created by Kevin Sun
//		2017/12/04
//
#ifndef REFLECTION_HPP_
#define REFLECTION_HPP_

#include <iostream>
#include <tuple>
#include <array>


namespace dage {

//////////////////////////////////////////////////////////////////////////
//
// Reflection System 
//
// **Notice
//		1.if working on VS2012, you need add '_VARIADIC_MAX=10' in compile defines.
//
// Example Code:
//
//	* Define a reflection class
//
//		struct person {
//			int id;
//			std::string name;
//			int age;
//			USING_REFLECTION
//		};
//		REFLECTION(person, id, name, age);
//
//
// * How to use (you can use any iostream class from stl; or you can implement another stream, learn from 'stream.hpp')
//
//		using namespace dage;
//		// writing code
//		{	
//			person p = {1,"dage", 33};
//			std::ofstream ofs("person.dat",std::ios::binary);
//			Stream::to_stream(ofs, p);
//		}
//		// reading code
//		{
//			std::ifstream ifs("person.dat",std::ios::binary);
//			person p = {};
//			Stream::from_stream(ifs, pp);
//		}
//
//
//


//////////////////////////////////// 获得宏参数个数 //////////////////////////////////////

#define ADD_VIEW(str) std::string(#str)
#define SEPERATOR ,

#define CON_STR_1(element, ...) ADD_VIEW(element)
#define CON_STR_2(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_1(__VA_ARGS__))
#define CON_STR_3(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_2(__VA_ARGS__))
#define CON_STR_4(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_3(__VA_ARGS__))
#define CON_STR_5(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_4(__VA_ARGS__))
#define CON_STR_6(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_5(__VA_ARGS__))
#define CON_STR_7(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_6(__VA_ARGS__))
#define CON_STR_8(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_7(__VA_ARGS__))
#define CON_STR_9(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_8(__VA_ARGS__))
#define CON_STR_10(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_9(__VA_ARGS__))
#define CON_STR_11(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_10(__VA_ARGS__))
#define CON_STR_12(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_11(__VA_ARGS__))
#define CON_STR_13(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_12(__VA_ARGS__))
#define CON_STR_14(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_13(__VA_ARGS__))
#define CON_STR_15(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_14(__VA_ARGS__))
#define CON_STR_16(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_15(__VA_ARGS__))
#define CON_STR_17(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_16(__VA_ARGS__))
#define CON_STR_18(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_17(__VA_ARGS__))
#define CON_STR_19(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_18(__VA_ARGS__))
#define CON_STR_20(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_19(__VA_ARGS__))
#define CON_STR_21(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_20(__VA_ARGS__))
#define CON_STR_22(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_21(__VA_ARGS__))
#define CON_STR_23(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_22(__VA_ARGS__))
#define CON_STR_24(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_23(__VA_ARGS__))
#define CON_STR_25(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_24(__VA_ARGS__))
#define CON_STR_26(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_25(__VA_ARGS__))
#define CON_STR_27(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_26(__VA_ARGS__))
#define CON_STR_28(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_27(__VA_ARGS__))
#define CON_STR_29(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_28(__VA_ARGS__))
#define CON_STR_30(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_29(__VA_ARGS__))
#define CON_STR_31(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_30(__VA_ARGS__))
#define CON_STR_32(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_31(__VA_ARGS__))
#define CON_STR_33(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_32(__VA_ARGS__))
#define CON_STR_34(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_33(__VA_ARGS__))
#define CON_STR_35(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_34(__VA_ARGS__))
#define CON_STR_36(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_35(__VA_ARGS__))
#define CON_STR_37(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_36(__VA_ARGS__))
#define CON_STR_38(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_37(__VA_ARGS__))
#define CON_STR_39(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_38(__VA_ARGS__))
#define CON_STR_40(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_39(__VA_ARGS__))
#define CON_STR_41(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_40(__VA_ARGS__))
#define CON_STR_42(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_41(__VA_ARGS__))
#define CON_STR_43(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_42(__VA_ARGS__))
#define CON_STR_44(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_43(__VA_ARGS__))
#define CON_STR_45(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_44(__VA_ARGS__))
#define CON_STR_46(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_45(__VA_ARGS__))
#define CON_STR_47(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_46(__VA_ARGS__))
#define CON_STR_48(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_47(__VA_ARGS__))
#define CON_STR_49(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_48(__VA_ARGS__))
#define CON_STR_50(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_49(__VA_ARGS__))
#define CON_STR_51(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_50(__VA_ARGS__))
#define CON_STR_52(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_51(__VA_ARGS__))
#define CON_STR_53(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_52(__VA_ARGS__))
#define CON_STR_54(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_53(__VA_ARGS__))
#define CON_STR_55(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_54(__VA_ARGS__))
#define CON_STR_56(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_55(__VA_ARGS__))
#define CON_STR_57(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_56(__VA_ARGS__))
#define CON_STR_58(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_57(__VA_ARGS__))
#define CON_STR_59(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_58(__VA_ARGS__))
#define CON_STR_60(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_59(__VA_ARGS__))
#define CON_STR_61(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_60(__VA_ARGS__))
#define CON_STR_62(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_61(__VA_ARGS__))
#define CON_STR_63(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_62(__VA_ARGS__))
#define CON_STR_64(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_63(__VA_ARGS__))
#define CON_STR_65(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_64(__VA_ARGS__))
#define CON_STR_66(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_65(__VA_ARGS__))
#define CON_STR_67(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_66(__VA_ARGS__))
#define CON_STR_68(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_67(__VA_ARGS__))
#define CON_STR_69(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_68(__VA_ARGS__))
#define CON_STR_70(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_69(__VA_ARGS__))
#define CON_STR_71(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_70(__VA_ARGS__))
#define CON_STR_72(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_71(__VA_ARGS__))
#define CON_STR_73(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_72(__VA_ARGS__))
#define CON_STR_74(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_73(__VA_ARGS__))
#define CON_STR_75(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_74(__VA_ARGS__))
#define CON_STR_76(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_75(__VA_ARGS__))
#define CON_STR_77(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_76(__VA_ARGS__))
#define CON_STR_78(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_77(__VA_ARGS__))
#define CON_STR_79(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_78(__VA_ARGS__))
#define CON_STR_80(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_79(__VA_ARGS__))
#define CON_STR_81(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_80(__VA_ARGS__))
#define CON_STR_82(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_81(__VA_ARGS__))
#define CON_STR_83(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_82(__VA_ARGS__))
#define CON_STR_84(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_83(__VA_ARGS__))
#define CON_STR_85(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_84(__VA_ARGS__))
#define CON_STR_86(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_85(__VA_ARGS__))
#define CON_STR_87(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_86(__VA_ARGS__))
#define CON_STR_88(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_87(__VA_ARGS__))
#define CON_STR_89(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_88(__VA_ARGS__))
#define CON_STR_90(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_89(__VA_ARGS__))
#define CON_STR_91(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_90(__VA_ARGS__))
#define CON_STR_92(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_91(__VA_ARGS__))
#define CON_STR_93(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_92(__VA_ARGS__))
#define CON_STR_94(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_93(__VA_ARGS__))
#define CON_STR_95(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_94(__VA_ARGS__))
#define CON_STR_96(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_95(__VA_ARGS__))
#define CON_STR_97(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_96(__VA_ARGS__))
#define CON_STR_98(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_97(__VA_ARGS__))
#define CON_STR_99(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_98(__VA_ARGS__))
#define CON_STR_100(element, ...) ADD_VIEW(element) SEPERATOR MARCO_EXPAND(CON_STR_99(__VA_ARGS__))

#define RSEQ_N() \
	119,118,117,116,115,114,113,112,111,110,\
	109,108,107,106,105,104,103,102,101,100,\
	99,98,97,96,95,94,93,92,91,90, \
	89,88,87,86,85,84,83,82,81,80, \
	79,78,77,76,75,74,73,72,71,70, \
	69,68,67,66,65,64,63,62,61,60, \
	59,58,57,56,55,54,53,52,51,50, \
	49,48,47,46,45,44,43,42,41,40, \
	39,38,37,36,35,34,33,32,31,30, \
	29,28,27,26,25,24,23,22,21,20, \
	19,18,17,16,15,14,13,12,11,10, \
	9,8,7,6,5,4,3,2,1,0

#define ARG_N(\
	_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
	_41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
	_51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
	_61, _62, _63, _64, _65, _66, _67, _68, _69, _70, \
	_71, _72, _73, _74, _75, _76, _77, _78, _79, _80, \
	_81, _82, _83, _84, _85, _86, _87, _88, _89, _90, \
	_91, _92, _93, _94, _95, _96, _97, _98, _99, _100, \
	_101, _102, _103, _104, _105, _106, _107, _108, _109, _110, \
	_111, _112, _113, _114, _115, _116, _117, _118, _119, N, ...) N

#define MACRO_CONCAT(A, B) A##_##B

#define MARCO_EXPAND(...)                 __VA_ARGS__
#define GET_ARG_COUNT_INNER(...)    MARCO_EXPAND(ARG_N(__VA_ARGS__))
#define GET_ARG_COUNT(...)          GET_ARG_COUNT_INNER(__VA_ARGS__, RSEQ_N())

#define MAKE_STR_LIST(...) \
	MACRO_CONCAT(CON_STR, GET_ARG_COUNT(__VA_ARGS__))(__VA_ARGS__)

//////////////////////////////////// 制作一个含100个元素的tuple（10x10） //////////////////////////////////////
#define _MARK_DUM _dummy

#define ARG_100_NIL() \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, \
	_MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM, _MARK_DUM

#define MAKE_TUPLE_ARG(_S, _A) (&_S::_A)

#define MAKE_N10_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)) )

#define MAKE_N20_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)) )

#define MAKE_N30_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)) )

#define MAKE_N40_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _31), MAKE_TUPLE_ARG(_S, _32), MAKE_TUPLE_ARG(_S, _33), MAKE_TUPLE_ARG(_S, _34), MAKE_TUPLE_ARG(_S, _35), MAKE_TUPLE_ARG(_S, _36), MAKE_TUPLE_ARG(_S, _37), MAKE_TUPLE_ARG(_S, _38), MAKE_TUPLE_ARG(_S, _39), MAKE_TUPLE_ARG(_S, _40)) )

#define MAKE_N50_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
	_41, _42, _43, _44, _45, _46, _47, _48, _49, _50, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _31), MAKE_TUPLE_ARG(_S, _32), MAKE_TUPLE_ARG(_S, _33), MAKE_TUPLE_ARG(_S, _34), MAKE_TUPLE_ARG(_S, _35), MAKE_TUPLE_ARG(_S, _36), MAKE_TUPLE_ARG(_S, _37), MAKE_TUPLE_ARG(_S, _38), MAKE_TUPLE_ARG(_S, _39), MAKE_TUPLE_ARG(_S, _40)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _41), MAKE_TUPLE_ARG(_S, _42), MAKE_TUPLE_ARG(_S, _43), MAKE_TUPLE_ARG(_S, _44), MAKE_TUPLE_ARG(_S, _45), MAKE_TUPLE_ARG(_S, _46), MAKE_TUPLE_ARG(_S, _47), MAKE_TUPLE_ARG(_S, _48), MAKE_TUPLE_ARG(_S, _49), MAKE_TUPLE_ARG(_S, _50)) )

#define MAKE_N60_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
	_41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
	_51, _52, _53, _54, _55, _56, _57, _58, _59, _60, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _31), MAKE_TUPLE_ARG(_S, _32), MAKE_TUPLE_ARG(_S, _33), MAKE_TUPLE_ARG(_S, _34), MAKE_TUPLE_ARG(_S, _35), MAKE_TUPLE_ARG(_S, _36), MAKE_TUPLE_ARG(_S, _37), MAKE_TUPLE_ARG(_S, _38), MAKE_TUPLE_ARG(_S, _39), MAKE_TUPLE_ARG(_S, _40)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _41), MAKE_TUPLE_ARG(_S, _42), MAKE_TUPLE_ARG(_S, _43), MAKE_TUPLE_ARG(_S, _44), MAKE_TUPLE_ARG(_S, _45), MAKE_TUPLE_ARG(_S, _46), MAKE_TUPLE_ARG(_S, _47), MAKE_TUPLE_ARG(_S, _48), MAKE_TUPLE_ARG(_S, _49), MAKE_TUPLE_ARG(_S, _50)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _51), MAKE_TUPLE_ARG(_S, _52), MAKE_TUPLE_ARG(_S, _53), MAKE_TUPLE_ARG(_S, _54), MAKE_TUPLE_ARG(_S, _55), MAKE_TUPLE_ARG(_S, _56), MAKE_TUPLE_ARG(_S, _57), MAKE_TUPLE_ARG(_S, _58), MAKE_TUPLE_ARG(_S, _59), MAKE_TUPLE_ARG(_S, _60)) )

#define MAKE_N70_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
	_41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
	_51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
	_61, _62, _63, _64, _65, _66, _67, _68, _69, _70, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _31), MAKE_TUPLE_ARG(_S, _32), MAKE_TUPLE_ARG(_S, _33), MAKE_TUPLE_ARG(_S, _34), MAKE_TUPLE_ARG(_S, _35), MAKE_TUPLE_ARG(_S, _36), MAKE_TUPLE_ARG(_S, _37), MAKE_TUPLE_ARG(_S, _38), MAKE_TUPLE_ARG(_S, _39), MAKE_TUPLE_ARG(_S, _40)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _41), MAKE_TUPLE_ARG(_S, _42), MAKE_TUPLE_ARG(_S, _43), MAKE_TUPLE_ARG(_S, _44), MAKE_TUPLE_ARG(_S, _45), MAKE_TUPLE_ARG(_S, _46), MAKE_TUPLE_ARG(_S, _47), MAKE_TUPLE_ARG(_S, _48), MAKE_TUPLE_ARG(_S, _49), MAKE_TUPLE_ARG(_S, _50)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _51), MAKE_TUPLE_ARG(_S, _52), MAKE_TUPLE_ARG(_S, _53), MAKE_TUPLE_ARG(_S, _54), MAKE_TUPLE_ARG(_S, _55), MAKE_TUPLE_ARG(_S, _56), MAKE_TUPLE_ARG(_S, _57), MAKE_TUPLE_ARG(_S, _58), MAKE_TUPLE_ARG(_S, _59), MAKE_TUPLE_ARG(_S, _60)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _61), MAKE_TUPLE_ARG(_S, _62), MAKE_TUPLE_ARG(_S, _63), MAKE_TUPLE_ARG(_S, _64), MAKE_TUPLE_ARG(_S, _65), MAKE_TUPLE_ARG(_S, _66), MAKE_TUPLE_ARG(_S, _67), MAKE_TUPLE_ARG(_S, _68), MAKE_TUPLE_ARG(_S, _69), MAKE_TUPLE_ARG(_S, _70)) )

#define MAKE_N80_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
	_41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
	_51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
	_61, _62, _63, _64, _65, _66, _67, _68, _69, _70, \
	_71, _72, _73, _74, _75, _76, _77, _78, _79, _80, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _31), MAKE_TUPLE_ARG(_S, _32), MAKE_TUPLE_ARG(_S, _33), MAKE_TUPLE_ARG(_S, _34), MAKE_TUPLE_ARG(_S, _35), MAKE_TUPLE_ARG(_S, _36), MAKE_TUPLE_ARG(_S, _37), MAKE_TUPLE_ARG(_S, _38), MAKE_TUPLE_ARG(_S, _39), MAKE_TUPLE_ARG(_S, _40)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _41), MAKE_TUPLE_ARG(_S, _42), MAKE_TUPLE_ARG(_S, _43), MAKE_TUPLE_ARG(_S, _44), MAKE_TUPLE_ARG(_S, _45), MAKE_TUPLE_ARG(_S, _46), MAKE_TUPLE_ARG(_S, _47), MAKE_TUPLE_ARG(_S, _48), MAKE_TUPLE_ARG(_S, _49), MAKE_TUPLE_ARG(_S, _50)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _51), MAKE_TUPLE_ARG(_S, _52), MAKE_TUPLE_ARG(_S, _53), MAKE_TUPLE_ARG(_S, _54), MAKE_TUPLE_ARG(_S, _55), MAKE_TUPLE_ARG(_S, _56), MAKE_TUPLE_ARG(_S, _57), MAKE_TUPLE_ARG(_S, _58), MAKE_TUPLE_ARG(_S, _59), MAKE_TUPLE_ARG(_S, _60)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _61), MAKE_TUPLE_ARG(_S, _62), MAKE_TUPLE_ARG(_S, _63), MAKE_TUPLE_ARG(_S, _64), MAKE_TUPLE_ARG(_S, _65), MAKE_TUPLE_ARG(_S, _66), MAKE_TUPLE_ARG(_S, _67), MAKE_TUPLE_ARG(_S, _68), MAKE_TUPLE_ARG(_S, _69), MAKE_TUPLE_ARG(_S, _70)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _71), MAKE_TUPLE_ARG(_S, _72), MAKE_TUPLE_ARG(_S, _73), MAKE_TUPLE_ARG(_S, _74), MAKE_TUPLE_ARG(_S, _75), MAKE_TUPLE_ARG(_S, _76), MAKE_TUPLE_ARG(_S, _77), MAKE_TUPLE_ARG(_S, _78), MAKE_TUPLE_ARG(_S, _79), MAKE_TUPLE_ARG(_S, _80)) )

#define MAKE_N90_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
	_41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
	_51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
	_61, _62, _63, _64, _65, _66, _67, _68, _69, _70, \
	_71, _72, _73, _74, _75, _76, _77, _78, _79, _80, \
	_81, _82, _83, _84, _85, _86, _87, _88, _89, _90, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _31), MAKE_TUPLE_ARG(_S, _32), MAKE_TUPLE_ARG(_S, _33), MAKE_TUPLE_ARG(_S, _34), MAKE_TUPLE_ARG(_S, _35), MAKE_TUPLE_ARG(_S, _36), MAKE_TUPLE_ARG(_S, _37), MAKE_TUPLE_ARG(_S, _38), MAKE_TUPLE_ARG(_S, _39), MAKE_TUPLE_ARG(_S, _40)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _41), MAKE_TUPLE_ARG(_S, _42), MAKE_TUPLE_ARG(_S, _43), MAKE_TUPLE_ARG(_S, _44), MAKE_TUPLE_ARG(_S, _45), MAKE_TUPLE_ARG(_S, _46), MAKE_TUPLE_ARG(_S, _47), MAKE_TUPLE_ARG(_S, _48), MAKE_TUPLE_ARG(_S, _49), MAKE_TUPLE_ARG(_S, _50)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _51), MAKE_TUPLE_ARG(_S, _52), MAKE_TUPLE_ARG(_S, _53), MAKE_TUPLE_ARG(_S, _54), MAKE_TUPLE_ARG(_S, _55), MAKE_TUPLE_ARG(_S, _56), MAKE_TUPLE_ARG(_S, _57), MAKE_TUPLE_ARG(_S, _58), MAKE_TUPLE_ARG(_S, _59), MAKE_TUPLE_ARG(_S, _60)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _61), MAKE_TUPLE_ARG(_S, _62), MAKE_TUPLE_ARG(_S, _63), MAKE_TUPLE_ARG(_S, _64), MAKE_TUPLE_ARG(_S, _65), MAKE_TUPLE_ARG(_S, _66), MAKE_TUPLE_ARG(_S, _67), MAKE_TUPLE_ARG(_S, _68), MAKE_TUPLE_ARG(_S, _69), MAKE_TUPLE_ARG(_S, _70)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _71), MAKE_TUPLE_ARG(_S, _72), MAKE_TUPLE_ARG(_S, _73), MAKE_TUPLE_ARG(_S, _74), MAKE_TUPLE_ARG(_S, _75), MAKE_TUPLE_ARG(_S, _76), MAKE_TUPLE_ARG(_S, _77), MAKE_TUPLE_ARG(_S, _78), MAKE_TUPLE_ARG(_S, _79), MAKE_TUPLE_ARG(_S, _80)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _81), MAKE_TUPLE_ARG(_S, _82), MAKE_TUPLE_ARG(_S, _83), MAKE_TUPLE_ARG(_S, _84), MAKE_TUPLE_ARG(_S, _85), MAKE_TUPLE_ARG(_S, _86), MAKE_TUPLE_ARG(_S, _87), MAKE_TUPLE_ARG(_S, _88), MAKE_TUPLE_ARG(_S, _89), MAKE_TUPLE_ARG(_S, _90)) )

#define MAKE_N100_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
	_11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
	_21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
	_31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
	_41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
	_51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
	_61, _62, _63, _64, _65, _66, _67, _68, _69, _70, \
	_71, _72, _73, _74, _75, _76, _77, _78, _79, _80, \
	_81, _82, _83, _84, _85, _86, _87, _88, _89, _90, \
	_91, _92, _93, _94, _95, _96, _97, _98, _99, _100, ...) \
	std::make_tuple( \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9), MAKE_TUPLE_ARG(_S, _10)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _11), MAKE_TUPLE_ARG(_S, _12), MAKE_TUPLE_ARG(_S, _13), MAKE_TUPLE_ARG(_S, _14), MAKE_TUPLE_ARG(_S, _15), MAKE_TUPLE_ARG(_S, _16), MAKE_TUPLE_ARG(_S, _17), MAKE_TUPLE_ARG(_S, _18), MAKE_TUPLE_ARG(_S, _19), MAKE_TUPLE_ARG(_S, _20)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _21), MAKE_TUPLE_ARG(_S, _22), MAKE_TUPLE_ARG(_S, _23), MAKE_TUPLE_ARG(_S, _24), MAKE_TUPLE_ARG(_S, _25), MAKE_TUPLE_ARG(_S, _26), MAKE_TUPLE_ARG(_S, _27), MAKE_TUPLE_ARG(_S, _28), MAKE_TUPLE_ARG(_S, _29), MAKE_TUPLE_ARG(_S, _30)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _31), MAKE_TUPLE_ARG(_S, _32), MAKE_TUPLE_ARG(_S, _33), MAKE_TUPLE_ARG(_S, _34), MAKE_TUPLE_ARG(_S, _35), MAKE_TUPLE_ARG(_S, _36), MAKE_TUPLE_ARG(_S, _37), MAKE_TUPLE_ARG(_S, _38), MAKE_TUPLE_ARG(_S, _39), MAKE_TUPLE_ARG(_S, _40)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _41), MAKE_TUPLE_ARG(_S, _42), MAKE_TUPLE_ARG(_S, _43), MAKE_TUPLE_ARG(_S, _44), MAKE_TUPLE_ARG(_S, _45), MAKE_TUPLE_ARG(_S, _46), MAKE_TUPLE_ARG(_S, _47), MAKE_TUPLE_ARG(_S, _48), MAKE_TUPLE_ARG(_S, _49), MAKE_TUPLE_ARG(_S, _50)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _51), MAKE_TUPLE_ARG(_S, _52), MAKE_TUPLE_ARG(_S, _53), MAKE_TUPLE_ARG(_S, _54), MAKE_TUPLE_ARG(_S, _55), MAKE_TUPLE_ARG(_S, _56), MAKE_TUPLE_ARG(_S, _57), MAKE_TUPLE_ARG(_S, _58), MAKE_TUPLE_ARG(_S, _59), MAKE_TUPLE_ARG(_S, _60)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _61), MAKE_TUPLE_ARG(_S, _62), MAKE_TUPLE_ARG(_S, _63), MAKE_TUPLE_ARG(_S, _64), MAKE_TUPLE_ARG(_S, _65), MAKE_TUPLE_ARG(_S, _66), MAKE_TUPLE_ARG(_S, _67), MAKE_TUPLE_ARG(_S, _68), MAKE_TUPLE_ARG(_S, _69), MAKE_TUPLE_ARG(_S, _70)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _71), MAKE_TUPLE_ARG(_S, _72), MAKE_TUPLE_ARG(_S, _73), MAKE_TUPLE_ARG(_S, _74), MAKE_TUPLE_ARG(_S, _75), MAKE_TUPLE_ARG(_S, _76), MAKE_TUPLE_ARG(_S, _77), MAKE_TUPLE_ARG(_S, _78), MAKE_TUPLE_ARG(_S, _79), MAKE_TUPLE_ARG(_S, _80)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _81), MAKE_TUPLE_ARG(_S, _82), MAKE_TUPLE_ARG(_S, _83), MAKE_TUPLE_ARG(_S, _84), MAKE_TUPLE_ARG(_S, _85), MAKE_TUPLE_ARG(_S, _86), MAKE_TUPLE_ARG(_S, _87), MAKE_TUPLE_ARG(_S, _88), MAKE_TUPLE_ARG(_S, _89), MAKE_TUPLE_ARG(_S, _90)), \
	std::make_tuple(MAKE_TUPLE_ARG(_S, _91), MAKE_TUPLE_ARG(_S, _92), MAKE_TUPLE_ARG(_S, _93), MAKE_TUPLE_ARG(_S, _94), MAKE_TUPLE_ARG(_S, _95), MAKE_TUPLE_ARG(_S, _96), MAKE_TUPLE_ARG(_S, _97), MAKE_TUPLE_ARG(_S, _98), MAKE_TUPLE_ARG(_S, _99), MAKE_TUPLE_ARG(_S, _100)) )

#define MAKE_N1_TUPLE(_S, _1, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1)) )
#define MAKE_N2_TUPLE(_S, _1, _2, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2)) )
#define MAKE_N3_TUPLE(_S, _1, _2, _3, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3)) )
#define MAKE_N4_TUPLE(_S, _1, _2, _3, _4, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4)) )
#define MAKE_N5_TUPLE(_S, _1, _2, _3, _4, _5, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5)) )
#define MAKE_N6_TUPLE(_S, _1, _2, _3, _4, _5, _6, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6)) )
#define MAKE_N7_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7)) )
#define MAKE_N8_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8)) )
#define MAKE_N9_TUPLE(_S, _1, _2, _3, _4, _5, _6, _7, _8, _9, ...) \
	std::make_tuple(std::make_tuple(MAKE_TUPLE_ARG(_S, _1), MAKE_TUPLE_ARG(_S, _2), MAKE_TUPLE_ARG(_S, _3), MAKE_TUPLE_ARG(_S, _4), MAKE_TUPLE_ARG(_S, _5), MAKE_TUPLE_ARG(_S, _6), MAKE_TUPLE_ARG(_S, _7), MAKE_TUPLE_ARG(_S, _8), MAKE_TUPLE_ARG(_S, _9)) )

#define MAKE_TUPLE_0(_S, ...) std::make_tuple()
#define MAKE_TUPLE_1(_S, ...) MARCO_EXPAND(MAKE_N1_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_2(_S, ...) MARCO_EXPAND(MAKE_N2_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_3(_S, ...) MARCO_EXPAND(MAKE_N3_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_4(_S, ...) MARCO_EXPAND(MAKE_N4_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_5(_S, ...) MARCO_EXPAND(MAKE_N5_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_6(_S, ...) MARCO_EXPAND(MAKE_N6_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_7(_S, ...) MARCO_EXPAND(MAKE_N7_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_8(_S, ...) MARCO_EXPAND(MAKE_N8_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_9(_S, ...) MARCO_EXPAND(MAKE_N9_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_10(_S, ...) MARCO_EXPAND(MAKE_N10_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_11(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_12(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_13(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_14(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_15(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_16(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_17(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_18(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_19(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_20(_S, ...) MARCO_EXPAND(MAKE_N20_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_21(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_22(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_23(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_24(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_25(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_26(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_27(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_28(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_29(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_30(_S, ...) MARCO_EXPAND(MAKE_N30_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_31(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_32(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_33(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_34(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_35(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_36(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_37(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_38(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_39(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_40(_S, ...) MARCO_EXPAND(MAKE_N40_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_41(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_42(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_43(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_44(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_45(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_46(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_47(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_48(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_49(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_50(_S, ...) MARCO_EXPAND(MAKE_N50_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_51(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_52(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_53(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_54(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_55(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_56(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_57(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_58(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_59(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_60(_S, ...) MARCO_EXPAND(MAKE_N60_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_61(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_62(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_63(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_64(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_65(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_66(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_67(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_68(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_69(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_70(_S, ...) MARCO_EXPAND(MAKE_N70_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_71(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_72(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_73(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_74(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_75(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_76(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_77(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_78(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_79(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_80(_S, ...) MARCO_EXPAND(MAKE_N80_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_81(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_82(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_83(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_84(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_85(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_86(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_87(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_88(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_89(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_90(_S, ...) MARCO_EXPAND(MAKE_N90_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_91(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_92(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_93(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_94(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_95(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_96(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_97(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_98(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_99(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLE_100(_S, ...) MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))

#define MAKE_TUPLE_IMPL(_S, _N, ...)	MACRO_CONCAT(MAKE_TUPLE,_N)(_S, __VA_ARGS__) // MARCO_EXPAND(MAKE_N100_TUPLE(_S, __VA_ARGS__))
#define MAKE_TUPLES(_S, _N, ...)		MAKE_TUPLE_IMPL(_S, _N, __VA_ARGS__, ARG_100_NIL())


///////////////////////////////// Reflection 接口定义 /////////////////////////////////////////

template<typename T=void>
struct meta_class {
	inline static const char* name() {return "NULL";}
	inline static auto indexs()->decltype(nullptr) {return nullptr;}
	inline static auto members()->decltype(nullptr) {return nullptr;}
};

#define REFLECTION_IMPL(STRUCT_NAME, _N, TUP, STR_LIST) \
namespace dage {\
	template<> \
	struct meta_class<STRUCT_NAME> { \
		inline static const char* name() { return #STRUCT_NAME; } \
		inline static decltype(std::array<std::string, _N>()) indexs() { \
		std::array<std::string, _N> argl = {STR_LIST}; \
		return argl; } \
		inline static decltype(TUP) members() { \
		return TUP; } \
	}; };

#define REFLECTION_INNER(STRUCT_NAME, _N, TUP, ...) \
	REFLECTION_IMPL(STRUCT_NAME, _N, TUP, MACRO_CONCAT(CON_STR, _N)(__VA_ARGS__))

#define REFLECTION_ARGN(STRUCT_NAME, _N, ...) \
	REFLECTION_INNER(STRUCT_NAME, _N, MAKE_TUPLES(STRUCT_NAME, _N, __VA_ARGS__), __VA_ARGS__)

#define REFLECTION(STRUCT_NAME, ...) \
	REFLECTION_ARGN(STRUCT_NAME, GET_ARG_COUNT(__VA_ARGS__), MARCO_EXPAND(__VA_ARGS__))

#define USING_REFLECTION(STRUCT_NAME) inline void _MARK_DUM(){}; friend struct dage::meta_class<STRUCT_NAME>;

///////////////////////////////// Tuples迭代器 /////////////////////////////////////////

template <typename Tup, int I = 0, typename = void, typename = void>
struct TupleExpand;

template <typename Tup, int I>
struct TupleExpand<Tup, I, 
	typename std::enable_if<std::tuple_size<Tup>::value == 0>::type> {
		template <typename F>
		static void apply_imp(const Tup& tup, F&& f, int seq=0) {}
};

template <typename Tup, int I>
struct TupleExpand<Tup, I, 
	typename std::enable_if< (I < std::tuple_size<Tup>::value - 1 ) && true >::type,
	typename std::enable_if< 1!=std::is_member_function_pointer<
		typename std::tuple_element<I, Tup>::type
		>::value >::type > {
		template <typename F>
		static void apply_imp(const Tup& tup, F&& f, int seq=0) { 
			f(std::get<I>(tup), seq); 
			TupleExpand<Tup, I + 1>::apply_imp(tup, std::forward<F>(f), ++seq); 
		}
};
template <typename Tup, int I>
struct TupleExpand<Tup, I,
	typename std::enable_if< I==std::tuple_size<Tup>::value-1 && true >::type,
	typename std::enable_if< 1!=std::is_member_function_pointer<
		typename std::tuple_element<I, Tup>::type
		>::value >::type > {
		template <typename F>
		static void apply_imp(const Tup& tup, F&& f, int seq=0) { 
			f(std::get<I>(tup), seq); 
			seq++;
		}
};

// dummy function expand
template <typename Tup, int I>
struct TupleExpand<Tup, I, 
	typename std::enable_if< (I < std::tuple_size<Tup>::value - 1 ) && true >::type,
	typename std::enable_if< 1==std::is_member_function_pointer<
		typename std::tuple_element<I, Tup>::type
		>::value >::type> {
		template <typename F>
		static void apply_imp(const Tup& tup, F&& f, int seq=0) {}
};
template <typename Tup, int I>
struct TupleExpand<Tup, I,
	typename std::enable_if< I==std::tuple_size<Tup>::value-1 && true >::type,
	typename std::enable_if< 1==std::is_member_function_pointer<
		typename std::tuple_element<I, Tup>::type
		>::value >::type> {
		template <typename F>
		static void apply_imp(const Tup& tup, F&& f, int seq=0) {}
};

#define TS_DUMP_FIELDS \
	std::cout<< "[" << meta_class<T>::name() << "." << meta_class<T>::indexs()[idx] << "]<" \
		<< typeid(decltype(obj.*ele)).name() << ">=" << obj.*ele << std::endl; 

template<typename T, typename S>
struct TsBase; 

template<typename T, typename S>
struct OutTsBase;

template<typename T, typename S, typename OP=OutTsBase<T,S> >
struct BridgeOStreamTs;

// base for F
template<typename T, typename S>
struct TsBase {
	typedef std::string(T::*MP_STR);
	typedef bool(T::*MP_BOOL);
	typedef char(T::*MP_I8);
	typedef unsigned char(T::*MP_U8);
	typedef short(T::*MP_I16);
	typedef unsigned short(T::*MP_U16);
	typedef int(T::*MP_I32);
	typedef unsigned int(T::*MP_U32);
	typedef long long(T::*MP_I64);
	typedef unsigned long long(T::*MP_U64);

	typedef float(T::*MP_FLOAT);
	typedef double(T::*MP_DOUBLE);
	typedef long double(T::*MP_LDOUBLE);

	void operator()(MP_STR ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_BOOL ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_I8 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_U8 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_I16 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_U16 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_I32 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_U32 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_I64 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_U64 ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_FLOAT ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_DOUBLE ele, size_t idx) { TS_DUMP_FIELDS; };
	void operator()(MP_LDOUBLE ele, size_t idx) { TS_DUMP_FIELDS; };

	template <typename Ele>
	void operator()(Ele&& ele, size_t idx) {
		std::cout<< "[" << meta_class<T>::name() << "." << meta_class<T>::indexs()[idx] << "]<" \
			<< typeid(decltype(obj.*ele)).name() << "><=====Class Type=====>" << std::endl; 	

		auto& o = obj.*ele;
		auto ts = BridgeOStreamTs<typename std::remove_reference<decltype(o)>::type, S>(o, stream);
		auto mbs = meta_class<typename std::remove_reference<decltype(o)>::type>::members();
		TupleExpand<decltype(mbs)>::apply_imp(mbs, ts);
	}

	TsBase(T& _obj, S& _s) : obj(_obj), stream(_s) {}
	T& obj;
	S& stream;
};

template<typename T, typename S>
struct OutTsBase : TsBase<T,S> {
	OutTsBase(T& _t, S& _s) : TsBase<T,S>(_t, _s) {}
};

template<typename T, typename S>
struct InTsBase : TsBase<T,S> {
	InTsBase(T& _t, S& _s) : TsBase<T,S>(_t, _s) {}
};

// Tuples Traversal for Bridge (桥接支持100个参数)
template<typename T, typename S, typename OP>
struct BridgeOStreamTs : TsBase<T, S> {
	template <typename TUP>
	inline void operator()(TUP&& tup, size_t idx) {
		TupleExpand<typename std::remove_reference<TUP>::type>::apply_imp(tup, OP(this->obj, this->stream), idx*10);
	}
	BridgeOStreamTs(T& _obj, S& _stream) :TsBase<T,S>(_obj, _stream){}
};
template<typename T, typename S, typename OP=InTsBase<T,S> >
struct BridgeIStreamTs : TsBase<T, S> {
	template <typename TUP>
	inline void operator()(TUP&& tup, size_t idx) {
		TupleExpand<typename std::remove_reference<TUP>::type>::apply_imp(tup, OP(this->obj, this->stream), idx*10);
	}
	BridgeIStreamTs(T& _obj, S& _stream) :TsBase<T,S>(_obj, _stream){}
};

#define OSTREAM_BRIDGE(_BridgeName, _StreamName) \
	template<typename T, typename S> \
	struct _BridgeName : BridgeOStreamTs<T, S, _StreamName<T,S> > { \
		_BridgeName(T& _t, S& _s) : BridgeOStreamTs<T,S, _StreamName<T,S> >(_t, _s) {}};

#define ISTREAM_BRIDGE(_BridgeName, _StreamName) \
	template<typename T, typename S> \
	struct _BridgeName : BridgeIStreamTs<T, S, _StreamName<T,S> > { \
		_BridgeName(T& _t, S& _s) : BridgeIStreamTs<T,S, _StreamName<T,S> >(_t, _s) {}};

}; // namespace dage

#endif // REFLECTION_HPP_
