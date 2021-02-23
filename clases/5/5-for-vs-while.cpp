#include <iostream>
using namespace std;

int main() {
  int n = 10, prod = 1;
  for (int i = 1; i <= n; i++) {
    prod *= i;
  }
  cout << "El producto entro todos los números del 1 al " << n
       << " es: " << prod << '\n';

  while (prod % 10 == 0) {
    prod /= 10;
  }

  cout << "El número de arriba sin 0 a la derecha es: " << prod << '\n';

  return 0;
}
