#include <iostream>
#include <vector>

int main(){
  std::vector<double> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  for(auto i:  vec){
    std::cout << i << std::endl;
  }
  vec[1]=4;
  for(auto i:  vec){
    std::cout << i << std::endl;
  }
  return EXIT_SUCCESS;
}
