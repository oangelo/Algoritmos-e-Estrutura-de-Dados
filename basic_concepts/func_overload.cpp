#include <iostream>

void twin(int a){
  std::cout << "I received an int: " << a << std::endl;
}

void twin(double a){
  std::cout << "I received an double: " << a << std::endl;
}

int main(){
  twin(1);
  twin(1.0);
  return EXIT_SUCCESS;
}
