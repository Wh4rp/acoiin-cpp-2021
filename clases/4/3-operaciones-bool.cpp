#include<iostream>
using namespace std;

int main(){
  int numero = 10;
  string palabra = "palabras";
  if(numero == 10 && palabra == "palabra"){ // y propisicional
    cout << "numero es igual a 10 Y palabra es igual a 'palabra'\n";
  }
  if(numero == 10 || palabra == "palabra"){ // o propisicional
    cout << "numero es igual a 10 O palabra es igual a 'palabra'\n";
  }

  if(!(numero == 10 and palabra == "palabra")){ // ! negación
    cout << "NO (numero es igual a 10 Y palabra es igual a 'palabra')\n";
  }

  return 0;
}
