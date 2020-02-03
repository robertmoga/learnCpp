#include <iostream>
#include <string.h>
#include "Person.h"

class Tweeter : public Person{

private:
  int tweeterNum;

public:
  Tweeter();
  Tweeter(std::string first, std::string secod, int age, int hue);
  ~Tweeter();

};