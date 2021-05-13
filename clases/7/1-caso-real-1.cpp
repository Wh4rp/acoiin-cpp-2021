#include <iostream>
using namespace std;

int main() {
  int t;
  cout << "Ingrese un número\n";
  cin >> t;

  cout << "Ese no me gusta, ingresa otro\n";
  cout << "Ingrese un número\n";
  cin >> t;

  cout << "Ingrese un número\n";
  cout << "Ese no me gusta, ingresa otro\n";
  cin >> t;

  if (t % 2 == 0) {
    cout << "El número ingresado es par\n";
  } else {
    cout << "No es par\n";
    cout << "Ingrese un número\n";
    cout << "Ese no me gusta, ingresa otro\n";
    cin >> t;
  }

  cout << "Fin del programa\n";

  return 0;
}
