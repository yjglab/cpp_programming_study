#include <iostream>
#include <cstring>

using namespace std;
int main() {
	
	char myStr[] = "string"; // 

	for (int i = 0; i < 7; ++i) {
		cout << (int)myStr[i] << endl;// 115 116 114 105 110 103 0
	}

	char str1[255];
	/*cin >> str1;*/
	str1[4] = '\0'; // \0을 만나면 문자열 종료 | 빈칸(space)를 만나면 문자열 종료
	cout << str1 << endl;
	//
	char str2[255];
	cin.getline(str2, 255);
	int idx = 0;
	while (1) {
		if (str2[idx] == '\0') {
			break;
		}
		cout << str2[idx] << " " << (int)str2[idx] << endl;
		++idx;
	}

	// strcpy_s
	char source[] = "Copy this!";
	char dest[50];
	
	strcpy_s(dest, 50, source); // 메모리 침범 방지를 위해 최대 복사 가능한 메모리를 제한
	cout << source << endl; // Copy this!
	cout << dest << endl; // Copy this!
	
	// strcat_s : 문자열 끝부분에 복사
	strcat_s(dest, source);
	cout << source << endl; // Copy this!
	cout << dest << endl; // Copy this!Copy this!

	// strcmp : 비교할 두 문자열이 같으면 0을 return
	if (strcmp(source, dest) == 0) {
		cout << "equal";
	}
	else {
		cout << "not equal"; // 실행
	}
	return 0;
}