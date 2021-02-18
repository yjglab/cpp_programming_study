#include <iostream>
#include <vector>
#include <string>
using namespace std;
// *** 객체들의 관계 (3) 제휴 관계 ***

class Doctor;

class Patient {
private:
	string _name;
	vector<Doctor*> _doctors;
public:
	Patient(string name_in)
		:_name(name_in)
	{ }
	
	void addDoctor(Doctor* addedDoctor) {
		_doctors.push_back(addedDoctor);
	}
	void meetDoctors();

	friend class Doctor;

};

class Doctor {
private:
	string _name;
	vector<Patient*> _patients;
	
public:
	Doctor(string name_in)
		:_name(name_in)
	{ }
	
	void addPatient(Patient* addedPatient) {
		_patients.push_back(addedPatient);
	}
	
	void meetPatients() {
		for (auto& e : _patients) {
			cout << "Meet Patient : " << e->_name << endl;
		}
	}

	friend class Patient; // Patient 클래스가 Doctor의 private멤버에 접근 가능
};

void Patient::meetDoctors() {
	for (auto& e : _doctors) {
		cout << "Meet doctor : " << e->_name << endl;
	}
}

int main2() {

	Patient* p1 = new Patient("james");
	Patient* p2 = new Patient("charles");
	Patient* p3 = new Patient("dasy");

	Doctor* d1 = new Doctor("Dr. A");
	Doctor* d2 = new Doctor("Dr. B");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);
	
	p2->addDoctor(d1);
	d1->addPatient(p2);

	p1->meetDoctors(); // Meet doctor : Dr. A
	d1->meetPatients(); // Meet Patient : james \n Meet Patient : charles
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
}