#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono> // 시간 재주는 라이브러리

using namespace std;

// *** 실행시간 측정하기 ***
// vector arr 100000 크기의 공간을 무작위로 섞고 sort가 완료되는 시간 측정

class Timer {
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now(); // 시작 시간 측정

public:
	void elapsed() {
		std::chrono::time_point<clock_t> end_time = clock_t::now(); // 종료 시간 측정

		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl; // 초 단위로 변환
	}
};
int main() {
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() }; // rnd number generator

	vector<int> vec(100000);
	for (unsigned int i = 0; i < vec.size(); ++i) {
		vec[i] = i;
	}
	std::shuffle(begin(vec), end(vec), mersenne_engine);

	/*for (auto& e : vec) {
		cout << e << " ";
	}
	cout << endl;*/

	Timer timer;
	
	std::sort(begin(vec), end(vec));

	timer.elapsed(); // 지나간 총 시간 출력 (실제 배포시에는 Release 모드로)
	
	/*for (auto& e : vec) {
		cout << e << " ";
	}
	cout << endl;*/

	return 0;
}