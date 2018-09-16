#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {
  int operator()(int* coordinates, int* sizes, int dimensions) {
    int ans = coordinates[dimensions-1];
    for (int i=dimensions-2; i>-1; i--){
      ans *=sizes[i];
      ans+=coordinates[i];
    }
    return ans;
  }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    system("pause");
    return EXIT_SUCCESS;
}