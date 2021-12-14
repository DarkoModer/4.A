#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float x;

    cout << "Franc zahteva, da vpises spremenljivko x :: ";
    cin >> x;

    if (x < 5 && x > -5) {
        cout << "Franc sporoca, da je spremenljivka  -5 < x > 5" << "\nFormila :: x^3 + 3   ==" << (x * x * x) + 3;
    }else {
        if (x < 0){
            x = x * -1;
        }
        cout << "Franc sporoca, da je spremenljivka x < -5 / x > 5" << "\nFormila :: koren(x + 9)   ==" << sqrt(x + 9);
    }

    return 0;
}
