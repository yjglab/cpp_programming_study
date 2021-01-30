#include <iostream>
#include <cmath>

using namespace std; 

int add(int n1, int n2) {
	return n1 + n2;
}
int main2() {

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

	// *** sizeof() operator *** 
	cout << sizeof(float) << endl; // 4 (32bit)
	float f;
	cout << sizeof f << endl; // 4

	// *** comma operator *** 
	int c = 3;
	int d = 10;
	int r = (++c, ++d); // 왼쪽계산(++c) => 오른쪽계산(++d) => 오른쪽값을 r에 할당
	cout << c << " " << d << " " << r << endl; // 4 11 11 

	int w = 1, u = 10;
	int e;
	e = w, u;
	cout << e << endl; // 1 | comma 연산자는 = 연산자보다 후순위.
	e = (w, u);
	cout << e << endl; // 10

	// *** 조건부 연산자 conditional operator ( == arithmetric if) *** 
	bool onSale = true;
	const int price = (onSale) ? 20 : 30;
	cout << price << endl; // 20
	
	// 연산자 사용 중 오류가 나는 경우 연산순위를 생각하기
	cout << ((5 % 2 == 0) ? "even" : "odd") << endl;
	
	// *** 관계 연산자 Relational operator *** 
	int r1, r2;
	cin >> r1 >> r2;
	if (r1 == r2)
		cout << "equal" << endl;
	if (r1 != r2)
		cout << "Not equal" << endl;
	if (r1 > r2)
		cout << "r1 is greater than r2" << endl;
	if (r1 < r2)
		cout << "r1 is less than r2" << endl;
	if (r1 >= r2)
		cout << "r1 is greater than r2 or equal to r2" << endl;
	if (r1 <= r2)
		cout << "r1 is less than r2 or equal to r2" << endl;

	double d1(100 - 99.99);
	double d2(10 - 9.99);
	cout << d1 << endl;
	cout << d2 << endl;
	if (d1 == d2)
		cout << "equal" << endl;
	else {
		cout << "Not equal" << endl; // 실행
		if (d1 > d2)
			cout << "d1 > d2" << endl; // 실행
		else {
			cout << "d1 < d2" << endl;
		}
	}
	const double epsilon = 1e-10; // 차이를 판별하기 위한 기준 설정
	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl; // 실행
	else
		cout << "Not equal, never" << endl;

	cout << std::abs(d1 - d2) << endl; // 5.32907e-15
	return 0;
}