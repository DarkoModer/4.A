#include <iostream>
using namespace std;

int main() {

    int a;

    cout << "Franc zahteva, da vpises cifro :: ";
    cin >> a;

    if (a<0) {
        cout << "Franc sporoca, da je cifra MANJSA od 0" << "\nNaslednjik te cifre  == " << a - 1;
    }else if (a==0) {
        cout << "Franc sporoca, da je cifra ENAKA 0";
    }else {
        cout << "Franc sporoca, da je cifra VECJA od 0" << "\nNaslednjik te cifre  == " << a + 1;
    }

    return 0;
}
