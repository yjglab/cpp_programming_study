#include <iostream>

using namespace std;
// *** 메모리 정적 할당 ***

int main2() {
	
	// new int : int사이즈에 맞춰서 os로부터 메모리를 받고 그 메모리 주소를 가짐
	int* ptr = new int{ 7 };
	

	cout << ptr << endl; // 주소
	cout << *ptr << endl; // 7

	delete ptr; // os에 메모리를 돌려줌
	
	ptr = nullptr;
	if (ptr != nullptr) { // == if(ptr) | 의미가 있을때에만 동작하도록
		cout << ptr << endl; // 미실행
		cout << *ptr << endl; // 미실행
	}
	else {
		cout << "could not allocate memory"; // 실행
	}
	
	// std::nothrow => 어떤 경우에도 오류나지 않고 계속 진행 (예외 처리 관련)
	int* ptr2 = new (std::nothrow)int{ 10 };
	int* ptr3 = ptr2;

	delete ptr2;
	ptr2 = nullptr;
	ptr3 = nullptr; // 꼼꼼한 프로그래밍

	// 메모리 누수 memory leak
	// task manager에서 어떤 프로그램의 메모리가 계속 증가하면 그 프로그램 내 메모리가 누수
	while (1) {
		int* ptr_a = new int; // 멍청한 프로그래밍
		cout << ptr_a << endl;
			
		delete ptr_a; // 이후 메모리가 새지 않음
	}

	// * new와 delete은 적게 사용하는 것이 좋음


	return 0;
}
