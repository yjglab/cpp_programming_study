#include <iostream>
#include <string>
#include <limits>

using namespace std;
int main2() {
	const char my_char[] = "hello, string";
	const string my_str = "hello, string"; // ����� ���� �ڷ���
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

	// ���ڿ��� �ޱ�
	cout << "Your name : ";
	string name;
	/*cin >> name;*/
	std::getline(std::cin, name); // Enter�� ĥ ������ ���� ����
	cout << "Your age : ";
	string age;
	/*cin >> age;*/
	std::getline(std::cin, age);
	cout << name << " " << age << endl;

	// ���� + ���ڿ� �ޱ�
	cout << "Your age : ";
	int age1;
	cin >> age1;
	/*std::getline(std::cin, age1);*/

	/*std::cin.ignore(32767, '\n');*/ // ���� �ٹٲ��� �ö����� �ִ� 32767���� ���� ���� | magic number Ȱ��
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name : ";
	string name1;
	/*cin >> name1;*/
	std::getline(std::cin, name1); 
	cout << name1 << " " << age1 << endl;

	// ���ڿ� 2�� ����
	string a("string1, ");
	string b("string2 and ");
	string c = a + b; // append
	c += "string3";
	cout << c << endl; // string1, string2 and string3
	cout << c.length() << endl; // 28 | "" ���� �� 28���� | �޸� �� 29 

	return 0;
}