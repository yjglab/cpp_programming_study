#include <iostream>


// *** ��ó���� ***
// #define�� ȿ�� ���� : �ش� ���� ������.
using namespace std;
#define MY_MACRO "I'm Macro" // ��ũ��(�ַ� �빮�ڷ� / �ֱٿ��� �� ������� ����) 
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE

void usingMacro();

int main() {
	usingMacro();


	return 0;
}

void usingMacro() {
	// ��ũ�� ���
	cout << MY_MACRO << endl; // 9
	cout << MAX(1 + 3, 2) << endl; // 4

	// ��ũ�� ���2
#ifdef LIKE_APPLE // if defined
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE // if not defined
	cout << "Orange " << endl;
#endif
}