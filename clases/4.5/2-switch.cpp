#include <iostream>
using namespace std;

int main() {
  int opcion;
  cin >> opcion;
  switch(opcion) {
    case 1:                             // if(opcion == 1)
      cout << "acabas de ingresar 1\n";
      break;
    case 2:                             // if(opcion == 2)
      cout << "acabas de ingresar 2\n";
      break;
    case 3:                             // if(opcion == 3)
      cout << "acabas de ingresar 3\n";
      break;
    default:
      cout << "No ingresaste ni 1, ni 2 ni 3\n";
  }
  // acá llegamos al tocar un break

  return 0;
}
