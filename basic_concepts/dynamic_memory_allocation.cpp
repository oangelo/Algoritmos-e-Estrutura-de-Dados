#include <iostream>

//a very BAD way do handle MEMORY  

void allocate(int ***matrix, int m, int n){
  int **mat; 
  mat = new int*[m];
  for(unsigned i=0;i<m;i++){
    mat[i]=new int[n];
  }
  *matrix=mat;
}


void deallocate(int **mat, int m, int n){
  for(unsigned i=0;i<m;i++){
    delete[] mat[i];
  }
  delete[] mat;
}

void matrix_assigner(int **mat, unsigned m, unsigned n){
  for(unsigned i=0; i < m; i++){
    for(unsigned j=0; j < n; j++){
      mat[i][j] = i*j;   
    }
  }
}

void print_matrix(int **mat, unsigned m, unsigned n){
  for(unsigned i=0; i < m; i++){
    for(unsigned j=0; j < n; j++){
      std::cout << mat[i][j] << " ";  
    }
    std::cout << std::endl;
  }
}

int main(){
  int **matrix;
  allocate(&matrix, 10, 10);
  matrix_assigner(matrix, 10, 10);
  print_matrix(matrix, 10, 10);
  deallocate(matrix, 10, 10);
  return EXIT_SUCCESS;
}
