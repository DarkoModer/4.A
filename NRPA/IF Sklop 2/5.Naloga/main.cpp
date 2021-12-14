#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));

    int a;
    a = rand() % (21 - 10) + 10;

    cout << "Franc sporoca, da je random generirana cifra = " << a << endl;

    if (a % 2 == 0 && a > 15) {
        cout << "Cifra je soda in vecja od 15";
    } else if (a % 2 != 0 && a > 15) {
        cout << "Cifra je liha in vecja od 15";
    } else if (a % 2 != 0 && a < 15) {
        cout << "Cifra je liha in manjsa od 15";
    } else {
        cout << "Cifra je soda in manjse od 15";
    }

    return 0;
}
