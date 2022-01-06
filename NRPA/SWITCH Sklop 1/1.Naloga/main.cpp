#include <iostream>
using namespace std;

int main() {

    int x;

    cout << "Marjan zahteva, da vpises poljubno cifro med 1 in 5 :: ";
    cin >> x;

    switch (x) {
        case 1:
            cout << "Marjan sporoca, da si vpisal 1" << endl;
            break;
        case 2:
            cout << "Marjan sporoca, da si vpisal 2" << endl;
            break;
        case 3:
            cout << "Marjan sporoca, da si vpisal 3" << endl;
            break;
        case 4:
            cout << "Marjan sporoca, da si vpisal 4" << endl;
            break;
        case 5:
            cout << "Marjan sporoca, da si vpisal 5" << endl;
            break;
        default:
            cout << "Marjan sporoca, da nisi podal cifre med 1 in 5";
    }

    return 0;
}
