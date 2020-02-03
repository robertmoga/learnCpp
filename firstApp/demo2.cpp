#include <iostream>
#include <string>
#include "demo1.hpp"
#include <memory>


class MyPerson
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
	std::shared_ptr<Resource> pResource;

public:
  MyPerson() { std::cout << "Default constructor" << std::endl; };
	MyPerson(std::string first, std::string last, int num) :
		firstname(first), lastname(last), 
		arbitrarynumber(num), pResource(nullptr) {};
	//MyPerson(MyPerson const& p);
	//MyPerson& operator=(MyPerson const& p);
	~MyPerson();

	std::string getName() const;
	int getNumber() const { return arbitrarynumber; }
	void setNumber(int num) { arbitrarynumber = num; }
	void setFirstName(std::string first) { firstname = first; }
	void addResource();

};



//MyPerson::MyPerson(MyPerson const& p)
//{
//	pResource = new Resource(p.pResource->GetName());
//}
//
//MyPerson& MyPerson::operator=(MyPerson const& p)
//{
//	delete pResource;
//	pResource = new Resource(p.pResource->GetName());
//	return *this;
//}

MyPerson::~MyPerson()
{
	//delete pResource;
}

std::string MyPerson::getName() const
{
	return firstname + " " + lastname;
}

void MyPerson::addResource()
{
	pResource.reset();
	pResource = std::make_shared<Resource>("Resource for " + this->getName());
}

int cap(MyPerson k)
{
	k.setFirstName("HUE");
	return true;
}

int main()
{
	{
		MyPerson p("Hue", "Bahue", 35);
		p.addResource();
		p.addResource();
    //if I dont have a copy constructor nor shared pointer
    //it will blow up because at th end of the scope it will try to delete twice the same obj
		MyPerson p2 = p; 
		cap(p2);
	}
	return 0;
}