#include <iostream>

//https://en.cppreference.com/w/cpp/language/exceptions

void must_receive_one(int value){
  if(value != 1){
    throw std::invalid_argument("Function must receive one!");
  }
}

void must_receive_two(int value){
  if(value != 2){
    throw std::invalid_argument("Function must receive two!");
  }
}


int main(){
  try{
    must_receive_one(2);
  }catch(const std::invalid_argument& e){
    std::cout << "We can deal with this error here:" << std::endl;
    std::cout << e.what() << std::endl;
  }

  std::cout << "No way to deal with this one:" << std::endl;
  must_receive_two(1);
  return 0;
}
