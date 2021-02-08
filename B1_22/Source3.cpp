#include <iostream>
using namespace std;
// *** void pointer ***

enum Type {
	INT,
	FLOAT,
	CHAR,
};

int main5() {
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;
	
	ptr = &i; // 주소이므로 자료형에 관련없이 할당 가능
	ptr = &c;
	ptr = &f;


	// void pointer는 포인터 연산, de-referecning 불가
	/* cout << ptr + 1; */
	/* cout << *ptr << endl; */
	
	Type type = FLOAT; // 고전적인 방식
	if (type == FLOAT) {
		cout << *static_cast<float*>(ptr) << endl; // 3 | float* 로 캐스팅한 것을 de-referencing
	}
	else if (type == INT) {
		// .. int로 캐스팅
	}
	

	return 0;
}