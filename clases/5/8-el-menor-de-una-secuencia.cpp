#include <iostream>
using namespace std;

int main() {
  int n, aux, menor = 10000000;
  cout << "Ingrese la cantidad de números de su secuencia: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> aux;
    menor = min(menor, aux);
    // cout << "El menor hasta ahora es el: " << menor << '\n';
  }
  cout << "\nEl menor de todos los números de su secuencia es: " << menor << '\n';
  return 0;
}
