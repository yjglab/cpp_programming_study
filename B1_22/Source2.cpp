#include <iostream> 
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;
int main4() {
	// *** for each ***

	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// 각 원소들이 순서대로 하나씩 들어옴 
	for (auto& number : fibonacci) {
		number *= 10;
	}
	
	for (const auto& number : fibonacci) { // 이 for문에서는 number값을 변경할 수 없음 
		cout << number << " ";
	}
	cout << endl;

	//
	int max_num = std::numeric_limits<int>::lowest();
	for (const auto& n : fibonacci) {
		max_num = std::max(max_num, n); // 현재의 max_num과 들어온 n 중 더 큰 값을 할당
	}
	cout << max_num << endl; // 890

	// array를 동적 할당하는 경우엔 사용할 수 없으나 vector로 대체 가능
	vector<int> fibonacci_v = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	
	return 0;
}