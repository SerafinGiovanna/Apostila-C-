#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main () {
    vector<string> Linha1, Linha2;
    string temp;
    stringstream ss(temp);

    getline(cin, temp);

    while (ss >> temp) {
        Linha1.push_back(temp);
    }
    getline(cin, temp);

    while (ss >> temp) {
        Linha2.push_back(temp);
    }

    cout << "Linha1" << endl;
    for (int i; i < Linha1.size(); i++) {
        cout << Linha1[i] << endl;
    }

    cout << "Linha2" << endl;
    for (int i; i < Linha2.size(); i++) {
        cout << Linha2[i] << endl;
    }


    if ( Linha1.at(0) == Linha2.at(0) && Linha1.at(1) == Linha2.at(1)) {
        cout << "Soltar Pacote";
    } else {
        cout << "Nao soltar pacote";
    }

    return 0;
}