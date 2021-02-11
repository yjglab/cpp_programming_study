#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack) {
	for (auto& e : stack) {
		cout << e << " ";
	}
	cout << endl;
}
int main3() {
	std::vector<int> v{ 1, 2, 3 };
	for (auto& e : v) {
		cout << e << " "; // 1 2 3
	}
	cout << endl;
	cout << v.size() << endl; // 3
	
	v.resize(2); // 실제 크기는 3이지만 임시적으로 2로 변경함
	cout << v.size() << " " << v.capacity() << endl; // 2 3
	/* cout << v[2] << endl; // runtime error */
	/* cout << v.at(2) << endl; // runtime error */

	int* ptr = v.data();
	cout << ptr[2] << endl; // 3
	
	// reserve()
	v = { 1, 2, 3 };
	v.reserve(1024); // 메모리의 용량을 미리 확보함
	for (auto& e : v) {
		cout << e << " "; // 1 2 3 | 남은 공간이 0으로 출력되지 않았음
	}
	cout << endl;
	cout << v.size() << " " << v.capacity() << endl; // 3 1024

	// vector를 stack처럼 사용하기
	std::vector<int> stack;
	stack.push_back(3); 
	printStack(stack); // 3
	stack.push_back(5); 
	printStack(stack); // 3 5
	stack.push_back(7);
	printStack(stack); // 3 5 7
	stack.pop_back(); // 맨 뒤 원소 1개 뺌
	printStack(stack); // 3 5
	stack.pop_back();
	printStack(stack); // 3 
	stack.pop_back();
	printStack(stack); // 

	return 0;
}