#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){  // t iteraciones
  	int n, m;
  	cin >> n >> m;
  	if(n == 1) {
  		cout << "0\n";
  	}
  	if(n == 2) {

  		cout << m << '\n';
  	}

  	if(n >= 3) {
  		cout << 2 * m << '\n';
  	}
  }

  return 0;
}
