#include <iostream>
#include <string>
using namespace std;

class Pokemon {
  public:
     // Constructor
     Pokemon(string esp, string tip, int niv) {
        especie = esp;
        tipo = tip;
        nivel = niv;
     }

     void saludar(){
          cout << "Hola soy " << getNombre() << " soy de nivel ";
          cout << nivel << " y soy un " << especie << '\n';
     }

     // setter
     void setMote(string name) {
        mote = name;
     }

     // getter
     string getNombre(){
        if (mote == "")
           return especie;
        else
           return mote;
     }

     void dar_Caramelo_raro(){
        nivel++;
        cout << mote << " subió a nivel " << nivel << "\n";
     }

     void atacar(Pokemon p){
       cout << getNombre()  << " ataca a " << p.getName() << endl;
       p.ps += ataque;
     }

  private:
     string mote = "", especie, tipo;
     int nivel;
};

int main()
{
   Pokemon pikachu("Pickachu", "electrico", 20);
   Pokemon charmader("Charmader", "fuego", 18);
   pikachu.saludar();

   pikachu.setMote("ACOIIN");

   pikachu.saludar();

   pikachu.dar_Caramelo_raro();

   while(pikachu.vivo() and charmader.vivo()){
     pikachu.ataca(charmader);
     charmader.ataca(pikachu);
   }
}
