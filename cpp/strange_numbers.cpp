#include <iostream>

int main(){
  int a = 1664525;
  int c = 1013904223;
  int value = 1;
  for(unsigned i=0;i<100;i++){
    std::cout << value << std::endl; 
    value = a*value+c;
  }
  return 0;
}
