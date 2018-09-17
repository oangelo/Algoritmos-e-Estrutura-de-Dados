#include <iostream>

class TalkingClass{
  public:
    TalkingClass(int value){
      precious=value;
      std::cout << "I've borned with value: " << value << std::endl;
    };

    void TalkPrecious(){
      std::cout << "My precious is: " << precious  << std::endl;
    };

    ~TalkingClass(){
      std::cout << "I will be destroyed now, goodbye!"  << std::endl;
    };

  private:
    int precious;

};

int main(){
  TalkingClass talking_object(3);
  talking_object.TalkPrecious();
  return 0;
}
