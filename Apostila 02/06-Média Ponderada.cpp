#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float nota1, nota2, nota3, media;

    cin >>  nota1;
    cin >> nota2;
    cin >> nota3;

    media = ((nota1 * 4) + (nota2 * 4 ) + (nota3 * 2)) / 10;

    cout << fixed << setprecision(2);
    cout << media << endl;
}