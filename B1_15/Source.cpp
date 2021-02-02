#include <iostream>
// *** auto 키워드

using namespace std;

auto add(int x, int y) { // parameter는 auto로 받을 수 없음
	return x + double(y);
}

auto func(int x, int y) -> int; // trailing return 타입 : 코드 정리용으로 쓰는 경우, 보기 쉽게 하기위함



int main2() {
	
	auto a = 10; // int a = 10 | 자료형 추론
	auto b = 123.0; // double
	auto c = 1 + 2.0; // double

	auto result = add(1, 2); // double

	return 0;
}