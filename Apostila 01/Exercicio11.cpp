#include <iostream>
using namespace std;

int main() {
    double price, percentual, venda;

    cout << "Digite o preco de custo do produto: R$ ";
    cin >> price;
    cout << "Digite o percentual de acrescimo: % ";
    cin >> percentual;

    venda = price + (price * percentual / 100 );

    cout << "O preco de venda: R$ " << venda << endl;
}