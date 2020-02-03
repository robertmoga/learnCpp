#pragma once
#include <iostream>
//#include "Accum.hpp"
//#include "Person.h"

template <class T>
T max(T const& t1, T const& t2)
{
	return t1 < t2 ? t2 : t1;
}

//int main()
//{
//	return 0;
//}
//int main()
//{
//	int m = max(0, 1);
//	int n = max<double>(33, 2.0); // can also do this
//
//	std::cout << m << std::endl;
//	std::cout << n << std::endl << std::endl;
//
//	Accum<int> integers(0);
//	Accum<std::string> strings("");
//
//	integers += 10;
//	integers += 2;
//	std::cout << integers.getTotal() << std::endl;
//
//	Accum<Person> persons(0);
//	persons += Person("Hue", "Bahue", 2);
//
//	std::cout << persons.getTotal() << std::endl;
//
//	return 0;
//}