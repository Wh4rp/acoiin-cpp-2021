#include <iostream>
using namespace std;

struct Pokemon {
    string mote, especie, tipo;
    int nivel;

    void saludar(){
        cout << "Hola soy " << mote << " soy de nivel ";
        cout << nivel << " y soy un " << especie << '\n';
    }
    bool maxlevelQ(){
      if(nivel == 100) return true;
      else return false;
    }

};

int main() {
    // struct Pokemon pika; Estilo C de declarar
    Pokemon pika;            // Estilo C++ de declarar
    pika.nivel = 5;
    cout << "pika.nivel = " << pika.nivel << '\n';
    
    Pokemon pikachu{"pika123",  "Pickachu", "electrico", 20};
    pikachu.saludar();
}
