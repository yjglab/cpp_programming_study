#include <iostream>

// *** 빌트인/fundamental Datatypes ***

int main() {
	using namespace std;

	bool bValue = false;
	cout << bValue << endl; // 0 (true : 1 , false : 0)
	cout << (bValue ? 1 : 0) << endl; // 0
	char cValue = 'A'; // 작은 따옴표 사용
	cout << (int)cValue << endl; // 65
	char cValue2 = 65;
	cout << cValue2 << endl; // A
	float fValue = 3.141592f; // 끝에 f를 붙임
	cout << fValue << endl; // 3.14159
	double dValue = 3.141592;
	cout << dValue << endl; // 3.14159

	// auto : 자동 자료형 설정 
	auto aValue = 3.141592; 
	auto aValue2 = 3.141592f;
	cout << aValue << endl; // 3.14159
	cout << sizeof(aValue) << endl; // 8
	cout << sizeof(aValue2) << endl; // 4
	cout << sizeof(bool) << endl; // 1
	cout << sizeof(bValue) << endl; // 1

	// 초기화 형식에 따른 차이
	int i = 3.1415; // 내부적으로 3으로 캐스팅 함.
	int j = (int)3.1415; // copy initialization
	int a(123); // direct initialization
	int b{ 123 }; // uniform initialization (*최근 사용 빈도↑, 엄격↑)

	int k = 40, l = 50, m; // 같은 데이터 형식에 한해서 동시 선언 가능(권장X)
	
	// *최신 C++에서 변수는 사용 직전에 선언을 권장. (디버깅, 리팩토링 용이성)

	return 0;
}