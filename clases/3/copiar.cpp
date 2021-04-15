#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;
  int suma = a + b;
  cout << "La suma de " << a <<" con " << b;
  cout << " es: " << suma << '\n';
  // "La suma de 3 con 4 es: 7

  int resta = a - b;
  cout << "La resta de " << a <<" con " << b;
  cout << " es: " << resta << '\n';
  // "La resta de 3 con 4 es: -1

  int numero = 0;      // numero <- 0
  numero = numero + 2; // numero <- 2
  numero += 2;         // numero <- 4

  int numero1 = 0;       // numero1 <- 0
  numero1 = numero1 + 1; // numero1 <- 1
  numero1 += 1;          // numero1 <- 2
  numero1++;             // numero1 <- 3

  int numero2 = 0;       // numero2 <- 0
  numero2 = numero2 - 1; // numero2 <- -1
  numero2 -= 1;          // numero2 <- -2
  numero2--;             // numero2 <- -3

  int numero3 = 14;
  numero3 = numero3 % 5;  // numero3 <- 4
  numero3 %= 3;           // numero3 <- 1

  float decimal = 1;
  decimal = decimal * 10; // decimal <- 10
  decimal *= 2.2;         // decimal <- 22
  decimal /= 5.5;         // decimal <- 4
  decimal *= 2.3/5.5;     // decimal <- 1.67273

  cout << "1/2 = " << 1/2 << '\n';
  cout << "1/2 = " << 7/2 << '\n';
  cout << "1/2 = " << -1/2 << '\n';
  cout << "1/2 = " << -7/2 << '\n';

    return 0;
}
