#include <iostream>
using namespace std;
void f(int l, int r, int m) {
  cout << "L = " << l << " R = " << r << " M = " << m << '\n';
}

int main() {
  int lista[] = {2, 4, 5, 7, 8, 9, 12, 14, 17, 19, 22, 25, 27, 28, 33, 37};

  int l = 0, r = 15, m;
  int b = 17;
  // f(l, r, m);

  while (r - l > 1) {
    m = lista[(l + r) / 2];
    if (b < m) {
      r = (l + r) / 2;
    }
    if (b > m) {
      l = (l + r) / 2;
    }
    if (b == m) {
      break;
    }
  }
  if (b == m)
    cout << "Se encontró en la posición " << (l + r) / 2 << '\n';
  else
    cout << "No se encontró\n";

  return 0;
}
