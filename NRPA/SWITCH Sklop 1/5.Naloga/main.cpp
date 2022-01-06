#include <iostream>
using namespace std;

int main() {

    int st;

    cout << "Napisi poljubno cifro med 1 in 9";
    cin >> st;

    switch (st) {
        case 1:
            cout << "ENA";
            break;
        case 2:
            cout << "DVA";
            break;
        case 3:
            cout << "TRI";
            break;
        case 4:
            cout << "STIRI";
            break;
        case 5:
            cout << "PET";
            break;
        case 6:
            cout << "SEST";
            break;
        case 7:
            cout << "SEDEM";
            break;
        case 8:
            cout << "OSEM";
            break;
        case 9:
            cout << "DEVET";
            break;
        default:
            cout << "Nisi vpisal cifre med 1 in 9";
            break;
    }

    return 0;
}
