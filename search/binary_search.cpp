#include <random>
#include <iostream>
#include <vector>
#include "gtest/gtest.h"
#include <math.h>

using namespace std;

unsigned quick_sort(std::vector<unsigned> vet){
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

bool binary_search(vector<unsigned> vec, unsigned value, unsigned& count){
  count = 0;
  unsigned index_begin(0),index_end(vec.size()-1);
  unsigned half(index_begin+((index_end - index_begin)/2));
  if(vec[index_begin]==value){
      ++count;
      return true;
  }else if(vec[index_end]==value){
      ++count;
      return true;
  }
  while(index_begin != half and index_end != half){
    if(vec[half]==value){
      ++count;
      return true;
    }else if(value < vec[half]){
      index_end = half;
      ++count;
    }else{
      index_begin = half;
      ++count;
    }
    half = (index_begin+(index_end - index_begin)/2);
  }
  return false;
}

TEST(SEARCH, NOT_FOUND){
      unsigned count(0);
      std::vector<unsigned> vec({1,5,8,10,11,12,15});
      EXPECT_FALSE(binary_search(vec, 4, count));
}

TEST(SEARCH, EXIST){
      unsigned count(0);
      std::vector<unsigned> vec({1,5,8,10,11,12,15});
      EXPECT_TRUE(binary_search(vec, 1, count));
      EXPECT_TRUE(binary_search(vec, 5, count));
      EXPECT_TRUE(binary_search(vec, 8, count));
      EXPECT_TRUE(binary_search(vec, 10, count));
      EXPECT_TRUE(binary_search(vec, 11, count));
      EXPECT_TRUE(binary_search(vec, 12, count));
      EXPECT_TRUE(binary_search(vec, 15, count));
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}

int main()
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(1, 100);
    for (int vec_size = 1000; vec_size < 100000; vec_size+=1000) {
      for (int samples = 0; samples < 1; ++samples) {
        std::vector<unsigned> random;
        for (int n = 0; n < vec_size; ++n) {
            random.push_back(dis(gen));
        }
        unsigned count;
        quick_sort(random);
        binary_search(random, dis(gen), count);
        cout << vec_size << " " << count << endl;
      }
    }
}
