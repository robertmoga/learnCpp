#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
/*
  Build constructor 
  Build destructor

  attack should get a warrior as parameter and factor, and 
*/

class Warrior{
private:
  std::string name;
  int healthPoints;
  int blockPoints;
  int attackPoints;

public:

  Warrior(){
    std::cout << "New warrior created" << std::endl;
    this->name = "Zero to hero";
    this->healthPoints = 100;
    this->attackPoints = 10;
    this->blockPoints = 8;
  };
  Warrior(std::string name, int health, int attack, int block){
    std::cout << "New warrior created" << std::endl;
    this->name = name;
    this->healthPoints = health;
    this->attackPoints = attack;
    this->blockPoints = block;
  }

  int attack(){
    srand(time(NULL));
    double randFactor = double((rand() % 100))/100 ;
    //std::cout << this->attackPoints << std::endl;
    //std::cout << randFactor << std::endl;
    //std::cout << this->attackPoints*randFactor << std::endl;
    //std::cout << int(this->attackPoints*randFactor) << std::endl;

    return int(this->attackPoints*randFactor);
  }

  int block(){
    srand(time(NULL));
    double randFactor = double((rand() % 100) / 100);
    return int(this->attackPoints*randFactor);
  }

  int getHealthPoints(){ return this->healthPoints;}
  void setHealthPoints(int health){ this->healthPoints = health; }
  std::string getName() { return this->name; }
};


class Battle{
public:
  static void startFight(Warrior& w1, Warrior& w2){
    bool game = true;
    while (game){

      int w1Attacks = getAttackResult(w1, w2);
      if ( w1Attacks > 0){
        std::cout << w1.getName()<< " wins the game !";
        break;
      }
      
      int w2Attacks = getAttackResult(w2, w1);
      if (w2Attacks > 0){
        std::cout << w2.getName() << " wins the game !";
        break;
      }
    }
  }

  static int getAttackResult(Warrior& w1, Warrior& w2){
    
    int w1AttackScore = w1.attack();
    int w2BlockScore = w2.block();

    w2.setHealthPoints(w2.getHealthPoints() - w1AttackScore + w2BlockScore);

    if (w2.getHealthPoints() <= 0){
      return 1;
    }
    std::cout << w1.getName() << " attacks with "<< w1AttackScore << " on " << w2.getName() << ". " << w2.getName() << " life remianed : " << w2.getHealthPoints()<< std::endl;
    return 0;
  }
  
    Battle(){
    std::cout << "A new battle was created \n";
  }
};


//void main(){
//  Warrior f1("Thor", 100, 20, 15);
//  Warrior f2("Hulk", 100, 18, 20);
//
//  Battle hue;
//  hue.startFight(f1, f2);
//}