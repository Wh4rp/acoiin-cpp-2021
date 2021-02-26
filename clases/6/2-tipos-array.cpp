#include <iostream>
using namespace std;

int main() {
  string oracion[3] = {"soy", "una", "oración"};

  char caracteres[] = {'c', 'h', 'a', 'r'};

  cout << "array oracion = ";
  for (int i = 0; i < 3; i++) {
    cout << oracion[i] << " ";
  }
  cout << '\n';
  cout << "array caracteres = ";
  for (int i = 0; i < 4; i++) {
    cout << caracteres[i] << " ";
  }
  cout << '\n';

  return 0;
}
