#include <iostream>
using namespace std;

// *** ���� ��� ***
class USBDevice {
private:
	long _id;
public:
	USBDevice(long id)
		:_id(id)
	{}
	long getID() {
		return _id;
	}
	void plugAndPlay() {
		
	}
};

class NetworkDevice {
private:
	long _id;

public:
	NetworkDevice(long id)
		:_id(id)
	{}
	long getID() {
		return _id;
	}
	void networking() {

	}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice {
public:
	USBNetworkDevice(long usb_id, long net_id) 
		:USBDevice(usb_id), NetworkDevice(net_id)
	{}
};

int main3() {
	USBNetworkDevice myDevice(3.14, 6.022);

	myDevice.networking();
	myDevice.plugAndPlay();
	myDevice.USBDevice::getID();
	myDevice.NetworkDevice::getID();
}

/* ���̾Ƹ�� ���� ����� ������ ���� ������ ������ ����ϴ� ���� ����
	A
  B   B
    C
*/