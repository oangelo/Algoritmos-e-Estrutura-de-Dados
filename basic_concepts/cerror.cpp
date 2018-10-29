#include <iostream>

//Use > and 2> to redirect the outputs to a file

int main(){
  std::cout << "This is a normal msg!" << std::endl;
  std::cerr << "This is an error msg!" << std::endl;
  return EXIT_SUCCESS;
}
