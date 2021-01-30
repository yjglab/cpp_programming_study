#include <iostream>
#include "CONSTANTS.h"

using namespace std;

void printNumber(const int n) { // parameter 무분별한 값 변경을 막기 위함
	cout << n << endl;
}

int main() {
	printNumber(100);

	// *** 심볼릭 상수 symbolic constants ***
	const double gravity{ 9.8 }; // initialization 필수
	
	// runtime 상수
	int num; 
	cin >> num;
	const int runtimeConstNum(num); 
	
	// compile time 상수 (반드시 compile time에 정의되어야 함)
	constexpr int comptimeConstNum(123);
	cout << comptimeConstNum << endl; // 123

	// 따로 분리한 상수 파일 사용하기
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi; // 원주
	cout << circumference << endl;
	
	return 0;
}