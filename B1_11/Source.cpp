#include <iostream>
#include <cmath>

using namespace std; 

int add(int n1, int n2) {
	return n1 + n2;
}
int main() {

	// *** 산술 연산자 Arithmetic Operator ***
	int x = 1;
	int y = -x; // -1
	cout << float(2.0f) / 3 << endl; // 0.666667 | float 과 만나면 항상 float 결과를 출력
	
	cout << -5 / 2 << endl; // -2 | C++ 11부터 소수점 뒤를 절삭
	cout << -5 % 2 << endl; // -1 | % 왼쪽 값의 양/음수에 따라 나머지도 양/음수로 처리

	// *** 증감 연산자 increment decrement operator ***
	int i = 5;
	int j = ++x;
	cout << y << endl; // 6

	int n = 6, m = 6;
	cout << n << " " << m << endl; // 6 6
	cout << n++ << " " << m-- << endl; // 6 6
	cout << n << " " << m << endl; // 7 5

	// * do not use 컴파일러마다 결과가 다를 수 있음
	int p = 1;
	int q = add(p, ++p); 
	q = q++; 

	cout << q << endl;
	return 0;
}