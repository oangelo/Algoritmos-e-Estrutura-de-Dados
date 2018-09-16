#include <iostream>

void value(int val){
  val = 1;
}

void reference(int& val){
  val = 2;
}

void pointer(int* val){
  *val = 3;
}

int main(){
  int var=0;
  std::cout << "var: " << var << std::endl;
  value(var); //nothing should change
  std::cout << "var: " << var << std::endl;
  reference(var); //nothing should change
  std::cout << "var: " << var << std::endl;
  pointer(&var); //nothing should change
  std::cout << "var: " << var << std::endl;
  return 0;
}
