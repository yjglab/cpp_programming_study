#include <iostream>
#include <string>
#include <limits>

using namespace std;
int main2() {
	const char my_char[] = "hello, string";
	const string my_str = "hello, string"; // 사용자 정의 자료형
	string myId = "12345";
	cout << my_str << endl;

	/*
	cout << "Your name : ";
	string name;
	cin >> name;
	cout << "Your age : ";
	string age;
	cin >> age;
	cout << name << " " << age << endl; // jack jack\njack jack
	*/

	// 문자열만 받기
	cout << "Your name : ";
	string name;
	/*cin >> name;*/
	std::getline(std::cin, name); // Enter를 칠 때까지 값을 받음
	cout << "Your age : ";
	string age;
	/*cin >> age;*/
	std::getline(std::cin, age);
	cout << name << " " << age << endl;

	// 정수 + 문자열 받기
	cout << "Your age : ";
	int age1;
	cin >> age1;
	/*std::getline(std::cin, age1);*/

	/*std::cin.ignore(32767, '\n');*/ // 다음 줄바꿈이 올때까지 최대 32767개의 값을 무시 | magic number 활용
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name : ";
	string name1;
	/*cin >> name1;*/
	std::getline(std::cin, name1); 
	cout << name1 << " " << age1 << endl;

	// 문자열 2개 결합
	string a("string1, ");
	string b("string2 and ");
	string c = a + b; // append
	c += "string3";
	cout << c << endl; // string1, string2 and string3
	cout << c.length() << endl; // 28 | "" 제외 총 28글자 | 메모리 상 29 

	return 0;
}