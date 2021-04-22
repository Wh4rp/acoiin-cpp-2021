#include <iostream>
using namespace std;

int main() {
  int n = 10, prod = 1;
  for (int i = 1; i <= n; i++) {
    prod *= i;
  }
  // 1*2*3*...*10
  cout << "El producto entro todos los números del 1 al " << n
       << " es: " << prod << '\n';

  while (prod % 10 == 0) {
    prod /= 10;
  }
  // 1000 -> 100 -> 10 -> 1

  cout << "El número de arriba sin 0 a la derecha es: " << prod << '\n';

  return 0;
}
