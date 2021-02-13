// *** ĸ��ȭ, ���� ������, ���� �Լ� ***

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ���� ������ public : �ܺο��� ���� ����
// ���� ������ private : access function�� ���ؼ��� ���� ���� | class�� default���� private��
class Date {
private: 
	int _month;
	int _day;
	int _year;

public: // access function ����
	void setDate(const int& month_input, const int& day_input, const int& year_input) {
		_month = month_input;
		_day = day_input;
		_year = year_input;
	}
	 
	void setMonth(const int& month_input) {
		_month = month_input;
	}

	const int getDay() { // getters �Լ��� ������ ����� ���ٰ����ϵ��� �� | �Ϲ������� ����� ����
		return _day;
	}

	// ���� class(Date)���� ���� B�ν��Ͻ�(copy)�� A�ν��Ͻ�(today)�� ��������� ������ ����
	void copyFrom(const Date& original) { 
		_month = original._month;
		_day = original._day;
		_year = original._year;
	}
};
int main3() {
	/* Date today{ 2, 13, 2021 }; Date�� private�� �Ǿ��־� ���� �Ұ��� */
	Date today;
	today.setDate(2, 13, 2021);
	today.setMonth(3);

	cout << today.getDay() << endl; // 13
	
	//
	Date copy;
	copy.copyFrom(today);
	
	return 0;
}
