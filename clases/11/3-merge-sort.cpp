#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void merge(vector<int>& v, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
 
    for (int i = 0; i < n1; i++)
        L[i] = v[l + i];

    for (int j = 0; j < n2; j++)
        R[j] = v[m + 1 + j];

    int i = 0;
    int j = 0;
 
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& v, int l, int r){
    if(l>=r){
        return;
    }
    int m = l + (r - l) / 2;

    mergeSort(v, l, m);

    mergeSort(v, m+1, r);
    
    merge(v, l, m, r);
}

int main() {
  int N;
  cout << "Ingrese la cantidad de elementos del vector\n";
  cin >> N;

  vector<int> V(N);
  cout << "Ingrese los elementos del vector\n";

  for(int& x : V) 
  	cin >> x;

  mergeSort(V, 0, N);
  /*
  for(int& x : V) 
  	cout << x << " ";

  cout << endl;
  */
  return 0;
}