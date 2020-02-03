#pragma once

#include "Person_for_template.hpp"

template <typename T>
class Accumulator
{
  private:
	  T total;
  public:
	  Accumulator(T start) : total(start) {};

	  T operator+= (T const& t)
	  {
		  return total = total + t;
	  }

	  inline T getTotal() { return total;  }
};


template<>
class Accumulator <PersonTemp>
{
private:
	int totalAge;
public:
	Accumulator(PersonTemp p) : totalAge(p.getAge()) {};
	int operator+= (PersonTemp  p)
	{
		return totalAge = totalAge + p.getAge();
	}

	inline int getTotal() { return totalAge; }
};

template <typename T>
T maxop(T const& t1, T const& t2)
{
	return t1 > t2 ? t1 : t2;
}

template <typename T, int n>
class Array
{
private:
	T arrayInst[n];

public:
	inline int getSize() { return n; }

};

/*
Code for main:
Accumulator<int> hue(0);

hue += 5;
std::cout << hue.getTotal() << std::endl;

std::cout << maxop<int>(5, 10) << std::endl;
std::cout << maxop<std::string>("hue", "bahue") << std::endl;

PersonTemp p("hue", 50);
Accumulator<PersonTemp> accumP(p);
accumP += PersonTemp("bahue", 10);

std::cout << accumP.getTotal() << std::endl;
return 0;

Array<int, 5> myArray;
std::cout << myArray.getSize()<< std::endl;

*/