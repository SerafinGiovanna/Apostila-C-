#include <iostream>
using namespace std;

int main () {
    int numeroDecampeoes;
    cin >> numeroDecampeoes;

    int maiorNivel = 0;

    for (int i=0 ; i < numeroDecampeoes ; i++ ) {
        int nivelPoder;
        cin >> nivelPoder;

        if (nivelPoder > maiorNivel) {
            maiorNivel = nivelPoder;
        }
    }

    cout << maiorNivel << endl;

}