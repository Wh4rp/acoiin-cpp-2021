#include <iostream>
#include <vector>
using namespace std;

void prit_list(vector<int>& v){
  for(int& x : v)
  	cout << x << " ";
  cout << endl;
}

void bubbleSort(vector<int>& v, int n) {
    for (int i = 0; i < n-1; i++){
    	for (int j = 0; j < n-i-1; j++){
    		if(v[j] > v[j+1]){
            	swap(v[j], v[j+1]);
    		}
    	}
      prit_list(v);
    }
}


int main() {
  int N;
  cout << "Ingrese la cantidad de elementos del vector\n";
  cin >> N;

  vector<int> V(N);
  cout << "Ingrese los elementos del vector\n";

  for(int& x : V)
  	cin >> x;

  cout << "\nCorre bubble sort\n";
  bubbleSort(V, N);
  cout << "\nLista después del bubble sort\n";
  for(int& x : V)
  	cout << x << " ";

  cout << endl;

  return 0;
}
