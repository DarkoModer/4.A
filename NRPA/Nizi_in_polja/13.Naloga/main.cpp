#include <iostream>
#include <ctime>
#include <cstdlib>
#include <map>
#include <algorithm>

using namespace std;

string najpogostejseStevilo(int polje[], int dolzina) {
    map<int, int> mapa;

    for (int i = 0; i != dolzina; i++)
        mapa[polje[i]]++;

    int kolikoKratPojavljeno = 0, stevilka = 0;

    for (auto element : mapa)
        if (kolikoKratPojavljeno < element.second) {
            stevilka = element.first;
            kolikoKratPojavljeno = element.second;
        }

    return to_string(stevilka) + " : " + to_string(kolikoKratPojavljeno);
}

int * generirajStevila(int dolzina) {
    int * polje = new int[dolzina];

    for (int i = 0; i != dolzina; i++)
        polje[i] = rand() % 999 + 1;

    return polje;
}

int main() {
    srand(time(NULL));

    int dolzina = 200;

    int * polje = generirajStevila(dolzina);

    cout << najpogostejseStevilo(polje, dolzina) << " krat pojavljeno" << endl;

    return 0;
}
