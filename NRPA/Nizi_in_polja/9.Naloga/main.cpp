#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool jePrastevilo(int stevilo) {
    if (stevilo == 0 || stevilo == 1)
        return false;

    for (int i = 2; i <= stevilo / 2; i++)
        if (stevilo % i == 0)
            return false;

    return true;
}

int * vrniPoljePrastevil(int dolzina) {
    int * prastevila = new int[dolzina];

    for (int i = 0; i != dolzina; i++)
        do {
            prastevila[i] = rand() % 500 + 1;
        } while (!jePrastevilo(prastevila[i]));

    return prastevila;
}

int main() {
    srand(time(NULL));

    int dolzina = 200;

    int * poljePrastevil = vrniPoljePrastevil(dolzina);

    for (int i = 0; i != dolzina; i++)
        cout << poljePrastevil[i] << endl;

    return 0;
}
