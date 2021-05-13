#include <iostream>
using namespace std;

int suma_ejemplo(int a, int b) {
  int suma = a + b;
  return suma;
}

int resta_ejemplo(int a, int b) {
  a = 10;
  int resta = a - b;
  return resta;
}

void cout_ejemplo(int a, int b) {
  cout << "Los datos son respectivamente ";
  cout << a << " y " << b << '\n';
}

void swap_ejemplo(int& a, int& b) {
  int aux;
  aux = a;
  a = b;
  b = aux;
}

int main() {
  int a, b;
  cout << "ingresa dos números: ";
  cin >> a >> b;

  cout << "su suma es " <<  suma_ejemplo(a, b) << '\n';

  cout << "su resta es " << resta_ejemplo(a, b) << '\n';


  cout_ejemplo(a, b);

  swap_ejemplo(a, b);

  cout_ejemplo(a, b);


  return 0;
}
