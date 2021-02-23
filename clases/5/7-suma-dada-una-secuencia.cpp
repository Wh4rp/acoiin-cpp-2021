#include <iostream>
using namespace std;

int main() {
  int n, aux, sum = 0;
  cout << "Ingrese la cantidad de números de su secuencia: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> aux;
    sum += aux;
  }
  cout << "\nLa suma de todos los números de su secuencia es: " << sum << '\n';
  return 0;
}
