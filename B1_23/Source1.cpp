#include <iostream>
#include <vector>

using namespace std;
int main() {

	// *** std::vector *** ���� array�� ��ü�� �� �ִ� 
	// vector array�� �޸𸮸� �ڵ����� ������

	std::vector<int> varr = { 1, 2, 3, 4, 5 }; // 5 | ���� array�̹Ƿ� ũ��� ������ �ʿ� ����
	cout << varr.size() << endl;
	std::vector<int> varr2 = { 1, 2 ,3 }; // 3
	cout << varr2.size() << endl;
	std::vector<int> varr3 { 10, 20 ,30 }; // 3
	cout << varr3.size() << endl;

	for (auto& itr : varr3) {
		cout << itr << " "; // 10 20 30
	}
	cout << endl;

	cout << varr3[1] << endl;
	cout << varr3.at(1) << endl;

	varr3.resize(10); // �迭�� ũ�⸦ 10���� �缳��

	return 0;

}