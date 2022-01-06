#include <iostream>
using namespace std;

int main() {

    int a, b;
    char ope;

    cout << "Marjan je naredil kalulator.. Vpisi cifro in operator" << endl;

    cout << "Vpisi operator (+, -, *, /): ";
    cin >> ope;

    switch (ope) {
        case '+':
            cout << "Izbral si SESTEVANJE." << endl;
            cout << "Vpisi prvo cifro: ";
            cin >> a;
            cout << "Vpisi drugo cifro: ";
            cin >> b;
            cout << "Rezultat == " << a + b;
            break;
        case '-':
            cout << "Izbral si ODSTEVANJE." << endl;
            cout << "Vpisi prvo cifro: ";
            cin >> a;
            cout << "Vpisi drugo cifro: ";
            cin >> b;
            cout << "Rezultat == " << a - b;
            break;
        case '*':
            cout << "Izbral si MNOZENJE." << endl;
            cout << "Vpisi prvo cifro: ";
            cin >> a;
            cout << "Vpisi drugo cifro: ";
            cin >> b;
            cout << "Rezultat == " << a * b;
            break;
        case '/':
            cout << "Izbral si DELJENJE." << endl;
            cout << "Vpisi prvo cifro: ";
            cin >> a;
            cout << "Vpisi drugo cifro: ";
            cin >> b;
            cout << "Rezultat == " << a / b;
            break;
        default:
            cout << "Nisi vpisal pravega operatorja. (+, -, *, /)";
            break;
    }


    return 0;
}
