#include <iostream>
using namespace std;

int main() {
    double dolar, cotacao, real;

    cout << "Digite o valor em dolar: ";
    cin >> dolar;

    cout << "Digite a cotacao do dolar: ";
    cin >> cotacao;

    real = dolar * cotacao;

    cout << "Valor em reais: R$ " << real << endl;

    return 0;
}

