#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// *** parameter | actual parameters
int callByVal(int a, int b) { 
	cout << "call by Val : in func " << a << " " << &a << endl;
	return a + b;
}

void callByRef(int& y) {
	y = y + 1;
}

void callByRef2(int*& ptr_ref) { // void kk((int*) &ptr_k) | ������ ������ reference �� �ޱ� | typedef�� �Ἥ �˾ƺ��� ���� �ٲٴ� �����
	cout << ptr_ref << " " << &ptr_ref << endl;
}
void getSinCos(const double& degrees, double& sin_out, double& cos_out) { // �Է�, ���, ���
	static const double pi = 3.141592;
	const double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
	
}

void printElement(int(&arr)[4]) { // �迭 ũ�� �Է� �ʼ� | ������	
}
void printElementUsingVector(const vector<int>& arr_v) { // vector array�� ����� ref�� �޴� ���
}

int main2() {
	// call by value ���� ���� ����
	int x = 1;
	int y = 2;
	callByVal(x, y + 1); // ���� x�� y + 1�� ������ ���� �ƴ϶� �� ���� 1�� 2+ 1�� ����
	cout << "call by Val : in main " << x << " " << &x << endl;

	// call by reference ������ ���� �μ� ���� (�� ����)
	int i = 5;
	cout << "call by Ref : in main " << i << " " << &i << endl; // 5 | �ּ� ����
	callByRef(i); // ���� i ��ü�� ���ڷ� ����
	cout << "call by Ref : in main " << i << " " << &i << endl; // 6 | �ּ� ����
	
	// 
	double sin(0.0);
	double cos(0.0);
	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;

	//
	int k = 10;
	int* ptr_k = &k;

	cout << ptr_k << " " << &ptr_k << endl; // ptr_k�� ��(k�� �ּ�), ptr_k�� �ּ�
	callByRef2(ptr_k); // // ptr_k�� ��(k�� �ּ�), ptr_k�� �ּ�

	//
	int arr[]{ 1, 2 ,3 ,4 };
	printElement(arr);
	
	vector<int> arr_v{ 1, 2 ,3 ,4 };
	printElementUsingVector(arr_v);

	return 0;
}