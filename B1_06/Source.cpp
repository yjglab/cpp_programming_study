#include <iostream>

using namespace std;

#define MY_MACRO "I'm Macro" // ��ũ��(�ַ� �빮�ڷ� / �ֱٿ��� �� ������� ����) 
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int main() {
	cout << MY_MACRO << endl; // 9
	cout << MAX(1 + 3, 2) << endl; // 4
	cout << "test" << endl;
	return 0;
}