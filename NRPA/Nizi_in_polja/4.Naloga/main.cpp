#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void napolniPolje(int polje[], int dolzina) {
    int nakljucnaStevilka = 0;

    for (int i = 0; i != dolzina; i++) {
        polje[i] = rand() % 51 + 50;;
    }
}

void urediPadajoce(int polje[], int dolzina) {
    for (int i = 0; i != dolzina; i++)
        for (int j = i + 1; j != dolzina; j++)
            if (polje[i] < polje[j])
                swap(polje[i], polje[j]);
}

int main() {
    srand(time(NULL));

    int dolzina = 50, polje[dolzina];

    napolniPolje(polje, dolzina);

    urediPadajoce(polje, dolzina);

    for (int element : polje)
        cout << element << endl;

    return 0;
}
