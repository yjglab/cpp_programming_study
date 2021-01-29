#include <iostream>
#include <limits>
#include <iomanip> // 입출력 조작 (default값 : 6 | setprecision()으로 원하는 값 설정)
#include <cmath> // isnan 사용 위한

int main() {
	// *** 무치형 Void ***

	// void my_void; => error: void형은 메모리 차지하지 않으므로 선언X

	int i = 123;
	float flt = 123.456f;

	void* my_void;
	my_void = (void*)&i;
	my_void = (void*)&flt;

	// *** 부동소수점 Floating point ***
	// (1) float : 최소 4byte, 전형적 4byte
	// (2) double: 최소 8byte, 전형적 8byte
	// (3) Long double : 최소 8byte, 전형적 8, 12, 16byte

	using namespace std;

	float f;
	double d;
	long double ld;
	cout << sizeof(f) << endl; // 4
	cout << sizeof(d) << endl; // 8
	cout << sizeof(ld) << endl; // 8
	
	cout << numeric_limits<float>::max() << endl; // 3.40282e+38
	cout << numeric_limits<double>::max() << endl; // 1.79769e+308
	cout << numeric_limits<long double>::max() << endl; // 1.79769e+308

	// * min() : 표현 가능한 수 중 가장 작은 수의 절댓값
	cout << numeric_limits<float>::min() << endl; // 1.17549e-38
	cout << numeric_limits<double>::min() << endl; // 2.22507e-308
	cout << numeric_limits<long double>::min() << endl; // 2.22507e-308

	// * lowest() : 표현 가능한 범위 중 가장 작은 수
	cout << numeric_limits<float>::lowest() << endl; // -3.40282e+38
	cout << numeric_limits<double>::lowest() << endl; // -1.79769e+308
	cout << numeric_limits<long double>::lowest() << endl; // -1.79769e+308

	//
	float flt2(3.14);
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl; // 31.4 * 10^-1
	cout << 31.4e-2 << endl; // 0.314
	cout << 31.4e1 << endl; // 314
	cout << 31.4e2 << endl; // 3140

	// #iomanip
	cout << 1.0 / 3.0 << endl; // 0.333333
	cout << std::setprecision(16);
	cout << 1.0 / 3.0 << endl; // 0.(3=>16번)

	cout << std::setprecision(9);
	float flt3(123456789.0f); // 10 significant digits(유효 숫자)
	cout << flt3 << endl; // 123456792 (내부적으로 2진수로 계산되어 저장됨 -> float 사용으로 인해 정밀도↓)
	
	double d1(0.1);
	cout << d1 << endl;
	cout << std::setprecision(17);
	cout << d1 << endl; // 0.10000000000000001 (2진수 부동소수점 표현방법을 통해 표현한 0.1에 가장 가까운 수)
	
	double d2_1(1.0);
	double d2_2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << d2_1 << endl; // 1 | setprecision 없을 시 1
	cout << d2_2 << endl; // 0.99999999999999989 | setprecision 없을 시 1

	// 수가 아닌 수
	double zero = 0.0;
	double posinf = 5.0 / zero; // +oo
	double neginf = -5.0 / zero; // -oo
	double nan = zero / zero;

	cout << posinf << endl; // inf
	cout << neginf << endl; // -inf
	cout << nan << endl; // -nan(ind) (* ind : indeterminate)

	// std::isnan 현재 값이 nan인지 아닌지
	cout << posinf << " " << std::isnan(posinf) << endl; // 0
	cout << neginf << " " << std::isnan(neginf) << endl; // 0
	cout << nan << " " << std::isnan(nan) << endl; // 1
	cout << 1.0 << " " << std::isnan(1.0) << endl; // 0
	// std::isinf 현재 값이 oo인지 아닌지
	cout << posinf << " " << std::isinf(posinf) << endl; // 1
	cout << neginf << " " << std::isinf(neginf) << endl; // 1

	return 0;
}


