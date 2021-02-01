#include <iostream> 
#include <bitset>

using namespace std;

int main() {
	// *** 비트 플래그 Bit Flags ***

	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	// event!
	item1_flag = true;

	// die! item2 los
	item1_flag = false;

	if (item3_flag == true) {
		// event
	}
	if (item3_flag == true && item4_flag == false) {
		item3_flag = false;
		item4_flag = true;
	}

	//
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl; // 00000001 
	cout << bitset<8>(opt1) << endl; // 00000010
	cout << bitset<8>(opt2) << endl; // 00000100
	cout << bitset<8>(opt3) << endl; // 00001000 

	unsigned char items_flag = 0; // items inventory
	cout << "No items | " << bitset<8>(items_flag) << endl; // 00000000
	
	// get item0
	items_flag |= opt0;
	cout << "item0 optained | " << bitset<8>(items_flag) << endl; // 00000001

	// get item3
	items_flag |= opt3;
	cout << "item3 optained | " << bitset<8>(items_flag) << endl; // 00001001

	// lost item3
	items_flag &= ~opt3; // 00000001 => 00001001 |= 11110111
	cout << "item3 lost | " << bitset<8>(items_flag) << endl; // 00000001

	// isitem1 ?
	if (items_flag & opt1) {
		cout << "have item1" << endl;
	}
	else {
		cout << "Not have item1" << endl;
	}

	// isitem0 ?
	if (items_flag & opt0) {
		cout << "have item0" << endl;
	}
	else {
		cout << "Not have item0";
	}

	// optain item 2, 3
	items_flag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "item2, 3 obtained | " << bitset<8>(items_flag) << endl; // 00001101

	if ((items_flag & opt2) && !(items_flag & opt1)) {
		items_flag ^= opt2; // opt2는 lost
		items_flag ^= opt1; // opt1는 have
	}
	cout << " " << bitset<8>(items_flag) << endl; // 00001011
	
	// *** 비트 마스크 Bit masks ***

	// 1로 mask 만들어서 pixelColor의 red, green, blue값을 가져옴
	const unsigned int red_mask = 0xFF0000; 
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl; // 00000000111111110000000000000000
	cout << std::bitset<32>(green_mask) << endl; // 00000000000000001111111100000000
	cout << std::bitset<32>(blue_mask) << endl; // 00000000000000000000000011111111
	
	unsigned int pixelColor = 0xDAA520;
	cout << std::bitset<32>(pixelColor) << endl; // 00000000110110101010010100100000
	
	// 색 추출하기
	unsigned char blue = pixelColor & blue_mask;
	unsigned char green = (pixelColor & green_mask) >> 8;
	unsigned char red = (pixelColor & red_mask) >> 16;
	
	cout << "blue | " << std::bitset<8>(blue) << " " << int(blue) << endl; // blue | 00100000 32
	cout << "green | " << std::bitset<8>(green) << " " << int(green) << endl; // green | 10100101 165
	cout << "red | " << std::bitset<8>(red) << " " << int(red) << endl; // red | 11011010 218

	return 0;
}
