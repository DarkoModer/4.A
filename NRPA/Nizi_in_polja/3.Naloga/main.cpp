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

void prestejStevila(int polje[], int dolzina, int & steviloLihih, int & steviloSodih) {
    for (int i = 0; i != dolzina; i++) {
        if (polje[i] % 2 == 0)
            steviloSodih++;
        else
            steviloLihih++;
    }
}

int main() {
    srand(time(NULL));

    int dolzina = 50, polje[dolzina];
    int steviloSodih = 0, steviloLihih = 0;

    napolniPolje(polje, dolzina);

    prestejStevila(polje, dolzina, steviloSodih, steviloLihih);

    cout << "Stevilo sodih stevil: " << steviloSodih << endl;
    cout << "Stevilo lihih stevil: " << steviloLihih << endl;

    return 0;
}
