#include <iostream>
using namespace std;
void f(int l, int r, int m, int lista_m) {
  cout << "L = " << l << " R = " << r << " M = " << m << '\n';
  cout << "lista[" << m << "] = " << lista_m << '\n';
}

int main() {
  int lista[] = {2, 4, 5, 7, 8, 9, 12, 14, 17, 19, 22, 25, 27, 28, 33, 37};


  int l = 0, r = 15, m;
  int b;
  cin >> b;

  while (l < r) {
    m = (l + r) / 2; // 11 / 2 -> 5.5 -> 5
    f(l, r, m, lista[m]);
    if (lista[m] >= b)
      r = m;
    else
      l = m + 1;
  }
  f(l, r, m, lista[m]);

  if (lista[l] == b)
    cout << "Se encontró en la posición " << l << '\n';
  else
    cout << "No se encontró\n";

  return 0;
}
