#include <iostream>
using namespace std;

int main() {
  string palabraS = "palabra";
  palabraS[2] = 's';
  palabraS[3] = 'o';
  palabraS[4] = 't';

  char palabraC[] = {'p', 'a', 'l', 'a', 'b', 'r', 'a'};
  palabraC[2] = 's';
  palabraC[3] = 'o';
  palabraC[4] = 't';

  cout << "palabraS: " << palabraS << '\n';

  cout << "palabraC: ";
  for (int i = 0; i < 7; i++)
    cout << palabraC[i];

  cout << '\n';

  return 0;
}
