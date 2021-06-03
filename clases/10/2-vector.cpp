#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {7, 5, 16, 8};

  v.push_back(25);
  v.push_back(13);

  cout << "v = { ";
  for (int n : v) {
    cout << n << ", ";
  }
  cout << "}; \n";

  cout << v.front() << '\n';
  cout << v.back() << '\n';

  v.pop_back();

  cout << v.back() << '\n';

  if (!v.empty())
    cout << "No está vacio a2\n";

  cout << v.size() << '\n';
}
