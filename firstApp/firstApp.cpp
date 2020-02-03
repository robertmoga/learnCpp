#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#define LOG_(x, y) std::cout<< x <<"   "<< y << std::endl;

void test_pointeri_1(){
  LOG("Strat");

  int var = 10;
  //int* hue = var;
  int* ptr = &var;
  //int **dbl = &ptr;
  ////int **hue = *var;

  //LOG_("var", var);
  //LOG_("&var", &var);
  //LOG_("&ptr", &ptr);
  //LOG_("*ptr", *ptr);
  //LOG("\n");
  //
  //LOG_("dbl", dbl); 
  //LOG_("&dbl", &dbl);
  //LOG_("&*dbl", &*dbl);
  //LOG_("**dbl", **dbl);
  //LOG_("*dbl", *dbl);}
}

void test_pointeri_2(){
  LOG("Strat test 2");

  int temp = 5;
  int *ptr = &temp;

  LOG_("temp", temp); // 5
  LOG_("&temp", &temp); // memory adress value (ex:  00A5F7F8)
  LOG_("ptr", ptr); // the same memory adress as & temp  ( 00A5F7F8)
  LOG_("*ptr", *ptr); // 5
  LOG_("&ptr", &ptr); // memory adress where ptr is stored 

}


void test_pointeri_3(){
  
  int temp = 5;
  int *ptr = &temp;
  int **hue = &ptr;

  LOG_("ptr", ptr);
  LOG_("**hue", **hue);
  LOG_("*hue", *hue);
  LOG_("hue", hue);
  LOG_("&hue", &hue);
  LOG("\n");
  
  LOG_("&*hue", &*hue);
  LOG_("&*hue", *&hue);
}

void test_pointeri_4(){

  int temp = 55;
  int *ptr = &temp;

  LOG_("*ptr", *ptr);
  temp = 88;
  LOG_("*ptr", *ptr);
  *ptr = 66;
  LOG_("*ptr", *ptr);

  int num = 10;
  int hue = 16;
  int &ref = num;

  LOG_("ref", ref);
  num = 12;
  ref = 15;
  LOG_("ref", ref);
  LOG_("num", num);
  //LOG_("&num", &num)
  //LOG_("&ref", &ref);
  //LOG("*ref", *ref);
}
//int main()
//{
//	
//  test_pointeri_4();
//
//
//	return 0;
//}