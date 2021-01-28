#include <iostream>

using namespace std;

#define MY_MACRO "I'm Macro" // 매크로(주로 대문자로 / 최근에는 잘 사용하지 않음) 
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int main() {
	cout << MY_MACRO << endl; // 9
	cout << MAX(1 + 3, 2) << endl; // 4
	cout << "test" << endl;
	return 0;
}