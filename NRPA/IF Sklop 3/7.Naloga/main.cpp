#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));

    int a[2], vsota = 0;

    for (int i = 0; i < 2; ++i) {
        a[i] = rand() % 21 + 20;
        vsota = vsota + a[i];
    }

    cout << "Franc sporoca, da je random generirana cifra = " << a[0] << " " << a[1] << endl;
    cout << "Franc sporoca, da je rezultat = " << vsota << endl;

    if (vsota % 2 == 0) {
        cout << "Cifra je soda";
    } else {
        cout << "Cifra je liha";
    }

    return 0;
}
