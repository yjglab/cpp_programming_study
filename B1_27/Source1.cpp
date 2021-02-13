// *** 캡슐화, 접근 지정자, 접근 함수 ***

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 접근 지정자 public : 외부에서 접근 가능
// 접근 지정자 private : access function을 통해서만 접근 가능 | class의 default값은 private임
class Date {
private: 
	int _month;
	int _day;
	int _year;

public: // access function 제작
	void setDate(const int& month_input, const int& day_input, const int& year_input) {
		_month = month_input;
		_day = day_input;
		_year = year_input;
	}
	 
	void setMonth(const int& month_input) {
		_month = month_input;
	}

	const int getDay() { // getters 함수를 별도로 만들어 접근가능하도록 함 | 일반적으로 상수로 지정
		return _day;
	}

	// 같은 class(Date)에서 나온 B인스턴스(copy)는 A인스턴스(today)의 멤버변수에 접근이 가능
	void copyFrom(const Date& original) { 
		_month = original._month;
		_day = original._day;
		_year = original._year;
	}
};
int main3() {
	/* Date today{ 2, 13, 2021 }; Date이 private로 되어있어 접근 불가능 */
	Date today;
	today.setDate(2, 13, 2021);
	today.setMonth(3);

	cout << today.getDay() << endl; // 13
	
	//
	Date copy;
	copy.copyFrom(today);
	
	return 0;
}
