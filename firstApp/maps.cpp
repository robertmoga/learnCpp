#include <string>
#include <map>
#include <iostream>

void test1(){
  
  std::map<int, std::string> myMap;

  myMap[0] = "hue";
  myMap[1] = "bahue";
  myMap[3] = "ahue";


    //for (auto it = myMap.begin(); it != myMap.end(); it++){
    //  std::cout << it->first << "  " << it->second <<std::endl;

    //}

	//std::cout << myMap[0] << std::endl;

	std::map<std::string, std::string> huehue;
	huehue[std::string("aaa")] = "bahue";
	huehue[std::string("baaa")] = "hues";

	std::cout << huehue["aaa"] << std::endl;
}
//void main(){
//  test1();
//}