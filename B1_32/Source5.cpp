#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono> // �ð� ���ִ� ���̺귯��

using namespace std;

// *** ����ð� �����ϱ� ***
// vector arr 100000 ũ���� ������ �������� ���� sort�� �Ϸ�Ǵ� �ð� ����

class Timer {
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now(); // ���� �ð� ����

public:
	void elapsed() {
		std::chrono::time_point<clock_t> end_time = clock_t::now(); // ���� �ð� ����

		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl; // �� ������ ��ȯ
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

	timer.elapsed(); // ������ �� �ð� ��� (���� �����ÿ��� Release ����)
	
	/*for (auto& e : vec) {
		cout << e << " ";
	}
	cout << endl;*/

	return 0;
}