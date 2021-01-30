#include <iostream>
#include "CONSTANTS.h"

using namespace std;

void printNumber(const int n) { // parameter ���к��� �� ������ ���� ����
	cout << n << endl;
}

int main() {
	printNumber(100);

	// *** �ɺ��� ��� symbolic constants ***
	const double gravity{ 9.8 }; // initialization �ʼ�
	
	// runtime ���
	int num; 
	cin >> num;
	const int runtimeConstNum(num); 
	
	// compile time ��� (�ݵ�� compile time�� ���ǵǾ�� ��)
	constexpr int comptimeConstNum(123);
	cout << comptimeConstNum << endl; // 123

	// ���� �и��� ��� ���� ����ϱ�
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi; // ����
	cout << circumference << endl;
	
	return 0;
}