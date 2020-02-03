#pragma once
#include <string>

class PersonTemp
{
private:
	std::string name;
	int age = 0;

public:
	PersonTemp();
	PersonTemp(std::string name, int age);

	std::string getPerson()
	{
		return name + " " + std::to_string(age);
	}

	int getAge() { return age; }
};



PersonTemp::PersonTemp()
{
	age = 0;
	name = "hue";
}

PersonTemp::PersonTemp(std::string hue, int bahue)
{
	name = hue;
	age = bahue;
}