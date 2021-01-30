#include <iostream> // cstdint 포함함.
//#include <cstdint> 

// *** 고정 너비 정수 Fixed-width Integers ***
int main2() {
	using namespace std;

	std::int16_t i(5); // typedef short int16_t
	std::int8_t myint = 65; // typedef signed char int8_t
	cout << i << endl; // 5
	cout << myint << endl; // A

	std::int_fast8_t fi(5); // typedef signed char int_fast8_t (8bit datatype중 가장 빠른) | 1byte
	std::int_least64_t fl(5); // typedef long long int_least_64_t (적어도 64bit 를 가진 datatype) | 8byte
	return 0;
}