#include <iostream>
using namespace std;

int main () {
    int zagueiro, goleiro, direcaoAtacante, direcaoGol;
    cin >> zagueiro;
    cin >> goleiro;
    cin >> direcaoAtacante;
    cin >> direcaoGol;

    if (zagueiro == direcaoAtacante) {
        cout << "Driblado";
    }else {
        cout << "Bloqueado";
    }
    if (goleiro == direcaoGol) {
        cout << endl << "Gol" ;
    }else {
        cout << endl << "...e o goleiro pega";
    }


    // Z G D C
    // E E E E = DRIBL/GOL
    // D D D D = DRIBL/GOL
    // E D E D = DRIBL/GOL
    // D E D E =DRIBL/GOL
    // D D E E =BLOQ/
    // E E D D =BLOQ
    // E D D E =BLOQ
    // D E E D =BLOQ
    // E D D D =BLOQ
    // D E E E =BLOQ
    // E E E D =DRIBL/PEGOU
    // D D D E =DRIBL/PEGOU
}