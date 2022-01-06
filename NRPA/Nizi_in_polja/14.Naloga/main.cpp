#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool aliJePalindromskoStevilo2(string stevilo) {
    string stevilo2 = "";

    for (int i = stevilo.length() - 1; i >= 0; i--)
        stevilo2 += stevilo[i];

    return stevilo2 == stevilo;
}

void izpisiPalindrome(int polje[], int dolzina) {
    for (int i = 0; i != dolzina; i++)
        if (aliJePalindromskoStevilo2(to_string(polje[i])))
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

    izpisiPalindrome(polje, dolzina);

    return 0;
}
