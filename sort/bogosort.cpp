#include <random>
#include <iostream>
#include <vector>

using namespace std;

std::random_device rd;  //Will be used to obtain a seed for the random number engine
std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()

void swap(std::vector<double>& vet){
    std::uniform_int_distribution<> dis(0, vet.size()-1);
    unsigned i(0),j(0);
    while(i == j){
      i = dis(gen);
      j = dis(gen);
    }
    double aux = vet[i];
    vet[i]= vet[j];
    vet[j]= aux;
}

bool is_ordered(std::vector<double>& vet){
  for(unsigned i(0);i<vet.size()-1;++i){
    if(!(vet[i] <= vet[i+1])){
      return false;
    }
  }
  return true;
}

unsigned bogosort(std::vector<double>& vet){
  unsigned count = 0;
  while(!is_ordered(vet)){
    swap(vet);
    count += vet.size();
  }
  return count;
}

 
int main()
{
  std::uniform_real_distribution<> dis(1.0, 20.0);

  for (int m = 0; m < 100; ++m) {
    std::vector<double> random;
    for (int n = 0; n < 8; ++n) {
      random.push_back(dis(gen));
    }
    // for(auto i: random)
    //   cout << i << endl;

    unsigned count(bogosort(random));

//    cout << endl;
//    cout << "sorted:" << endl;
    //for(auto i: random)
    //  cout << i << endl;

    cout <<  count << endl;
  }
}
