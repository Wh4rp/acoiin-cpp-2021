#include<iostream>
using namespace std;

int main(){

  int numero;
  cout << "Ingrese un número: ";
  cin >> numero;
  int contador = 0;

  while (numero) {
    numero /= 10;
    // cout << numero << "\n";
    contador++;
  }
  // cout << '\n' << numero << "\n";

  // 1000 -> 100 -> 10 -> 1 -> 0
  // 1234 -> 123 -> 12 -> 1 -> 0

  cout << "Su número tiene " << contador << " digitos\n";


  return 0;
}

/*
if(numero){
  cout << "entré al if\n";
}
else{
  cout << "entré al else\n";
}
*/
