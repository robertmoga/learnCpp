#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int, int);
	int area(void) { return (width*height); }
	Rectangle& operator= (Rectangle a);
};

Rectangle::Rectangle() {
	width = 5;
	height = 5;
}

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

Rectangle& Rectangle::operator=(Rectangle a)
{
	this->width = a.width;
	this->height = a.height;
	return *this;
}

//int main() {
//	Rectangle rect(3, 4);
//	Rectangle rectb;
//	cout << "rect area: " << rect.area() << endl;
//	cout << "rectb area: " << rectb.area() << endl;
//	return 0;
//}