#include <iostream>

// *** ��Ʈ��/fundamental Datatypes ***

int main() {
	using namespace std;

	bool bValue = false;
	cout << bValue << endl; // 0 (true : 1 , false : 0)
	cout << (bValue ? 1 : 0) << endl; // 0
	char cValue = 'A'; // ���� ����ǥ ���
	cout << (int)cValue << endl; // 65
	char cValue2 = 65;
	cout << cValue2 << endl; // A
	float fValue = 3.141592f; // ���� f�� ����
	cout << fValue << endl; // 3.14159
	double dValue = 3.141592;
	cout << dValue << endl; // 3.14159

	// auto : �ڵ� �ڷ��� ���� 
	auto aValue = 3.141592; 
	auto aValue2 = 3.141592f;
	cout << aValue << endl; // 3.14159
	cout << sizeof(aValue) << endl; // 8
	cout << sizeof(aValue2) << endl; // 4
	cout << sizeof(bool) << endl; // 1
	cout << sizeof(bValue) << endl; // 1

	// �ʱ�ȭ ���Ŀ� ���� ����
	int i = 3.1415; // ���������� 3���� ĳ���� ��.
	int j = (int)3.1415; // copy initialization
	int a(123); // direct initialization
	int b{ 123 }; // uniform initialization (*�ֱ� ��� �󵵡�, ���ݡ�)

	int k = 40, l = 50, m; // ���� ������ ���Ŀ� ���ؼ� ���� ���� ����(����X)
	
	// *�ֽ� C++���� ������ ��� ������ ������ ����. (�����, �����丵 ���̼�)

	return 0;
}