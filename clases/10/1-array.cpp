#include <bits/stdc++.h>
using namespace std;

int main() {
  array<int, 3> a1{{1, 2, 3}};

  array<int, 3> a2 = {1, 2, 3};

  sort(a1.begin(), a1.end());

  for (auto& s : a2)
    cout << s << ' ';
  cout << '\n';

  cout << a1.front() << '\n';
  cout << a1.back() << '\n';

  if (!a2.empty())
    cout << "No está vacio a2\n";

  cout << a2.size() << '\n';

  return 0;
}
