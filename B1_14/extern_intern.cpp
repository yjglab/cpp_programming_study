#include <iostream>
using namespace std;

/* 
	int g_x : �ʱ�ȭ ���� �ʰ� ���� �� ���� ���� | external linkage
	static int g_x : �ʱ�ȭ ���� ���� ���� ���� | internal linkage
	const int g_x : Err
	
	extern int g_z : ������ �� ���Ͽ����� ��� ����
	extern const int g_z : ������ �� ���Ͽ����� ��� ���� | ��, �ݵ�� ��� ���� 1�������� ���Ǵ� �Ǿ�� ��

	int g_y(1) : �ʱ�ȭ �� �������� | external linkage
	static int g_y(1) : �ʱ�ȭ �� ������������ | internal linkage
	const int g_y(1) : �ʱ�ȭ �� �Ϲݻ�� | internal linkage

	extern int g_w(1) : �ʱ�ȭ �� �������� | �ٸ� ���Ͽ��� �ʱ�ȭ �Ұ� | external linkage
	extern const int g_w(1) : �ʱ�ȭ �� �Ϲݻ�� | external linkage
*/
int main55() {
	// ***  ***

	return 0;
}