#include <iostream>
using namespace std;

int main() {
    int A, B, aux;

    cout << "A= ";
    cin >> A;
    cout << "B= ";
    cin >> B;

    aux = A;
    A = B;
    B = aux;

    cout << A << endl;
    cout << B << endl;

}