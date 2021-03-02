#include <iostream>
using namespace std;

int suma_ejemplo(int a, int b) {
  return a + b;
}

int resta_ejemplo(int a, int b) {
  return a - b;
}

void cout_ejemplo(int a, int b) {
  cout << "Los datos son respectivamente ";
  cout << a << " y " << b << '\n';
}

void swap_ejemplo(int& a, int& b) {
  int aux = b;
  a = b;
  b = aux;
}

int main() {
  int a = 3, b = 2;
  cout << suma_ejemplo(a, b) << '\n';

  cout << resta_ejemplo(a, b) << '\n';

  cout_ejemplo(a, b);
  swap_ejemplo(a, b);
  cout_ejemplo(a, b);

  return 0;
}
