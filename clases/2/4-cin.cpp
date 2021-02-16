#include <iostream>
using namespace std;

int main() {
  int entero;

  cin >> entero;  // input 5
  // entero <- 5

  int entero_1, entero_2;
  string palabra = "plabra";  // palabra <- "palabra"

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
