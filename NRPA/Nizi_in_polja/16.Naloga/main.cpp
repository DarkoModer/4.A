#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int vsotaDeljiteljev(int stevilo) {
    int vsota = 0;

    for (int i = 1; i < stevilo; i++) {
        if (stevilo % i == 0)
            vsota += i;
    }

    return vsota;
}

void izpisiObilnaStevila(int polje[], int dolzina) {
    for (int i = 0; i != dolzina; i++)
        if (polje[i] < vsotaDeljiteljev(polje[i]))
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

    izpisiObilnaStevila(polje, dolzina);

    return 0;
}
