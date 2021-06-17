#include <bits/stdc++.h>
using namespace std;

void saludar(map <string, string> p){
	cout << "Hola soy " << p["mote"] << " soy de nivel ";
	cout << p["nivel"] << " y soy un " << p["especie"] << '\n';
}

int main() {

  map <string, string> Pokemon;
  Pokemon.insert({"mote", "Pika"});
  Pokemon.insert({"especie", "Pikachu"});
  Pokemon.insert({"tipo", "electrico"});
  Pokemon.insert({"nivel", "15"});
  saludar(Pokemon);

	return 0;
}
