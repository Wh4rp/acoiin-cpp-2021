#include <bits/stdc++.h>
using namespace std;

int funcion(int& x){
  x /= 2;
  cout << "x a la mitad es: " << x << '\n';
}

int main() {
  // array<int, 3> a1{{1, 2, 3}};

  array<int, 3> a1 = {3, 2, 1};

  cout << "Array no ordenado: \n";
  for (auto& s : a1){ // (int s : a1)
    cout << s << ' ';
  }
  cout << '\n';

  sort(a1.begin(), a1.end());
  cout << "Elementos ordenados: \n";
  for (auto& s : a1){
    cout << s << ' ';
  }
  cout << '\n';

  cout << "Elemento de al frente: " << a1.front() << '\n';
  cout << "Elemento de más atrás " << a1.back() << '\n';

  // ! false -> true
  // ! true -> false

  if (!a1.empty())
    cout << "No está vacio a1\n";
  else
    cout << "Está vacío\n";

/*
  while(!a1.empty()){
    // le saco elementos
  }
*/
  cout << "el tamaño de a1 es " << a1.size() << '\n';

  return 0;
}
