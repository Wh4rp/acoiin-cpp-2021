#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) { // i empieza en 0, se ejecuta mientras i < n,
                                // entre cada iteración se le suma un 1
    cout << "Iteración número: " << i << '\n';
  }


  // Si no se define bien la condición el bucle puede ser
  // infinito y el código se seguirá ejecutando por siempre
  // hasta que abortemos el código manualmente

  /*
  for (int i = 0; i >= 0; i++) {
    cout << "Iteración número: " << i << '\n';
  }
  */

  return 0;
}
