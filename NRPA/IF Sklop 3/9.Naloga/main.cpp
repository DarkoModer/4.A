#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));

    int a, ost = 0;

    a = rand()% 900 + 100;

    cout << "Franc sporoca, da je random generirana cifra = " << a << endl;


    for (int i = 0; a > 0; ++i) {
        ost = ost + (a % 10);
        a = a / 10;
    }

    cout << "Vsota == " << ost;


    return 0;
}
