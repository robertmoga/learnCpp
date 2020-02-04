#pragma once
#include <iostream>
#include <string.h>
#include "Person.h"

class Tweeter : public Person{

private:
  std::string tweeterHandle;

public:
  Tweeter() = default;
  Tweeter(std::string first, std::string second, int age, std::string hue);
  ~Tweeter();
  std::string getName() const { return Person::getName() + " " + tweeterHandle; }
};