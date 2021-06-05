#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {7, 5, 16, 8};

  // vector<string> s = {"hola", " ", "mundo"};

  v.push_back(25); // {7, 5, 16, 8, 25}
  v.push_back(13); // {7, 5, 16, 8, 25, 13}

  cout << "v = { ";
  // auto x = "string";
  for (auto& x : v) {
    cout << x << ", ";
  }
  cout << "}; \n";

  cout << v.front() << '\n';
  cout << v.back() << '\n';

  v.pop_back();

  cout << v.back() << '\n';

  if (!v.empty())
    cout << "No está vacio v\n";
  else
    cout << "Está vacío\n";

  cout << v.size() << '\n';
  
}
