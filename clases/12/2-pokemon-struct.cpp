#include <iostream>
using namespace std;

struct Pokemon {   
    string mote, especie, tipo;
    int nivel;

    void saludar(){
        cout << "Hola soy " << mote << " soy de nivel ";
        cout << nivel << " y soy un " << especie << '\n';
    }
};

int main() {
    // struct Pokemon pika; Estilo C de definir
    Pokemon pika;            // Estilo C++ de definir
    pika.nivel = 5;
    cout << "pika.nivel = " << pika.nivel << '\n';

    Pokemon pikachu{"pika :0",  "Pickachu", "electrico", 20};
    pikachu.saludar();
}