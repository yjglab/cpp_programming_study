#include <iostream>
#include <cassert>
#include <array>
// *** assert 단언하기 ***
using namespace std;

void printVal(const std::array<int, 5>& arr_ref, const int& ix) {
	assert(ix >= 0); // &&로 연결할 수 있지만 에러시 에러부분을 확인하기 위해 나눔
	assert(ix <= arr_ref.size() - 1);
	cout << arr_ref[ix] << endl;
}

int main6() {
	// assert() : 환경설정에서 모드설정에 따라 작동 유무 가능 | 기본값 Debug모드에서 작동
	int number = 5;
	assert(number == 5); // number가 반드시 5여야만 한다로 선언 | 5가 아니라면 error
	
	//
	std::array<int, 5> myArr{ 1, 2, 3 ,4 ,5 };
	printVal(myArr, 3); // 4

	// static_assert() : compile time에서 확정적인 값이 들어와야함
	const int a = 10;
	static_assert(a == 10, "10이 아니라면 문구를 남길 수 있습니다");

	return 0;
}