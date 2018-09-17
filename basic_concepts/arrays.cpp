#include <iostream>

using namespace std;

void change(int* v){
  v[0]=4;
  v[1]=5;
  v[2]=6;
}

int main(){
  //declaration
  int array[3];
  //assigning
  array[0]=1;
  array[1]=2;
  array[2]=3;
  //accessing
  cout << array[0] << " " << array[1] << " " << array[2] << endl; 
  cout << *array << " " << *(array+1) << " " << *(array+2) << endl;
  //function
  change(array);
  cout << array[0] << " " << array[1] << " " << array[2] << endl; 
}
