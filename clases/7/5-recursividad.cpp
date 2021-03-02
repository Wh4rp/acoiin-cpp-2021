#include <iostream>
using namespace std;

int suma_recursiva(int x) {
  if (x == 0) {
    return 0;
  } else {
    return x + suma_recursiva(x - 1);
  }
}

int main() {
  cout << suma_recursiva(7) << '\n';
  return 0;
}
