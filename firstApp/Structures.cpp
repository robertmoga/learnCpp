#include <iostream>


struct Shape{
  double length, width; //public by fault

  // the parameters can be initialised 
  Shape(double l = 1, double w = 1){
    length = l;
    width = w;
  }

  // we can have multiple constructors
  Shape(double l, double w, int hue){
  }

  double area(){
    return length*width;
  }

private: 
  int id;

};

struct Circle :Shape{
  //overriding 
  Circle(double w){
    this->width = w;
  }

  double area(){
    return 3.14159 * std::pow((width / 2), 2);
  }
};

struct {

  int a;
  int b;


}myStruct1;

typedef struct myStruct2{
  int a;
  int b;
};

struct Point
{
  int x;
  int y;
  int z;
};

void test_struct_1(){
  Shape shape1(10, 10);
  std::cout << "Shape 1 area : " << shape1.area() << std::endl;;
  Circle circle1(12);
  std::cout << "Circle 1 area : " << circle1.area() << std::endl;
  Shape shape2; // this is how you build an object by calling the default constructor
  std::cout << "Shape 2 area : " << shape2.area() << std::endl;
}

void test_struct_2(){
  using namespace std;
  /*
    The issue with this type of initialization is that 
    you don't know which fields are you initializing out of the box
  */
  myStruct2 m2{ 1, 2 }; //available from C++11
  cout << m2.a << "  " << m2.b<< endl;

  myStruct2 m3 = { 3, 4 };
  cout << m2.a << "  " << m2.b << endl;
  
  //myStruct2 m4{ x = 5, y = 6 }; // can't b done
  
  // It should work  
  //myStruct2 m4 = { .a = 5, .b = 6 };

 /* Point p = { .x = 2, .y = 4, .z = 7 };

  std::cout << "x: " << p.x << ", y: " << p.y << ", z: " << p.z << "\n";*/
}

//myStrongType

class StrongType {
private:
	int value;
public:

	StrongType() { this->value = 0; }
	StrongType(int newValue) {
		this->value = newValue;
	}

	int getValue() {
		return this->value;
	}

	void setValue(int newValue) {
		this->value = newValue;
	}
};


struct MyLocalData {

	StrongType val1;
	StrongType val2;

	MyLocalData(int a, int b) : val1(a)
		, val2(b) {}
};
void test_struct_3() {
		
	MyLocalData x1(10, 20);
	std::cout << x1.val1.getValue() << "  " << x1.val2.getValue() << std::endl;
} 

//void main(){
//  //test_struct_1();
//  //test_struct_2();
//	test_struct_3();
//}