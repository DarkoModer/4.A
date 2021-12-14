#include <iostream>

using namespace std;

int main() {

    int a, b;
    char ope;

    cout << "Franc zahteva, da podas dve cifri.." << endl;
    cout << "Prva cifra  ::";
    cin >> a;
    cout << "Druga cifra  ::";
    cin >> b;
    cout << "Franc zahteva, da podas operator (+, -, *, /).." << endl;
    cin >> ope;

    if (ope == '+') {
        cout << "Operator: " << ope << "\tRezultat: " << a + b;
    }else if (ope == '-') {
        cout << "Operator: " << ope << "\tRezultat: " << a - b;
    }else if (ope == '*') {
        cout << "Operator: " << ope << "\tRezultat: " << a * b;
    }else if (ope == '/') {
        cout << "Operator: " << ope << "\tRezultat: " << a / b;
    }

    return 0;
}
