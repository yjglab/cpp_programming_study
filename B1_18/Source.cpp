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
	static const double fraction = 1.0 / (RAND_MAX); // RAND_MAX : rand로 나올 수 있는 가장 큰 수
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

	/*std::srand(5523); */ // seed 값이 고정되면 random값이 변하지 않음 | 디버깅 시에는 seed를 고정할 것
	std::srand(static_cast<unsigned int>(std::time(0))); // 시간이 지남에 따라 변하는 seed 값 부여

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
	std::random_device rd; // 매 랜덤한 seed 넘버
	std::mt19937; // 32비트 난수
	std::mt19937_64 mersenne(rd()); // seed를 통한 64비트 난수 생성 | create a mersenne twister
	std::uniform_int_distribution<> dice(1, 6); // 1~6 랜덤 수 선택 (모두 같은 확률)

	for (int count = 1; count <= 20; ++count) {
		cout << dice(mersenne) << endl; // 66126264231362232323
	}
	return 0;
}
