#include <iostream>
#include "Tweeter.h"
#include "Enums.h"

void lecture1() {
	int id2; // if used without initialization, compilation errors
	id2 = 2;
	std::cout << "id2 = " << id2 << std::endl;
	
	int id4{ 3 };
	std::cout << "id4 = " << id4 << std::endl;
}


void printPointer(int *&p, int &val) {
	using namespace std;
	
	cout << "p : " << p << endl;
	cout << "*p : " << *p << endl;
	cout << "&p : " << &p << endl;
	cout << endl;

	cout << "val : " << val << endl;
	cout << "&val : " << &val<<endl;
	cout << "******************" << endl;

}

void testPointers() {
	
	int val1 = 5;
	int val2 = 10;

	int *a;
	a = &val1;
	
	printPointer(a, val1);

	//*a = val2;
	//printPointer(a, val2);
	//printPointer(a, val1);

	a = &val2;
}

void testCasting(){
  
 
  double d1 = 4.2;
  int a1 = static_cast<int>(d1);
  int a2 = d1;

  std::cout << "a1 : " << a1 << std::endl;
  std::cout << "a2 : " << a2 << std::endl;

}

void testPerson()
{
  
  Person p1("Hue", "Bahue", 21);
  Person p2;
}

void testScope()
{
  Person p1("Hue", "Bahue", 0);
  {
    Person p3;
  }
  std::cout << "End of the inner block" << std::endl;
}

//at the creation of a Tweeter obj, fisrtly 
//it is called the constructor of Person and then Tweeter's.
//Destruction is in reverse order
void testTweeter()
{
  //Tweeter t1("HUe", "Bahue", 10, 12);
  Person p1("HUe", "Bahue", 10);
  {
    Tweeter t2("A", "aA", 12, 10);
  }
  std::cout << "Finished ined block " << std::endl;
}

void testEnums()
{
  status a = hue;
  status3 b = status3::hue;

}

void testHue1() 
{
	char buffer[20];
	sprintf_s(buffer, 10, "%d %d %d %d", true, true, true, true);
	std::cout << buffer << std::endl;

}

void help_testPointer2(int& temp) 
{
	temp = temp + 1;
}
void testPointer2() 
{
	int val = 5;
	int * hue = &val;
	

	help_testPointer2(*hue);

	std::cout << *hue << std::endl;
}

//void main() {
//	//lecture1();
//	//testPointers();
//  //testCasting();
//  //testPerson();
//  //testScope();
//  //testTweeter();
//	//testHue1();
//	testPointer2();
//}

