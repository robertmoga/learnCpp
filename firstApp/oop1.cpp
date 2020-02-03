#include <iostream>
#include <string>

class Animal{

private:
  std::string name;
  double height;
  double weight;

  static int numOfAnimals;

public:
  std::string getName(){ return this->name; }
  double getWeight(){ return weight; }
  double getHeight(){ return height; }

  void setName(std::string);
  void setWeight(double);
  void setHeight(double);

  void SetAll(std::string, double, double);
  Animal();
  Animal(std::string, double, double);
  ~Animal();

  static int getNumOfAnimals(){ return numOfAnimals; }
  void toString();
};

// aici bagam implementari 
 
int Animal::numOfAnimals = 0; // initializarea campului static
void Animal::SetAll(std::string name, double height, double wight){
  this->name = name;
  this->height = height;
  this->weight = wight;
  Animal::numOfAnimals++;
}

Animal::Animal(std::string name, double height, double weight){
  std::cout << "New Animal is created \n";
  Animal::SetAll(name, height, weight);
}
void Animal::toString(){
  std::cout << "[ Name: " << this->getName() << ", "
    << "height: " << this->getHeight() << ", "
    << "weight: " << this->getWeight() << " ]\n";
 }

void Animal::setHeight(double newHeight){
  this->height = newHeight;
}

void Animal::setWeight(double newWeight){
  this->weight = newWeight;
}

void Animal::setName(std::string newName){
  this->name = newName;
}

Animal::Animal(){
  std::cout << "New Animal is created \n";
  this->name = "NoName";
  this->height = 0;
  this->weight = 0;
  Animal::numOfAnimals++;
}

Animal::~Animal(){
  std::cout << "Animal " << this->name << " destroyed \n";
}

class Dog : public Animal{

private:
  std::string sound = "Woof";
public:
  Dog() : Animal(){}; // constructor default care face acelasi lucru ca si default-ul Animal
  Dog(std::string, double, double, std::string);
  std::string getSound(){ return this->sound; }
  void toString();
  
  void makeSound(){
    std::cout << "The dog " << this->getName() <<"says " << this->sound << "\n";
  }
  
};

Dog::Dog(std::string name, double height, double weight, std::string sound): Animal(name, height, weight){
  this->sound = sound; 
}

void Dog::toString(){
  std::cout << "[ Name: " << this->getName() << ", "
    << "height: " << this->getHeight() << ", "
    << "weight: " << this->getWeight() << ", "
    << "sound: " << this->getSound() << " ]\n";
}
//void main(){
//  
//  Animal fred("Hue", 15, 25);
//  //Animal h =  Animal();
//  fred.toString();
//
//  fred.setName("Pablo");
//  fred.setHeight(30);
//  fred.setWeight(150);
//
//  fred.toString();
//
//  Dog spot("Spot", 38, 16, "Wooof");
//  spot.toString();
//
//  std::cout << "Number of animals : " << Animal::getNumOfAnimals() << "\n";
//}