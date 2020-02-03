#include <string>
#include <iostream>
#include "demo1.hpp"

Resource::Resource(std::string n) : name(n)
{
	std::cout << "Constructing : " << name << std::endl;
}

//int main()
//{
//	{
//		Resource localResource("local");
//		std::string localName = localResource.GetName();
//	}
//
//	Resource* myResource = new Resource("created with new");
//	std::string newString = myResource->GetName();
//
//	//case 1
//	//delete myResource;
//	//myResource = nullptr;
//	//std::string string3 = myResource->GetName();
//
//	//case 2
//	Resource* p2 = myResource;
//	delete myResource;
//	myResource = nullptr;
//	// my resource was deleted hence p2 does not point anywhere
//	//std::string string4 = p2->GetName(); 
//	delete myResource; // theoretically shouldn't fail
//	delete p2;
//
//	return 0;
//}