// *** ��ü���� ���α׷��ְ� Ŭ���� ***

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// �Ϲ������� �����͸� �������� struct
// �����Ϳ� ���(�Լ�)�� �Բ� ����Ҷ��� class
struct Friends {
	string name;
	string address;
	int age;
	double height;
	double weight;

	void printInfo() { // C++������ struct���� ����� ���� �� ������ �����ʴ°��� ����
		cout << name << " " << address << " " << age << " " << height <<
			" " << weight << endl;
	}
};
class Friends_cls {
public: // access specifier (public, private, protected)
	string m_name; // ����������� m_ ���̴� ���� ���� | �ڵ�style�� ���� name_ �Ǵ� _name �� ����
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

	// instanciation :  ������ �޸𸮸� �����ϵ��� �����ϴ� ��
	// group2�� ���� ���� => �츮�� ǥ���ϰ��� �ϴ� object Ȥ�� object�� �����ϱ� ���� ���� class�� instance
	Friends_cls group2;

	//
	vector<Friends_cls> my_fnds;
	my_fnds.resize(2);
	for (auto& e : my_fnds) {
		e.printInfo();
	}

	return 0;
}