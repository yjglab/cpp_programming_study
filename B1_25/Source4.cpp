#include <iostream>
#include <string>
using namespace std;

// *** ����� �μ� command line arguments ***
int main7(int argc, char *argv[]) { // C�����Ϸ��� �ü���� �׷��� �۵��� �� �ֵ��� �̸� ����� �ϰԵ�
	// Properties - Debugging - Command Arguments �κп� ���� �Է� (1024 ���_
	for (int count = 0; count < argc; count++) {
		std::string argv_single = argv[count]; // 
		
		if (count == 1) {
			int input_num = std::stoi(argv_single); // std::stoi() : ������ ��ȯ
			cout << input_num + 1 << endl; // 1025
		}
		else {
			cout << argv_single[count] << endl; // �Էµ� ������ ���ʴ�� ���
		}
	}

	// Boost.Program_options�� ����ϸ� command line arguments�� ��� �� �� ����
	return 0;
}

/*
Command Line Argument ��ɾ ����ϴ� ������ ���� ���α׷��� 
�ۿ����� ��Ʈ�θ� �� �� �ְ� �ϱ������̴�. �� ���� ������ ���̵� ������ �ִ�

*/