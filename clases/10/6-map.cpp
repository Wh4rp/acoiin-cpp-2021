#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, string> m;
  m.insert({1, "banana"});
  m.insert({5, "naranja"});
  m.insert({10, "manzana"});
  for (auto [key, value] : m) {
    cout << key << " = " << value << "; ";
  }
  cout << "\n\n";
  m[1] = "platano";
  m.insert({2, ""});
  m[2] = "pera";
  cout << 1 << " = " << m[1] << endl;
  m.erase(1);

  return 0;
}
