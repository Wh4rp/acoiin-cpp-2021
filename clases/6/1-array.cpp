#include <iostream>
using namespace std;

int main() {
  int array[3];
  // más o menos esto... int array_0, array_1, array_2;

  array[0] = 1;
  array[1] = 154;
  array[2] = -12;

  for (int i = 0; i < 3; i++) {
    cout << "El array en la posición " << i << " es igual a: " << array[i]
         << '\n';
  }

  array[0] += 1;
  array[1] += 2 * array[0];
  array[2] *= (array[0] + array[1]);

  cout << "Después de operar...\n";

  for (int i = 0; i < 3; i++) {
    cout << "El array en la posición " << i << " es igual a: " << array[i]
         << '\n';
  }

  return 0;
}
