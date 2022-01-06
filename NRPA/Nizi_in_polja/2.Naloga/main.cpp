#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void nakljucnaLihaStevila(int polje[], int dolzina) {
    int nakljucnaStevilka = 0;

    for (int i = 0; i != dolzina; i++) {
        do {
            nakljucnaStevilka = rand() % 101 + 1;
        } while (nakljucnaStevilka % 2 == 0);

        polje[i] = nakljucnaStevilka;
    }
}

int main() {
    srand(time(NULL));

    int dolzina = 10, polje[dolzina];

    nakljucnaLihaStevila(polje, dolzina);

    for (int stevilo : polje)
        cout << stevilo << endl;

    return 0;
}
