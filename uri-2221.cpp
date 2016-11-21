#include <iostream>

using namespace std;

int main(){
     int n, valorGolp, valorGolp2;
     short bonus, ataq, def, level,
                  ataq2, def2, level2;

     cin >> n;

     while(n--){
          cin >> bonus;
          cin >> ataq >> def >> level;
          cin >> ataq2 >> def2 >> level2;
          
          valorGolp = (ataq + def)/2;
          valorGolp2 = (ataq2 + def2)/2;

          if(level % 2 == 0) valorGolp += bonus;
          if(level2 % 2 == 0) valorGolp2 += bonus;

          if(valorGolp > valorGolp2) cout << "Dabriel" << endl;
          else if(valorGolp < valorGolp2) cout << "Guarte" << endl;
          else cout << "Empate" << endl;
     }


     return 0;
}
