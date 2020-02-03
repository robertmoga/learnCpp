#pragma once
#include <string>
#include <iostream>

class Resource
{
private:
	std::string name;
public:
	Resource(std::string n);
	~Resource() { std::cout << "Destructing : " << name << std::endl; };
	std::string GetName() const { return name; }
};

