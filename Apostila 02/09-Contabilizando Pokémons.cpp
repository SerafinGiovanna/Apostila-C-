#include <iostream>
using namespace std;

int main () {
    int kanto, johto, hoenn;

    cin >> kanto;
    cin >> johto;
    cin >> hoenn;

    int kantoSoma, johtoSoma, hoennSoma;

    cin >> kantoSoma;
    cin >> johtoSoma;
    cin >>hoennSoma;

    int K, J, H;

    K = ( kanto + kantoSoma);
    J = (johto + johtoSoma);
    H =  (hoenn + hoennSoma);

    if ( kanto && johto && hoenn <= 100) {
        cout << K << " " << J << " " << H;
    }
}