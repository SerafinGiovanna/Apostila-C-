#include <iostream>
using namespace std;

int main () {
    int P;
    cin >> P;

    char matriz[P][P];

    for (int  i=0 ; i < P ; i++) {
        for (int j=0 ; j < P ; j++) {
        if (j < P - i - 1)
            matriz[i][j] = '>' ;
        else
            matriz[i][j] = '#';
        }
    }

    for (int  i=0 ; i < P ; i++) {
        for (int j=0 ; j < P ; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}
