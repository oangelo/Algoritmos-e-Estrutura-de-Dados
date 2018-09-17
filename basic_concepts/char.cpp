#include <iostream>

using namespace std;

int main(){
  char phrase[] = "Hello world!";
  std::cout << phrase << std::endl;
  int count = 0;
  char aux = phrase[count];
  while(aux != '\0'){
    cout << aux << endl;
    ++count;
    aux = phrase[count];
  }
  cout << aux << endl;
  return 0;
}
