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
	
	v.resize(2); // ���� ũ��� 3������ �ӽ������� 2�� ������
	cout << v.size() << " " << v.capacity() << endl; // 2 3
	/* cout << v[2] << endl; // runtime error */
	/* cout << v.at(2) << endl; // runtime error */

	int* ptr = v.data();
	cout << ptr[2] << endl; // 3
	
	// reserve()
	v = { 1, 2, 3 };
	v.reserve(1024); // �޸��� �뷮�� �̸� Ȯ����
	for (auto& e : v) {
		cout << e << " "; // 1 2 3 | ���� ������ 0���� ��µ��� �ʾ���
	}
	cout << endl;
	cout << v.size() << " " << v.capacity() << endl; // 3 1024

	// vector�� stackó�� ����ϱ�
	std::vector<int> stack;
	stack.push_back(3); 
	printStack(stack); // 3
	stack.push_back(5); 
	printStack(stack); // 3 5
	stack.push_back(7);
	printStack(stack); // 3 5 7
	stack.pop_back(); // �� �� ���� 1�� ��
	printStack(stack); // 3 5
	stack.pop_back();
	printStack(stack); // 3 
	stack.pop_back();
	printStack(stack); // 

	return 0;
}