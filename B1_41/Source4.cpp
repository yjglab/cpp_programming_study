#include <iostream>

using namespace std;
// *** 가상 기본 클래스와 다이아몬드 상속 문제 ***

class PoweredDevice {
public:
	int _i;
	
	PoweredDevice(int power)
	{
		cout << "PoweredDevice: " << power << '\n';
	}
};

class Scanner : virtual public PoweredDevice {
public:
	Scanner(int scanner, int power)
		:PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << '\n';
	}
};

class Printer : virtual public PoweredDevice {
public:
	Printer(int printer, int power)
		: PoweredDevice(power)
	{
		cout << "Printer: " << printer << '\n';
	}
};

class Copier : public Scanner, public Printer {
public:
	Copier(int scanner, int printer, int power)
		: Scanner(scanner, power), Printer(printer, power), 
		PoweredDevice(power)
	{
		
	}
};
int main6() {
	Copier cop(1, 2, 3);
	// Scanner와 Printer클래스가 PoweredDevice를 가상 클래스로 상속받지 않으면 아래처럼
	// 호출 시 동일한 PoweredDevice를 가지지 않고 각기 다른 부모를 가지게 됨.
	cout << &cop.Scanner::PoweredDevice::_i << endl; // 동일
	cout << &cop.Printer::PoweredDevice::_i << endl; // 동일
	return 0;
}