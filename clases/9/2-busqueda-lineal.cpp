#include <iostream>
using namespace std;

int main() {
  int buscar = 50, n = 15;
  bool ok = false;
  int lista[] = {12, 13, 9, 14, 50, 4, 50, 7, 8, 11, 5, 6, 2, 3};
  // n = int(lista.length());
  for (int i = 0; i < n; i++) {
    if (lista[i] == buscar) {
      cout << "Se encontró en la posición " << i << '\n';
      ok = true;
      // break;
    }
  }
  if(!ok){        // ok == false
    cout << "No se ha encontrado\n";
  }

  return 0;
}
