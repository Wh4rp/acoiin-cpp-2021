#include <iostream>
using namespace std;

int main() {
  int n, aux;
  cout << "Ingrese la cantidad de números de su secuencia: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> aux;
    cout << "\nHa ingresado el " << aux << "\n";
  }
  return 0;
}
