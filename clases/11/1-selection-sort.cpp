#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& v, int n){
	for(int i = 0; i < n; i++){
		int mini = v[i], pos_mini = i;

		for(int j = i; j < n; j++){
			if(mini > v[j]){
				mini = v[j];
				pos_mini = j;
			}
		}
		swap(v[i], v[pos_mini]);
	}
}

int main() {
  int N;
  cout << "Ingrese la cantidad de elementos del vector\n";
  cin >> N;
  vector<int> V(N);
  cout << "Ingrese los elementos del vector\n";
  for(int& x : V){
		cin >> x;
	}

  selectionSort(V, N);
	cout << "La lista ordenada es: \n";
  for(int& x : V)
  	cout << x << " ";

  cout << endl;
  return 0;
}
