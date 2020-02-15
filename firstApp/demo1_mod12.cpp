#pragma once
//#include "Person.h"
#include "Tweeter.h"
#include <memory.h>
using std::shared_ptr;
using std::make_shared;

int dummy(Person const& p)
{
  return p.getAge();
}

int main()
{
  /*Person myPerson("Hue", "Bahue", 45);
  Person& rMyPerson = myPerson;
  Person* pMyPerson = &myPerson;

  Tweeter myTweeter("Hue", "Bahue", 125, "@huesibahue");
  Person* pMyTweeter = &myTweeter;
  Person& rMyTweeter = myTweeter;
  Tweeter& rtMyTweeter = myTweeter;

  std::cout << "rMyPerson.getName() " << rMyPerson.getName() << std::endl;
  std::cout << "pMyPerson->getName() " <<pMyPerson->getName() << std::endl;
  std::cout << std::endl;

  std::cout << "myTweeter.getName() " << myTweeter.getName() << std::endl;
  std::cout << "pMyTweeter->getName() " << pMyTweeter->getName() << std::endl;
  std::cout << "rMyTweeter.getName() " << rMyTweeter.getName() << std::endl;
  std::cout << "rtMyTweeter.getName() " << rtMyTweeter.getName() << std::endl;
  std::cout << std::endl;*/

  Person* someone = new Tweeter("Someone", "Else", 56, "@someone");
  std::cout << someone->getName() << std::endl;
  //will call only the destructor of Person class, which is not desired, 
  //we have a memory leak on the Tweeter object
  //we have to mark the Tweeter destructor as virtual
  delete someone;

  ////here it acts normally, calls Tweeter destructor which calls Person destructor
  //Tweeter* obj = new Tweeter("hue", "ahue", 25, "@ahuehu");
  //delete obj;


  ////slicing demo
  //shared_ptr<Person> spMyPerson = make_shared<Tweeter>("Ahue", "Bahuescu", 558, "@bahuescu");
  //std::cout << spMyPerson->getName() << std::endl;

  //// can't be done
  //// myTweeter = myPerson 

  //myPerson = myTweeter;
  //int x;
  //x = dummy(myPerson);
  //x = dummy(myTweeter);

  return 0;
}
