#include <iostream>

using namespace std;

int main5() {
	const int students = 5;
	int scores[students] = { 94, 33, 50, 49, 83 };
	
	int totalScore = 0;
	int maxScore = 0;
	int minScore = 100;

	for (int i = 0; i < students; i++) {
		totalScore += scores[i];
		maxScore = (maxScore < scores[i]) ? scores[i] : maxScore;
		minScore = (minScore > scores[i]) ? scores[i] : minScore;
	}

	double avgScore = static_cast<double>(totalScore) / students;
	cout << avgScore << endl; // 61.8
	cout << maxScore << endl; // 94
	cout << minScore << endl; // 33

	// *** 다차원 배열 ***
	const int n_rows = 3;
	const int n_columns = 5;

	for (int row = 0; row < n_rows; ++row) {
		for (int col = 0; col < n_columns; ++col) {
			cout << '[' << row << ']' << '[' << col << ']'; 
		}
		cout << endl;
	}
	cout << endl;

	int arr[n_rows][n_columns] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15} }; // n_rows 생략 가능
	for (int row = 0; row < n_rows; ++row) {
		for (int col = 0; col < n_columns; ++col) {
			cout << arr[row][col] << '\t';
		}
		cout << endl;
	}
	
	return 0;	
}