#include <iostream>
using namespace std;

int suma_recursiva(int x) {
  // cout << "Estoy en suma recursiva " << x << '\n';
  if (x == 0) {
    // cout << "calculado suma recursiva 0\n";
    return 0;
  } else {
    int retornar = x + suma_recursiva(x - 1);
    // cout << "calculado suma recursiva " << x << '\n';
    return retornar;
  }
}

int main() {
  cout << suma_recursiva(4) << '\n';
  return 0;
}
