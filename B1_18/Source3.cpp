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
	str1[4] = '\0'; // \0�� ������ ���ڿ� ���� | ��ĭ(space)�� ������ ���ڿ� ����
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
	
	strcpy_s(dest, 50, source); // �޸� ħ�� ������ ���� �ִ� ���� ������ �޸𸮸� ����
	cout << source << endl; // Copy this!
	cout << dest << endl; // Copy this!
	
	// strcat_s : ���ڿ� ���κп� ����
	strcat_s(dest, source);
	cout << source << endl; // Copy this!
	cout << dest << endl; // Copy this!Copy this!

	// strcmp : ���� �� ���ڿ��� ������ 0�� return
	if (strcmp(source, dest) == 0) {
		cout << "equal";
	}
	else {
		cout << "not equal"; // ����
	}
	return 0;
}