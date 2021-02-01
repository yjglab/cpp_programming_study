#include <iostream>
using namespace std;

int value = 10; 

void func5() {
	// func5()가 호출되어 a가 선언됨. 한번 선언된 a는 계속 같은 메모리를 유지하고 초기화는 반복되지 않음
	static int a = 1; // static 변수의 초기화는 반드시 필요
	++a;
	cout << a << endl;
}

int main3() {
	// *** 전역변수 global var *** 
	// ( 전역변수를 쓰거나 변수를 외부로 내보내는 경우는 좋지 않음. 가급적 지역변수 사용을 권장)
	
	cout << value << endl; // 10
	int value = 20;
	cout << value << endl; // 20

	cout << ::value << endl; // 10 | 다른 영역에 선언된 value를 가져옴

	// *** 정적변수 static var *** (디버깅, 테스팅 용으로 용이) 
	func5(); // 2
	func5(); // 3

	return 0;
}