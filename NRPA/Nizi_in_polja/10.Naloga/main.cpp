#include <iostream>
#include <ctime>
#include <cstdlib>
#include <bitset>

using namespace std;

int pretvoriVDvojisko(int stevilo) {
    return stoi(bitset<8>(stevilo).to_string());
}

int * vrniPoljeDvojiskihStevil(int polje[], int dolzina) {
    int * dvojiskaStevila = new int[dolzina];

    for (int i = 0; i != dolzina; i++)
        dvojiskaStevila[i] = pretvoriVDvojisko(polje[i]);

    return dvojiskaStevila;
}

int * generirajStevila(int dolzina) {
    int * polje = new int[dolzina];

    for (int i = 0; i != dolzina; i++)
        polje[i] = rand() % 1024 + 1;

    return polje;
}

int main() {
    srand(time(NULL));

    int dolzina = 100;

    int * polje = generirajStevila(dolzina);

    int * poljeDvojiskihStevil = vrniPoljeDvojiskihStevil(polje, dolzina);

    for (int i = 0; i != dolzina; i++)
        cout << polje[i] << " : " << poljeDvojiskihStevil[i] << endl;

    return 0;
}
