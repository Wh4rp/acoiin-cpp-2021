#include <iostream>
using namespace std;

int main() {
  int entero;
  cout << "Ingresa un número:\n";
  cin >> entero;  // input 5
  // entero <- 5
  cout << "El número que me ingresaste es: " << entero << endl;


  int entero_1, entero_2;
  string palabra = "plabra";  // palabra <- "palabra"

  cout << "Ingresa otros 3 números:\n";

  cin >> entero_1 >> entero_2 >> palabra;  // input: 1 2 3
  // entero_1 <- 1
  // entero_2 <- 2
  // palabra <- 3

  // endl salto de linea

  cout << "entero_1: " << entero_1 << endl;  // entero_1: 1
  cout << "entero_2: " << entero_2 << endl;  // entero_2: 2
  cout << "palabra: " << palabra << endl;    // palabra: 3

  return 0;
}
