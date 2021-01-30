#include <iostream>
#include <limits>

int main() {
	using namespace std;

	// *** char Datatype ***

	char c1(65);
	char c2('A');
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl; // A A 65 65
	
	// C style casting
	cout << (char)65 << endl; // A
	cout << (int)'A' << endl; // 65
	// C++ style casting
	cout << char(65) << endl; // A
	cout << int('A') << endl; // 65
	cout << static_cast<char>(65) << endl; // A
	cout << static_cast<int>('A') << endl; // 65

	char c3(97);
	cout << c3 << endl; // a
	cout << static_cast<int>(c3) << endl; // 97
	cout << c3 << endl; // a

	// ** static_cast< > : 타이핑이 길지만 캐스팅되는 사실을 확실히 알릴 때 용이함.
	// ** 만약 char 변수에 "abc"를 받게 할 경우 a만 받고 나머지 값들은 버퍼에 저장 | 그 다음 출력에서 버퍼에 저장된 값을 사용
	char c4(65);
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // (abc를 입력한 경우=>) a 97
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // (abc를 입력한 경우=>) b 98
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // (abc를 입력한 경우=>) c 99
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // 다시 입력값을 받음

	//
	cout << sizeof(char) << endl; // 1
	cout << (int)std::numeric_limits<char>::max() << endl; // 127
	cout << (int)std::numeric_limits<char>::lowest() << endl; // -128

	cout << sizeof(unsigned char) << endl; // 1
	cout << (int)std::numeric_limits<unsigned char>::max() << endl; // 255
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl; // 0

	// \n : 단순 줄바꿈 | std::endl : 버퍼에 있는 모든 내용을 출력 후 줄바꿈 | std::flush : 버퍼에 있는 모든 내용을 출력만 함
	char c5(65);
	cout << "This is first line \nsecond line" << endl;
	cout << int('\n') << endl; // 10
	cout << " \" "; // \"를 하나의 문자(")로 컴파일.
	cout << " \? "; // ?

	// 
	wchar_t c6; // window character | 잘 사용하지 않음.
	char16_t c7; // ASCII 외 다른 문자(유니코드) 출력
	char32_t c7; // ASCII 외 다른 문자(유니코드) 출력
	return 0;
}