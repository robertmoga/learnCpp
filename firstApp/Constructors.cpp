#include <iostream>
#include <string>

class Person1{
private:
  int age;
  std::string name;

public:

  Person1() : age(0), name("Unnamed") {};
  Person1(int age, std::string name){
    
    if (age > 0 && !name.empty() ){
      this->age = age;
      this->name = name;
    }

  }

  Person1(const Person1& newPerson1){
    this->name = newPerson1.name;
    this->age = newPerson1.age;
  }

  //asigment operator
  Person1& operator=(const Person1 &newPerson1){
    this->age = newPerson1.age + 1;
    this->name = newPerson1.name;

    return *this;
  }

  std::string getName(){
    return this->name;
  }

  void print(){
    std::cout << " Person : " << this->name << " ,  " << this->age << std::endl; 
  } 
};

//void main(){
//  std::cout << "Strat" << std::endl;
//
//  Person1 a(10, "HUe");
//  a.print();
//  
//  Person1 b(a);
//  b.print();
//
//  Person1 c;
//  c.print();
//
//  c = b;
//  c.print();
//
//}