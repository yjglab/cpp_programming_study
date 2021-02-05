#include <iostream>
#include <cstdlib> // std::radn(), std::srand()
#include <ctime> // std::time()
#include <random>

using namespace std;

unsigned int PRNG() {  // Pseudo Random Number Generator
	static unsigned int seed = 5523;
	seed = 8253729 * seed + 2396403;

	return seed % 32768;
	
}

int getRandNum(int min, int max) {
	static const double fraction = 1.0 / (RAND_MAX); // RAND_MAX : rand�� ���� �� �ִ� ���� ū ��
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}
int main2() {
	/*
	for (int count = 1; count <= 100; ++count) {
		cout << PRNG() << "\t";
		if (count % 5 == 0) {
			cout << endl;
		}
	}
	*/

	/*std::srand(5523); */ // seed ���� �����Ǹ� random���� ������ ���� | ����� �ÿ��� seed�� ������ ��
	std::srand(static_cast<unsigned int>(std::time(0))); // �ð��� ������ ���� ���ϴ� seed �� �ο�

	for (int count = 1; count <= 100; ++count) {
		cout << std::rand() << "\t";
		if (count % 5 == 0) {
			cout << endl;
		}
	}
	
	cout << endl;

	//
	for (int count = 1; count <= 100; ++count) {
		cout << getRandNum(5, 8) << "\t";
		if (count % 5 == 0) {
			cout << endl;
		}
	}
	
	//
	cout << endl;
	std::random_device rd; // �� ������ seed �ѹ�
	std::mt19937; // 32��Ʈ ����
	std::mt19937_64 mersenne(rd()); // seed�� ���� 64��Ʈ ���� ���� | create a mersenne twister
	std::uniform_int_distribution<> dice(1, 6); // 1~6 ���� �� ���� (��� ���� Ȯ��)

	for (int count = 1; count <= 20; ++count) {
		cout << dice(mersenne) << endl; // 66126264231362232323
	}
	return 0;
}
