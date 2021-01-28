#include <iostream>
using namespace std;

// *** 지역범위 ***
// 지역변수는 영역({})을 벗어나는 순간 사용할 수 없게 된다.
// 지역변수가 차지하고 있던 메모리는 그 지역변수가 영역을 벗어날 때 "stack" 메모리로 반납된다.
// 반납된 메모리는 다음 지역변수가 사용할 수 있도록 대기한다.
int main() {

	int x = 0;
	cout << x << " " << &x << endl; // 0 0주소
	{
		int x = 1;
		cout << x << " " << &x << endl; // 1 1주소
	}

	{
		int x = 2;
		cout << x << " " << &x << endl; // 2 2주소 
	}



	int y = 0;
	cout << y << " " << &y << endl; // 0 0주소
	{
		y = 10;
		cout << y << " " << &y << endl; // 10 10주소
	}
	cout << y << " " << &y << endl; // 10 10주소

	return 0;
}