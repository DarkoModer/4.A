#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float x;

    cout << "Franc zahteva, da vpises spremenljivko x :: ";
    cin >> x;

    if (x < 0) {
        cout << "Franc sporoca, da je spremenljivka MANJSA od 0" << "\nFormila :: x^2  ==" << x * x;
    }else if (x == 0) {
        cout << "Franc sporoca, da je spremenljivka ENAKA 0";
    }else {
        cout << "Franc sporoca, da je spremenljvika VECJA od 0" << "\nFormula :: koren(x)  ==" << sqrt(x);
    }

    return 0;
}
