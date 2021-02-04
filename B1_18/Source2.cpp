#include <iostream>

using namespace std;

int main() {
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

	return 0;
}