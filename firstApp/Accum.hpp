#pragma once
#include "Person_for_template.hpp"

template <class T>
class Accum
{
private:
	T total;
public:
	Accum(T startNum) : total(startNum) {};
	T operator+= (T const& t)
	{
		//maybe some exception handling
		return total = total + t; 
	}
	inline T getTotal() const { return total; }
};

// template specialization for type Person
//different implementation of += operator according to the needs
template <>
class Accum<PersonTemp>
{
private:
	int total;
public:
	Accum(int start) : total(start) {};
	int operator+= (PersonTemp p)
	{
		return total = total + p.getAge();
	}
	int getTotal() const { return total; }
};