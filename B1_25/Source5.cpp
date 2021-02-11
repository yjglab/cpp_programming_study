#include <iostream>
#include <cstdarg> // for ellipsis
using namespace std;

// *** ������ȣ Ellipsis ***
// Debugging�� ������� �־� ����� ���������� ����
double findAverage(int count, ...) {
	double sum = 0;
	va_list list; // char* va_list
	va_start(list, count);

	for (int arg = 0; arg < count; arg++) {
		sum += va_arg(list, int);
	}

	va_end(list);

	return sum / count;
}
int main() {
	// ù ���� : count
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl; // 1 | 1�� �����ϰ� ������ ���� ����
	cout << findAverage(3, 1, 2, 3) << endl; // 2
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl; // 3
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl; // trash�� | ����

	return 0;
}
