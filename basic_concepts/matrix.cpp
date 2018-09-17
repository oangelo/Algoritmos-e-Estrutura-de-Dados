#include <iostream>

//a very BAD CODE design

void matrix_assigner(int mat[10][10]){
  for(unsigned i=0; i < 10; ++i){
    for(unsigned j=0; j < 10; ++j){
      mat[i][j] = i*j;   
    }
  }
}

int main(){
  int matrix[10][10];
  matrix_assigner(matrix);

  for(unsigned i=0; i < 10; ++i){
    for(unsigned j=0; j < 10; ++j){
      std::cout << matrix[i][j] << " ";  
    }
    std::cout << std::endl;
  }

  return 0;
}
