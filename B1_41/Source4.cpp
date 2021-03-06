#include <iostream>

using namespace std;
// *** ���� �⺻ Ŭ������ ���̾Ƹ�� ��� ���� ***

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
	// Scanner�� PrinterŬ������ PoweredDevice�� ���� Ŭ������ ��ӹ��� ������ �Ʒ�ó��
	// ȣ�� �� ������ PoweredDevice�� ������ �ʰ� ���� �ٸ� �θ� ������ ��.
	cout << &cop.Scanner::PoweredDevice::_i << endl; // ����
	cout << &cop.Printer::PoweredDevice::_i << endl; // ����
	return 0;
}