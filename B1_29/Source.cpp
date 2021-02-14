#include "Calc.h"
// *** class코드를 header파일, cpp파일로 분리 *** 
int main() {
	
	Calc cal2(10);
	cal2.add(4).sub(2).mul(2).div(2).print(); // 12

	return 0;
}