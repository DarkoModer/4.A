#include <iostream>

using namespace std;

string * obrniVrstiRed(string polje[], int dolzina) {
    string * obrnjeno = new string[dolzina];
    int stevec = 0;

    for (int i = dolzina - 1; i >= 0; i--)
        obrnjeno[stevec++] = polje[i];

    return obrnjeno;
}

int main() {
    string polje[] = {"11", "21", "31", "41"};
    int dolzina = sizeof(polje) / sizeof(polje[0]);

    string * obrnjeno = obrniVrstiRed(polje, dolzina);

    for (int i = 0; i != dolzina; i++)
        cout << obrnjeno[i] << endl;

    return 0;
}
