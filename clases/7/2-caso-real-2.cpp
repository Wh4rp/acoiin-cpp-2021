#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int a, b, t = 1;
  cout << "Ingresa dos números\n";
  cin >> a >> b;
  while (a >= 10) {
    t++;
    a /= 10;
    // cout << "a vale:" << a << '\n';
  }
  cout << "Su primer número tiene " << t << " digitos\n";

  t = 1;
  while (b >= 10) {
    t++;
    b /= 10;
  }
  cout << "Su segundo número tiene " << t << " digitos\n";
  return 0;
}
