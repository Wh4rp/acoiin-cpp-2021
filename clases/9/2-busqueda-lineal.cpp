#include <iostream>
using namespace std;

int main() {
  int buscar = 14, n = 15;
  int lista[] = {12, 13, 9, 14, 1, 4, 10, 7, 8, 11, 5, 6, 2, 3};
  for (int i = 0; i < n; i++) {
    if (lista[i] == buscar) {
      cout << "Se encontró en la posición " << i << '\n';
    }
  }

  return 0;
}
