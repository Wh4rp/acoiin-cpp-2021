#include<iostream>
using namespace std;

int main(){

  int numero, suma = 0;
  cout << "Ingrese un número: ";
  cin >> numero;

  for (int i = 1; i <= numero; i+= 2){
    suma += i;
     // cout << "suma hasta el momento :" << suma << endl;
  }

  cout << "la suma de los primero pares antes de " << numero;
  cout << " es " << suma << endl;

  return 0;
}
