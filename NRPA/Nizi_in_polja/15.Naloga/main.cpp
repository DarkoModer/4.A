#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int vsotaStevk(int stevilo) {
    int vsota = 0;

    do {
        vsota += stevilo % 10;
        stevilo /= 10;
    } while (stevilo != 0);

    return vsota;
}

void izpisiHarshadovaStevila(int polje[], int dolzina) {
    for (int i = 0; i != dolzina; i++)
        if (polje[i] % vsotaStevk(polje[i]) == 0)
            cout << polje[i] << endl;
}

int * generirajStevila(int dolzina) {
    int * polje = new int[dolzina];

    for (int i = 0; i != dolzina; i++)
        polje[i] = rand() % 900 + 100;

    return polje;
}

int main() {
    srand(time(NULL));

    int dolzina = 200;

    int * polje = generirajStevila(dolzina);

    izpisiHarshadovaStevila(polje, dolzina);

    return 0;
}
