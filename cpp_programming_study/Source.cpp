// # : preprocessor directive(전처리기)
#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main() {
	int x = 10; // initialization // == int x(10);
	x = 123; // assignment
	// L_value = R_value

	// *** cout *** 
	std::cout << x << std::endl; // 123
	std::cout << &x << std::endl; // 00D8FE3C : 메모리에 지정되어 있는 L_value의 주소
	std::cout << "x is " << x << std::endl;

	double pi = 3.141592;
	std::cout << "x is " << x << "pi is " << pi << std::endl; // x is 123pi is 3.14159 (pi의 값의 정밀도기 조절됨)

	std::cout << "abc" << "\t" << "def\n";// abc     def + 줄바꿈

	using namespace std;
	cout << "using namespace std...!" << endl;

	/*cout << "\a";*/ // audio 출력(띵동소리)

	// *** cin ***
	int y;
	cin >> y;
	cout << "Your Input is " << y << endl;
	// 만약 너무 거대한 수를 입력할 시 -> 2147483647 int변수가 가질 수 있는 최댓값을 출력. (입력 유효성 검증)


	return 0;
}