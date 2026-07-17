#include <iostream>
using namespace std;

int main () {
    double depositedValue, finalvalue;
    cout << "Digite o valor do deposito: ";
    cin >> depositedValue;
    // Rendimento de 0,70% ao mês
    finalvalue = depositedValue * 1.007;
    cout << "Valor apos um mes: R$ " << finalvalue << endl;




}