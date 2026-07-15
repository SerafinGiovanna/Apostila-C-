#include <iostream>
using namespace std;

int main () {
    double custoFabrica, valorImpostos, custoConsumidor;

    cout << "Insira o valor do custo fabrica: R$ ";
    cin >> custoFabrica;

    // Aplica 45% de impostos
    valorImpostos = custoFabrica + (custoFabrica * 45 / 100);

    // Aplica 28% do distribuidor sobre o resultado
    custoConsumidor = valorImpostos + (valorImpostos * 28 / 100);

    cout << "Custo ao consumidor: R$ " << custoConsumidor << endl;
}