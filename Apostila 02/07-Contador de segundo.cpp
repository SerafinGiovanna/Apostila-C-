#include <iostream>
using namespace std;

int main () {
    int segundos, horas, minutos, segundos2;

    cin >> segundos;

    horas = segundos / 3600;
    minutos = ( segundos % 3600) / 60;
    segundos2 = segundos % 60;

    cout << horas << "h " << minutos << "m " << segundos2 << "s";
}