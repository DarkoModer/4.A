#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));

    int a, ost;

    a = rand()% 900 + 100;

    cout << "Franc sporoca, da je random generirana cifra = " << a << endl;


    for (int i = 0; a > 0; ++i) {
        ost = a % 10;
        a = a / 10;
        cout << ost;
    }


    return 0;
}
