#include<iostream>
using namespace std;

int main(){
  // if -> si, else -> si no
  bool verdadero = true;

  if(verdadero){
    cout << "¡entre al if! :D\n";
  }

  int numero = -1;

  // == para comparación
  if(numero == -1){
    cout << "numero es igual a -1\n";
  }


  if(numero > 0){
    cout << "numero es mayor que 0\n";
  }
  else{
    cout << "numero es menor o igual a 0\n";
  }

  if(10 % 2 == 0){
    cout << "10 es par\n";
  }
  else{
    cout << "10 no es par\n";
  }

  return 0;
}
