#include <iostream>
#include <string>
#include <algorithm>
#include <typeinfo>
#include <fstream>

#include <dage/reflection/reflection.hpp>
#include <dage/reflection/stream.hpp>

struct school {
	int id;
	std::string addr;
	USING_REFLECTION
};
REFLECTION(school, id, addr);

struct person {
	long long id;
	std::string name;
	bool female;
	int age;
	school sch;
	std::string not_serialized;
	float height;
	double weight;
	USING_REFLECTION
};
REFLECTION(person, id, name, female, age, sch, height, weight);


int test_reflection() {

	std::cout << "==================================" << std::endl;
	std::cout << "[Class]:" << dage::meta_class<person>::name() << std::endl;
	
	auto& fields = dage::meta_class<person>::indexs();
	std::cout << "[Fields]:|";
	std::for_each(fields.begin(), fields.end(), [](decltype(fields[0]) v){ std::cout << v << "|"; });
	std::cout << std::endl;

	std::cout << "==================================" << std::endl;
	// write to stream
	{
		person p = {110001,"Kevin Sun", false, 35, {20, "hit"}, "not serialized!", 198.8f, 95.0};
		std::ofstream ofs("person.dat",std::ios::binary);
		dage::Stream::to_stream(ofs, p);
	}
	// read from stream
	{
		std::ifstream ifs("person.dat",std::ios::binary);
		person rp = {};
		dage::Stream::from_stream(ifs, rp);

		// dump to cout
		dage::Stream::dumpto_stream(std::cout, rp);
	}

	return 0;
}


int main() {
	test_reflection();
	getchar();
	return 0;
}