
#include <iostream>
using namespace std;

int main() {
  // Sumar hasta el 100
  int sum = 0, n = 4;
  for (int i = 1; i <= n; i++) {
    cout << "iteración nº: " << i << '\n';
    sum += i;
    cout << "Se suma: " << i << '\n';
  }
  cout << "La suma final dio: " << sum << '\n';

  return 0;
}
