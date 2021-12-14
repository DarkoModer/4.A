#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));

    int a;
    a = rand()%21-10;

    cout << "Franc sporoca, da je random generirana cifra = " << a << endl;

    if (a<0) {
        cout << "Franc sporoca, da je random generirana cifra MANJSA od 0";
    }else if (a==0) {
        cout << "Franc sporoca, da je random generirana cifra ENAKA 0";
    }else {
        cout << "Franc sporoca, da je random generirana cifra VECJA od 0";
    }

    return 0;
}
