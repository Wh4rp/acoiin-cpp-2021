#include <iostream>
using namespace std;

int main() {
  int numero = 10;
  numero -= 10; // numero = numero - 10 -> numero = 10 - 10
  cout << "Numero es igual a: " << numero << endl;

  // sintaxis: variable <operador> = otra_variable

  int Numero_2 = 0;

  // distintas formas de sumar
  cout << "1) Numero_2 es igual a: " << Numero_2 << endl;
  Numero_2 = Numero_2 + 1;
  cout << "2) Numero_2 es igual a: " << Numero_2 << endl;
  Numero_2 += 1;
  cout << "3) Numero_2 es igual a: " << Numero_2 << endl;
  Numero_2++;
  cout << "4) Numero_2 es igual a: " << Numero_2 << endl;
  ++Numero_2;
  cout << "5) Numero_2 es igual a: " << Numero_2 << endl << endl;

  int Numero_3 = 0;
  cout << "1) Numero_3 es igual a: " << Numero_3 << endl;
  Numero_3 = Numero_3 - 1;
  cout << "2) Numero_3 es igual a: " << Numero_3 << endl;
  Numero_3 -= 1;
  cout << "3) Numero_3 es igual a: " << Numero_3 << endl;
  Numero_3--;
  cout << "4) Numero_3 es igual a: " << Numero_3 << endl;
  --Numero_3;
  cout << "5) Numero_3 es igual a: " << Numero_3 << endl;
  
  return 0;
}
