#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));

    int a;
    a = rand() % 50 + 10;

    cout << "Franc sporoca, da je random generirana cifra = " << a << endl;

    if (a % 2 == 0) {
        cout << "Cifra je soda";
    } else {
        cout << "Cifra je liha";
    }

    return 0;
}


