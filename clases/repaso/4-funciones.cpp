#include<iostream>
using namespace std;

int funcion(int a, int b){
  return a + b;
}

void print(auto x){ // tipo de dato comodín
  cout << x << '\n';
}

void datos(int a, int b){
  print("Su suma es");
  print(funcion(a, b));
}

int nombre(int a, int b){
  if(a > b){
    return a;
  }
  else{
    return b;
  }
}

int suma_gauss(int x){
  int suma = 0;

  for(int i = 1; i <= x; i++){
    suma += i;
  }
  return suma;
}

int main(){
  // datos(19, 10);

  cout << suma_gauss(100) << "\n";
  cout << suma_gauss(50) << "\n";
  cout << suma_gauss(10) << "\n";
  cout << min(10, 100) << '\n';
  cout << max(10, 100) << '\n';


  return 0;
}
