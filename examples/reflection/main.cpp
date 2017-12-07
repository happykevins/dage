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
	
	auto fields = dage::meta_class<person>::indexs();
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

struct argn_test {
	int i1, i2, i3, i4, i5, i6 ,i7, i8, i9, i10, i11, i12, i13, i14, i15, i16 ,i17, i18, i19, i20, i21, i22, i23, i24, i25, i26 ,i27, i28, i29, i30, i31, i32, i33, i34, i35, i36 ,i37, i38, i39, i40, i41, i42, i43, i44, i45, i46 ,i47, i48, i49, i50, \
		j1, j2, j3, j4, j5, j6 ,j7, j8, j9, j10, j11, j12, j13, j14, j15, j16 ,j17, j18, j19, j20, j21, j22, j23, j24, j25, j26 ,j27, j28, j29, j30, j31, j32, j33, j34, j35, j36 ,j37, j38, j39, j40, j41, j42, j43, j44, j45, j46 ,j47, j48, j49, j50;
};

REFLECTION(argn_test, i1, i2, i3, i4, i5, i6 ,i7, i8, i9, i10, i11, i12, i13, i14, i15, i16 ,i17, i18, i19, i20, i21, i22, i23, i24, i25, i26 ,i27, i28, i29, i30, i31, i32, i33, i34, i35, i36 ,i37, i38, i39, i40, i41, i42, i43, i44, i45, i46 ,i47, i48, i49, i50, \
		   j1, j2, j3, j4, j5, j6 ,j7, j8, j9, j10, j11, j12, j13, j14, j15, j16 ,j17, j18, j19, j20, j21, j22, j23, j24, j25, j26 ,j27, j28, j29, j30, j31, j32, j33, j34, j35, j36 ,j37, j38, j39, j40, j41, j42, j43, j44, j45, j46 ,j47, j48, j49, j50);

int test_arg100() {
	std::cout << "==================================" << std::endl;
	std::cout << "[Class]:" << dage::meta_class<argn_test>::name() << std::endl;

	auto fields = dage::meta_class<argn_test>::indexs();
	std::cout << "[Fields]:|";
	std::for_each(fields.begin(), fields.end(), [](decltype(fields[0]) v){ std::cout << v << "|"; });
	std::cout << std::endl;
	std::cout << "==================================" << std::endl;

	{
		argn_test n = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,
			1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
		dage::Stream::dumpto_stream(std::cout, n);
	}

	return 0;
}


int main() {
	test_reflection();
	test_arg100();

	getchar();
	return 0;
}
