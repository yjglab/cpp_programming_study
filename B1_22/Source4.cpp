#include <iostream>

using namespace std;

int main() {
	// *** 다중 포인터
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;
	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << endl; // value주소 5 ptr주소
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl; // ptr주소 value주소 ptrptr주소
	cout << **ptrptr << endl; // 5

	//
	const int row = 3;
	const int col = 5;

	const int arr[row][col] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9 , 10},
		{11, 12, 13, 14, 15}
	};

	int* r1 = new int[col] {1, 2, 3, 4, 5}; // int*
	int* r2 = new int[col] {6, 7, 8, 9, 10};
	int* r3 = new int[col] {11, 12, 13, 14, 15};
	
	int** rows = new int* [row] {r1, r2, r3}; // 

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	//
	int** matrix = new int* [row];
	for (int r = 0; r < row; r++) {
		matrix[r] = new int[col];
	}
	for (int r = 0; r < row; r++) { // matrix에 값 대입
		for (int c = 0; c < col; c++) {
			matrix[r][c] = arr[r][c];
		}
		cout << endl;
	}

	for (int r = 0; r < row; r++) { // matrix의 모든 원소 출력
		for (int c = 0; c < col; c++) {
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}
	// delete
	for (int r = 0; r < row; r++) {
		delete matrix[r];
	}
	delete[] matrix;

	/*delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] rows;*/

	// 다중 포인터, 1차원 배열을 사용하지 않고 다차원 배열 구현하기
	const int array[row][col] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9 , 10},
		{11, 12, 13, 14, 15}
	};

	int* matrixx = new int[row * col];

	for (int r = 0; r < row; r++) { 
		for (int c = 0; c < col; c++) {
			matrixx[c + col*r] = array[r][c];
		}	
	}
	for (int r = 0; r < row; r++) { // matrixx의 모든 원소 출력
		for (int c = 0; c < col; c++) {
			cout << matrixx[c + col * r] << " ";
		}
		cout << endl;
	}
	delete[] matrixx;

	/* 
	r == 0
	matrixx[0] = array[0][0]
	matrixx[1] = array[0][1]
	matrixx[2] = array[0][2]
	matrixx[3] = array[0][3]
	matrixx[4] = array[0][4]
	r == 1
	matrixx[5] = array[1][0]
	matrixx[6] = array[1][1]
	matrixx[7] = array[1][2]
	matrixx[8] = array[1][3]
	matrixx[9] = array[1][4]
	r == 2
	matrixx[10] = array[2][0]
	matrixx[11] = array[2][1]
	matrixx[12] = array[2][2]
	matrixx[13] = array[2][3]
	matrixx[14] = array[2][4]
	

	 
	 
	*/
	return 0;
}