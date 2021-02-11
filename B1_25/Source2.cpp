#include <iostream>
using namespace std;
// *** 재귀적 함수 호출 Recursive Function Call ***

void countDown(int count) {
	cout << count << endl;
	if (count > 0) 
		countDown(count - 1);
	
}
int sumTo(int sumto) {
	if (sumto <= 0) {
		return 0;
	}
	else if (sumto <= 1) {
		return 1;
	}
	else {
		return sumTo(sumto - 1) + sumto;
	}
}
int main4() {
	countDown(5); // 5 4 3 2 1 0
	
	cout << sumTo(10) << endl; // 55
	return 0;
}