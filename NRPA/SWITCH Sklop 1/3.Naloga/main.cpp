#include <iostream>
using namespace std;

int main() {

    int dan;

    cout << "Napisi poljubno cifro med 1 in 7 ";
    cin >> dan;

    switch (dan) {
        case 1:
            cout << "Ponedeljek";
            break;
        case 2:
            cout << "Torek";
            break;
        case 3:
            cout << "Sreda";
            break;
        case 4:
            cout << "Cetrtek";
            break;
        case 5:
            cout << "Petek";
            break;
        case 6:
            cout << "Sobota";
            break;
        case 7:
            cout << "Nedelja";
            break;
        default:
            cout << "Nisi vpisal cifre med 1 in 7";
            break;
    }

    return 0;
}
