#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  q.push(3);      // 3
  q.push(2);      // 3, 2
  q.push(5);      // 3, 2, 5

  cout << "Primero elemento: " << q.front() << endl;
  cout << "Último elemento: " << q.back() << endl;

  q.pop();         // 2, 5
  cout << "Se hizo pop\n";
  cout << "Primero elemento: " << q.front() << endl;

  return 0;
}
