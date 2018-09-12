#include <iostream>

void print_a(int v){
  std::cout << "a: " << v << std::endl;
}

void print_b(int v){
  std::cout << "b: " << v << std::endl;
}

int main(){
  void (*fun_ptr)(int);
  fun_ptr = &print_b;
  fun_ptr(1);
  fun_ptr = &print_a;
  fun_ptr(2);
  return 0;
}
