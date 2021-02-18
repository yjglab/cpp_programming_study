#pragma once
#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>
#include <random>

class Timer {
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now(); // ���� �ð� ����

public:
	void elapsed() {
		std::chrono::time_point<clock_t> end_time = clock_t::now(); // ���� �ð� ����

		std::cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << std::endl; // �� ������ ��ȯ
	}
};
