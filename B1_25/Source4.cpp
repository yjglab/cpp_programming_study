#include <iostream>
#include <string>
using namespace std;

// *** 명령줄 인수 command line arguments ***
int main7(int argc, char *argv[]) { // C컴파일러가 운영체제가 그렇게 작동할 수 있도록 미리 약속을 하게됨
	// Properties - Debugging - Command Arguments 부분에 값을 입력 (1024 라면_
	for (int count = 0; count < argc; count++) {
		std::string argv_single = argv[count]; // 
		
		if (count == 1) {
			int input_num = std::stoi(argv_single); // std::stoi() : 정수로 변환
			cout << input_num + 1 << endl; // 1025
		}
		else {
			cout << argv_single[count] << endl; // 입력된 값들을 차례대로 출력
		}
	}

	// Boost.Program_options를 사용하면 command line arguments를 사용 시 더 편리함
	return 0;
}

/*
Command Line Argument 명령어를 사용하는 이유는 만든 프로그램을 
밖에서도 컨트로를 할 수 있게 하기위함이다. 그 예로 게임의 난이도 설정이 있다

*/