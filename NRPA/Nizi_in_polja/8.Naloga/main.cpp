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

void izpisiPrastvila(int polje[], int dolzina) {
    for (int i = 0; i != dolzina; i++) {
        polje[i] = rand() % 100 + 1;

        if (jePrastevilo(polje[i]))
            cout << polje[i] << endl;
    }
}

int main() {
    srand(time(NULL));

    int dolzina = 200, polje[dolzina];

    izpisiPrastvila(polje, dolzina);

    return 0;
}
