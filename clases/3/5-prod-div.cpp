#include <iostream>
using namespace std;

int main() {
  float decimal = 10, decimal_1 = 3;
  cout << decimal / decimal_1 << '\n';
  decimal /= 2; // decimal = decimal / 2;
  cout << decimal << '\n';

  cout << decimal * decimal_1 << '\n';
  
  // distributiva

  cout << 1.1111 * (decimal / (decimal_1 + 10)) << '\n';
  return 0;
}
