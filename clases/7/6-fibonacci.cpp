#include <iostream>
using namespace std;

int f(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return f(n - 1) + f(n - 2);
  }
}

int main() {
  int n = 5;
  cout << "Fibonacci para n = " << n;
  cout << " es\n" << f(n) << '\n';
  return 0;
}
