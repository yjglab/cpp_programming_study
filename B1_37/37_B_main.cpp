#include "37_B_Timer.h"
#include "37_B_Worker.h"

using namespace std;

// *** 객체들의 관계 (4) 의존 관계 (가장 많이 쓰이는 패턴) ***
int main() {
	Worker().func(); // timer 실행
	return 0;
}