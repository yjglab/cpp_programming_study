#include <iostream> 
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;
int main4() {
	// *** for each ***

	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// �� ���ҵ��� ������� �ϳ��� ���� 
	for (auto& number : fibonacci) {
		number *= 10;
	}
	
	for (const auto& number : fibonacci) { // �� for�������� number���� ������ �� ���� 
		cout << number << " ";
	}
	cout << endl;

	//
	int max_num = std::numeric_limits<int>::lowest();
	for (const auto& n : fibonacci) {
		max_num = std::max(max_num, n); // ������ max_num�� ���� n �� �� ū ���� �Ҵ�
	}
	cout << max_num << endl; // 890

	// array�� ���� �Ҵ��ϴ� ��쿣 ����� �� ������ vector�� ��ü ����
	vector<int> fibonacci_v = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	
	return 0;
}