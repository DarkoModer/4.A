#include <iostream>
using namespace std;

int main() {

    int a,b;
    char x;

    cout << "Marjan zahteva, da podas p za pravokotnik ali pa k za kvadrat. Podaj tudi stranici a in b ";
    cin >> x;

    switch (x) {
        case 'k':
            cout << "Podali ste kvadrat." << endl;
            cout << "Podaj se dolzino stranice a ";
            cin >> a;
            cout << "Ploscina kvadrata == " << a * a;
            break;
        case 'p':
            cout << "Podali ste pravokotnik." << endl;
            cout << "Podaj se dolzino stranice a in b ";
            cin >> a;
            cin >> b;
            cout << "Ploscina pravokotnika == " << a * b;
            break;
        default:
            cout << "Nisi vpisal k ali p";
    }


    return 0;
}
