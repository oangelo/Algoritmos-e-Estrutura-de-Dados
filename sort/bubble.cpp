#include <random>
#include <iostream>
#include <vector>

using namespace std;

unsigned quick_sort(std::vector<double> vet){
  unsigned count=0;
  for(unsigned i(0); i < vet.size(); ++i){
    for(unsigned j(i+1); j < vet.size(); ++j){
      if(vet[i] > vet[j]){
        double aux(vet[i]);
        vet[i] = vet[j];
        vet[j] = aux;
      }
      ++count;
    }
  }
  return count;
}

unsigned bubble_sort(std::vector<double> vet){
  unsigned count=0;
  bool is_ordered = false;
  while(!is_ordered){
    is_ordered = true;
    for(unsigned i(0); i < vet.size()-1; ++i){
      if(vet[i] > vet[i+1]){
        double aux(vet[i]);
        vet[i] = vet[i+1];
        vet[i+1] = aux;
        is_ordered = false;
      }
      ++count;
    }
  }
  return count;
}
 
int main()
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(1.0, 20.0);
    for (int i = 0; i < 1000; ++i) {
      std::vector<double> random;
      for (int n = 0; n < 100; ++n) {
          random.push_back(dis(gen));
      }
      unsigned countb(bubble_sort(random));
      cout  << countb << endl;
    }
}
