#include <iostream>
#include <string>
using namespace std;

// *** 구조체 struct ***

struct Person {
	double height1; // 초기화 값을 넣어줄 수 있음 | default 값 설정
	float weight;
	int age;
	string name;
	
	void print() {
		cout << height1 << " " << weight << " " << age << " " << name << endl;
	}
};

struct Family {
	Person h5, h6, h7;
};

Person getInfo() {
	Person pInfo{
	5.0,
	200.0,
	40,
	"Sam",
	};

	return pInfo;
}

struct Employee { // 2+(2)+4+8= 16bytes
	short id; // 2bytes
	int age; // 4bytes
	double wage; // 8bytes
};

int main2() {

	Person h1{
	2.0,
	100.0,
	20,
	"james",
	};
	h1.print(); // 2 100 20 james
	Person h2(h1); // struct 또는 class를 복제하는 것은 권장하지 않음. 
	h2.print(); // 2 100 20 james

	//
	Person SamInfo = getInfo();
	SamInfo.print(); // 5 200 40 Sam

	//
	cout << sizeof(Employee) << endl; // 16 | padding 값이 추가됨 -> 2 + (2) + 4+ 8 + = 16
	return 0;
}

