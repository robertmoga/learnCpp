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

    virtual std::string getName() const ;//{ return this->firstName + " . " + this->lastName; };
	  int getAge() { return age; };
    void setAge(int newAge) { age = newAge; }
    void setFirstName(std::string newName) { firstName = newName; }
};