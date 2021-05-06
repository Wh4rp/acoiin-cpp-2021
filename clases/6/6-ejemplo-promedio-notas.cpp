#include <iostream>
using namespace std;

int main() {
  float nota[5], prom = 0;
  cout << "Ingresa tus 5 notas\n";

  for(int i = 0; i < 5; i++){
    cin >> nota[i];
  }

  for(int i = 0; i < 5; i++){
    prom += nota[i];
  }
  prom /= 5;
  cout << "promedio final: " << prom << '\n';
  return 0;
}
