#include <iostream>
using namespace std;

int main() {

    string a;

    cout << "Franc zahteva, da podas eno crko :: ";
    cin >> a;

    if (a == "a" || a == "i" || a == "e" || a == "o" || a == "u" || a == "A" || a == "I" || a == "E" || a == "O" || a == "U") {
        cout << "Franc sporoca, da je crka SAMOGLASNIKA";
    }else {
        cout << "Franc sporoca, da je crka SOGLASNIK";
    }


    return 0;
}
