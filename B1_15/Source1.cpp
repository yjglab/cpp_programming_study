#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;
int main() {
	int a = 10;
	cout << typeid(4.0).name() << endl; // double | 리터럴(4.0)의 자료형을 보여줌.
	cout << typeid(a).name() << endl; // int
	
	// *** 형 변환 Type conversion ***
	// (1) 암시적 형 변환
	int b = 100.5; // double을 강제로 int로 변환

	// (2) 명시적 형 변환 (캐스팅)
	// numeric promotion
	float f = 1.0f;
	double d = f; //  | 더 작은 메모리 공간의 값이 더 큰 메모리 공간으로 오름

	// numeric conversion
	int i = 30000;
	char c = i; 
	cout << static_cast<int>(c) << endl; // 48 | char형의 최댓값보다 값이 높아 이상한 수가 출력됨

	double d2 = 0.123456789;
	float f2 = d2;
	
	int i2 = 1234;
	float f3 = i2;
	
	float f4 = 3.14;
	int i3 = f4;

	cout << std::setprecision(12) << f2 << typeid(f2).name() << endl; // 0.123456791043 | 정밀도 부족
	cout << std::setprecision(12) << d2 << typeid(d2).name() << endl; // 0.123456789
	cout << std::setprecision(12) << f3 << typeid(f3).name() << endl; // 1234
	cout << std::setprecision(12) << i3 << typeid(i3).name() << endl; // 3

	// 우선 순위 : int < unsigned int < long < unsigned long < long long < unsinged long long < float < double < long double
	cout << 5u - 10u << endl; // 4294967291 | 우선순위로 인해 int로 변환되지 않음
	
	return 0;
}