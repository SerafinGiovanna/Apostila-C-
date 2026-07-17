#include <iostream>
using namespace std;

int main() {
    int distance;
    double fuel, consumption;

    cout << "Digite a distancia percorrida: ";
    cin >> distance;
    cout << "Digite a quantidade de combustivel gasto: ";
    cin >> fuel;

    consumption = (double)distance / fuel;
    cout << "O consumo medio foi de " << consumption << "km/L" << endl;
}
