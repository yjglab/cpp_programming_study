// internal linkage : 개별 .cpp 파일 안에서만 전역으로 작동하는 전역 변수들을 의미
// external linkage : 


#include <iostream>
// #include "test_external_file.cpp" 외부 파일을 직접 불러오는 것은 가급적 사용하지 않음

using namespace std;

static int g_a = 10; // 전역 static => 다른 .cpp 파일에서 접근할 수 없음

// forward declaration
extern void external_func(); // extern은 생략 가능
extern int external_var;

int main() {

	external_func(); // hello file | forward declaration으로 실행 가능
	cout << external_var << endl; // 1000
	return 0;
}