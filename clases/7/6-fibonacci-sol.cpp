#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int x) {

  if ( x == 0 || x == 1){
    cout << "1\n";
    return 1;
  }

  else {
    int r = fibonacci(x - 2) + fibonacci(x - 1);
    cout << r << '\n';
    return r;
  }
}

int main() {
  int n;
  cin >> n;

  cout << fibonacci(n) << endl;

  return (0);
}
