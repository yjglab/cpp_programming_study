#include <iostream>
#include <fstream> // 파일 출력

using namespace std;

// *** 입출력 연산자 오버로딩 ***

class Point {
private:
	double _x, _y, _z;
	
public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: _x(x), _y(y), _z(z)
	{

	}
	double getX() {
		return _x;
	}
	double getY() {
		return _y;
	}
	double getZ() {
		return _z;
	}
	/*void print() {
		cout << _x << " " << _y << " " << _z << endl;
	}*/
	friend std::ostream& operator << (std::ostream& out, const Point& point) {
		out << point._x << " " << point._y << " " << point._z;

		return out; // chaining 하기 위함
	}

	friend std::istream& operator >> (std::istream& in, Point& point) {
		in >> point._x >> point._y >> point._z;
		

		return in; // chaining 하기 위함
	}
};
int main3() {
	ofstream of("out.txt");

	Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
	/*p1.print();*/

	cout << p1 << " " << p2 << endl; // 0 0.1 0.2 3.4 1.5 2
	of << p1 << " " << p2 << endl;

	of.close();

	//
	Point p3, p4;
	cin >> p3 >> p4;
	cout << p3 << " " << p4 << endl;

	return 0;
}