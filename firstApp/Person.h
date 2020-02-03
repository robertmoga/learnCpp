#include <string>

class Person{
  private:
    std::string firstName;
    std::string lastName;
    int age;

  public:
    //Person() = default; //default constructor
    //~Person() = default;
    Person();
    ~Person();
    Person(std::string first, std::string last, int age);

    std::string getName();//{ return this->firstName + " . " + this->lastName; };
	int getAge() { return age; };

};