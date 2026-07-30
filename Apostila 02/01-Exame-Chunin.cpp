#include <iostream>
using namespace std;

int main() {
    string  p1, p2;

   cin >> p1;
    cin >> p2;

    if (p1 == "N" || p2 == "N") {
        cout << "elim";
    } else if (p1 != p2) {
        cout << "clas";
    } else {
        cout << "elim";

    }
}

// A A E
// A B CLAS
// B A CLAS
// B B E
// A N E
// N A E
// B N E
// N B E
// N N E