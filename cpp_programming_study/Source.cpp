// # : preprocessor directive(��ó����)
#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main() {
	int x = 10; // initialization // == int x(10);
	x = 123; // assignment
	// L_value = R_value

	// *** cout *** 
	std::cout << x << std::endl; // 123
	std::cout << &x << std::endl; // 00D8FE3C : �޸𸮿� �����Ǿ� �ִ� L_value�� �ּ�
	std::cout << "x is " << x << std::endl;

	double pi = 3.141592;
	std::cout << "x is " << x << "pi is " << pi << std::endl; // x is 123pi is 3.14159 (pi�� ���� ���е��� ������)

	std::cout << "abc" << "\t" << "def\n";// abc     def + �ٹٲ�

	using namespace std;
	cout << "using namespace std...!" << endl;

	/*cout << "\a";*/ // audio ���(�򵿼Ҹ�)

	// *** cin ***
	int y;
	cin >> y;
	cout << "Your Input is " << y << endl;
	// ���� �ʹ� �Ŵ��� ���� �Է��� �� -> 2147483647 int������ ���� �� �ִ� �ִ��� ���. (�Է� ��ȿ�� ����)


	return 0;
}