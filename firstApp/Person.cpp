#include <iostream>
#include "Person.h"


void  printDetails(Person* p)
{
  std::cout << "Constructing person : " << p->getName() << std::endl;
}

Person::Person(std::string first, std::string last, int age) : firstName(first), lastName(last), age(age)
{
  printDetails(this);
}

Person::Person()
{
  printDetails(this);
}


//Person::Person(){} // see the header for the declaration of the default constructor

Person::~Person(){
  std::cout << "Deconstructing person : " << firstName + "  " + lastName << std::endl;
}

std::string Person::getName() const
{
  return firstName + " " + lastName;
}
