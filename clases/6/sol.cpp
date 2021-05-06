#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m[n];
  for (int i = 0; i < n; i++){
    cin >> m[n - 1 - i];
  }
  // n - 1
  // n - 2
  // n - 3
  // ...
  // 0
  for (int i = 0; i < n; i++){
    cout << m[i];
  }
  cout << '\n';

  return 0;
}
