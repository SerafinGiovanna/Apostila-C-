#include <iostream>
using namespace std;

int main () {
    string caractere;
    double fixedSalary, total, finalSalary;

    cout << "Qual o nome do funcionario? ";
    cin >> caractere;
    cout << "Qual o salario fixo de " << caractere << "?";
    cin >> fixedSalary;
    cout << "Qual o total de vendas de " << caractere << "?";
    cin >> total;

    finalSalary = fixedSalary + (total * 0.15);

    cout << "\nNome: " << caractere << endl;
    cout << "Salario Fixo: R$ " << fixedSalary << endl;
    cout << "Salario Final: R$ " << finalSalary << endl;
    return 0;
}
