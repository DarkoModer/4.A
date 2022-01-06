#include <iostream>
using namespace std;
int main() {

    char x;

    cout << "Vpisi random stvar (samo en znak) :: ";
    cin >> x;

    switch (x) {
        case 'A'...'Z':
        case 'a'...'z':
            cout << "To je crka.";
            break;
        case '0'...'9':
            cout << "To je stevilka.";
            break;
        default:
            cout << "To je posebni znak.";
            break;
    }

    return 0;
}
