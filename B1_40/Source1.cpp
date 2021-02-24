#include <iostream>
using namespace std;

// *** 다중 상속 ***
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

/* 다이아몬드 다중 상속은 문제가 있을 여지는 있으나 사용하는 경우는 있음
	A
  B   B
    C
*/