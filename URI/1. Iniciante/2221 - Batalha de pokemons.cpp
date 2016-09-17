// 2221 - Batalha de pokemons (https://www.urionlinejudge.com.br/judge/pt/problems/view/2221)
#include <iostream>
 
using namespace std;
 
int main() {
 
   int entrada = 0;
   cin >> entrada;
   
   for(int i = 0; i < entrada; i++){
       int bonus = 0;
       cin >> bonus;
       
       int ataqueDabriel = 0;
       int defesaDabriel = 0;
       int levelDabriel = 0;
       cin >> ataqueDabriel >> defesaDabriel >> levelDabriel;
       
       int ataqueGuarte = 0;
       int defesaGuarte = 0;
       int levelGuarte = 0;
       cin >> ataqueGuarte >> defesaGuarte >> levelGuarte;
       
       int golpeDabriel = ((ataqueDabriel + defesaDabriel) / 2);
       if (levelDabriel % 2 == 0){
           golpeDabriel += bonus;
       }
       
       int golpeGuarte = ((ataqueGuarte + defesaGuarte) / 2);
       if (levelGuarte % 2 == 0){
           golpeGuarte += bonus;
       }
       
       if(golpeDabriel > golpeGuarte){
           cout << "Dabriel" << endl;
       } else if(golpeDabriel < golpeGuarte){
           cout << "Guarte" << endl;
       } else {
           cout << "Empate" << endl;
       }
   }
 
    return 0;
}
