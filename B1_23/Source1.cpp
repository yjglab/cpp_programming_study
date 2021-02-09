#include <iostream>
#include <vector>

using namespace std;
int main() {

	// *** std::vector *** 동적 array를 대체할 수 있는 
	// vector array는 메모리를 자동으로 지워줌

	std::vector<int> varr = { 1, 2, 3, 4, 5 }; // 5 | 동적 array이므로 크기는 적어줄 필요 없음
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

	varr3.resize(10); // 배열의 크기를 10으로 재설정

	return 0;

}