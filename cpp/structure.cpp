#include <iostream>

#include <string.h>


using namespace std;

typedef struct{
  char name[10];
  int age;
  int points;
} Player;

ostream& operator<<(ostream& os, const Player& player)
{
    os << "Name: " << player.name << endl;
    os << "Age: " << player.age << endl;
    os << "Points: " << player.points;
    return os;
}

int main(){
  Player one;
  strcpy(one.name, "João");
  one.age=20; 
  one.points = 2;
  cout << one << endl; 
  return 0;
}
