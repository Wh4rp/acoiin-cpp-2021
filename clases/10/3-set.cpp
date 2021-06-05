#include <bits/stdc++.h>
using namespace std;

int main() {
  // multiset<int> s;
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

  cout << "el largo de s es " << s.size() << '\n';

  for(auto x : s){
    cout << x << " ";
  }
  cout << '\n';

  auto pos = s.find(3);    // devuelve un iterador en la posición del 3
  cout << *pos << '\n';

  auto pos_inicial = s.begin();
  cout << *pos_inicial << '\n';

  for(auto pos = s.begin(); pos != s.end(); pos++){
    cout << *pos << ' ';
  }

  /*auto pos_final = s.end();
  cout << *pos_final << '\n';*/

  return 0;
}
