#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    cin >> v[i];
  }
  return 0;
}
