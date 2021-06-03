#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s;
  s.insert(3);              // 3
  s.insert(2);              // 2, 3
  s.insert(5);              // 2, 3, 5
  for(auto x : s){
    cout << x << " ";
  }
  cout << '\n';
  cout << "El 2 aparece " << s.count(2) << '\n';
  s.insert(2);
  cout << "El 2 aparece " << s.count(2) << '\n';

  s.erase(5);              // 2, 3

  cout << "s es de largo " << s.size() << '\n';

  auto pos = s.find(3);    // devuelve un iterador en la posición del 3
  return 0;
}
