#include <iostream>
using namespace std;

int main() {
  int n = 10;

  for (int i = 0; i <= n; i++) {  // i va a ir desde 0 a 10, ambos incluidos
    cout << i << ' ';
  }
  cout << '\n';
  for (int i = 0; i < n; i++) {  // i va a llegar hasta 9
    cout << i << ' ';
  }

  return 0;
}
