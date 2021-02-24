#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
	Student st1("James");
	st1.setName("Aleey");
	cout << st1.getName() << endl; // Alley

	Teacher tc1("Doctor");
	tc1.setName("Resident");
	cout << tc1.getName() << endl; // Resident

	cout << st1 << endl; // Alley 0
	cout << tc1 << endl; // Resident

	st1.doNothing(); // Alley do nothing 
	tc1.doNothing(); // Resident do nothing
	st1.study();
	tc1.teach();

	//
	Person p1;
	p1.setName("Mr. Person");
	p1.getName();
	/*
	p1.study(); // err 자녀 -> 부모 불가능
	p1.teach(); // err 
	*/
	return 0;
}