#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <climits>

using namespace std;

int main() {
  std::vector<unsigned int> vecInt;
  std::default_random_engine generator;
  std::uniform_int_distribution<unsigned int> distribution(1,100);

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  for (int i = 0; i < 10; i++) {
    int num = distribution(generator);
    vecInt.push_back(num);
  }
  std::vector<unsigned int>::const_iterator cii;
  for (cii = vecInt.begin(); cii != vecInt.end(); cii++) {
    cout << *cii << endl;
  }
  return 0;
}
