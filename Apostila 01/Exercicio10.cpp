#include <iostream>
using namespace std;
#include <list>
int main () {
    double purchaseValue;
    list<double> installment;

    cout << "-----------------------------";
    cout << " | Loja Mamao com acucar | ";
    cout << "-----------------------------";
    cout << "\nInsira o valor da sua compra: R$ " << endl;
    cin >> purchaseValue;

    for (int i = 0; i < 5; i++) {
        installment.push_back(purchaseValue / 5);
        cout << " O valor da parcela " << i+1 << " e de " << installment.front() << endl;
    }

}