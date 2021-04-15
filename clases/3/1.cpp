#include <iostream>
using namespace std;

int main() {
  int a = 1000, b = 4;
  int suma = a + b;

  cout << "La suma de " << a <<" con " << b;
  cout << " es: " << suma << '\n';

  int numero = 10;

  numero = numero + 10; // numero = 10 + 10

  cout << "numero es igual a " << numero << '\n';

  int resta = a - b; // 1000 - 4
  cout << "La resta de " << a <<" con " << b;
  cout << " es: " << resta << '\n';
  // "La resta de 3 con 4 es: -1
  return 0;
}
