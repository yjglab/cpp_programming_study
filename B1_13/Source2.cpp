// internal linkage : ���� .cpp ���� �ȿ����� �������� �۵��ϴ� ���� �������� �ǹ�
// external linkage : 


#include <iostream>
// #include "test_external_file.cpp" �ܺ� ������ ���� �ҷ����� ���� ������ ������� ����

using namespace std;

static int g_a = 10; // ���� static => �ٸ� .cpp ���Ͽ��� ������ �� ����

// forward declaration
extern void external_func(); // extern�� ���� ����
extern int external_var;

int main() {

	external_func(); // hello file | forward declaration���� ���� ����
	cout << external_var << endl; // 1000
	return 0;
}