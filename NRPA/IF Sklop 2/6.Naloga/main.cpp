#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float a;

    cout << "Franc zahteva, da napises cifro = ";
    cin >> a;

    if (a < ceil(a)) {
        cout << "Franc sporoca, da je decimalka/realna cifra";
    }else {
        cout << "Franc sporoca, da je cela cifra";
    }

    return 0;
}
