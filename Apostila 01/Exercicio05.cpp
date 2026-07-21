#include <iostream>
using namespace std;

int main() {
    string name;
    double test1, test2, test3, media;

    cout << "Nome do aluno: " ;
    cin >> name;
    cout << "Nota da primeira prova de " << name << ": ";
    cin >> test1;
    cout << "Nota da segunda prova de " << name << ": ";
    cin >> test2;
    cout << "Nota da terceira prova de " << name << ": ";
    cin >> test3;

    media = (test1 + test2 + test3) / 3;

    cout << "A Media das notas de " << name << " e " << media << ": ";


}
