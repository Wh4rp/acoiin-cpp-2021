#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> s;
  s.push(3);
  /*
  3
  */
  s.push(2);
  /*
  2
  3
  */
  s.push(5);
  /*
  5
  2
  3
  */

  cout << "Elemento de arriba es " << s.top() << endl;

  s.pop();
  /*
  2
  3
  */
  cout << "Se hizo pop\n";
  cout << "Elemento de arriba es " << s.top() << endl;

  return 0;
}
