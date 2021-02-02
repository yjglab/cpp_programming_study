#include <iostream>
using namespace std;

/* 
	int g_x : 초기화 하지 않고 선언만 한 전역 변수 | external linkage
	static int g_x : 초기화 하지 않은 정적 변수 | internal linkage
	const int g_x : Err
	
	extern int g_z : 선언이 된 파일에서는 사용 가능
	extern const int g_z : 선언이 된 파일에서는 사용 가능 | 단, 반드시 어느 파일 1개에서만 정의는 되어야 함

	int g_y(1) : 초기화 된 전역변수 | external linkage
	static int g_y(1) : 초기화 된 정적전역변수 | internal linkage
	const int g_y(1) : 초기화 된 일반상수 | internal linkage

	extern int g_w(1) : 초기화 된 전역변수 | 다른 파일에서 초기화 불가 | external linkage
	extern const int g_w(1) : 초기화 된 일반상수 | external linkage
*/
int main55() {
	// ***  ***

	return 0;
}