#include <iostream>

template<class type>
void twin(type a){
  std::cout << "I received some type: " << a << std::endl;
}

int main(){
  twin(1);
  twin('a');
  return EXIT_SUCCESS;
}
