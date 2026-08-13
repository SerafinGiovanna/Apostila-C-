#include <iostream>
using namespace std;

int main () {
    int kanto, johto, hoenn;

    cin >> kanto >> johto >> hoenn;
    int kantoSoma, johtoSoma, hoennSoma;
    cin >> kantoSoma >> johtoSoma >> hoennSoma;
    int K, J, H;

    K = ( kanto + kantoSoma);
    J = (johto + johtoSoma);
    H =  (hoenn + hoennSoma);

    if ( kanto && johto && hoenn <= 100) {
        cout << K << " " << J << " " << H;
    }
}