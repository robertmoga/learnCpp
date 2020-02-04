#include <iostream>
#include "Tweeter.h"

void printDescription(Person p)
{
  std::cout << "Constructing tweeter : " << p.getName() << std::endl;
}

void printDescription(Tweeter t)
{
  std::cout << "Constructing tweeter : " << t.getName() << std::endl;

}

Tweeter::Tweeter(std::string first, std::string secod, int age, std::string hue)
  :Person(first, secod, age), tweeterHandle(hue)
{
  //printDescription(static_cast<Person>(*this));
  printDescription(*this);
}

Tweeter::~Tweeter()
{
  std::cout << "Deconstructing tweeter : " << this->getName()  <<   std::endl;
}