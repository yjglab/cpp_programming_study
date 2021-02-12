// *** 객체지향 프로그래밍과 클래스 ***

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 일반적으로 데이터만 묶을때는 struct
// 데이터와 기능(함수)을 함께 사용할때는 class
struct Friends {
	string name;
	string address;
	int age;
	double height;
	double weight;

	void printInfo() { // C++에서는 struct에도 기능을 넣을 수 있으나 넣지않는것이 관습
		cout << name << " " << address << " " << age << " " << height <<
			" " << weight << endl;
	}
};
class Friends_cls {
public: // access specifier (public, private, protected)
	string m_name; // 멤버변수에는 m_ 붙이는 것이 관습 | 코딩style에 따라 name_ 또는 _name 도 있음
	string address;
	int age;
	double height;
	double weight;

	void printInfo() {
		cout << m_name << " " << address << " " << age << " " << height <<
			" " << weight << endl;
	}
};
void printInfo(const string& name, const string& address, const int& age,
	const double& height, const double& weight) {
	cout << name << " " << address << " " << age << " " << height <<
		" " << weight << endl;
}

int main() {
	Friends group1{ "james", "pystreet", 15, 178, 68 };
	printInfo(group1.name, group1.address, group1.age, group1.height, group1.weight);
	group1.printInfo();

	vector<string> name_vec;
	vector<string> addr_vec;
	vector<int> age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;

	/*printInfo(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);*/

	// instanciation :  실제로 메모리를 차지하도록 정의하는 것
	// group2와 같은 변수 => 우리가 표현하고자 하는 object 혹은 object를 구현하기 위해 만든 class의 instance
	Friends_cls group2;

	//
	vector<Friends_cls> my_fnds;
	my_fnds.resize(2);
	for (auto& e : my_fnds) {
		e.printInfo();
	}

	return 0;
}