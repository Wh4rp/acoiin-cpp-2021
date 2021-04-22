#include <iostream>
using namespace std;

int main() {
  int n, aux;
  cout << "Ingrese la cantidad de números de su secuencia: ";
  cin >> n;
  for (int i = 0; i < n; i++) { // llega hasta n - 1, tenemos n iteraciones
    // ya que empezamos desde el 0
    cin >> aux;
    cout << "\nHa ingresado el " << aux << "\n";
  }
  return 0;
}
