#include <iostream>

using namespace std;

string najdaljsiNiz(string polje[], int dolzina) {
    int steviloVnosov = 0;
    string trenutnaNajdaljsaBeseda = "";

    do {
        cout << "Podaj besedo: ";
        cin >> polje[steviloVnosov];

        if (polje[steviloVnosov].length() > trenutnaNajdaljsaBeseda.length())
            trenutnaNajdaljsaBeseda = polje[steviloVnosov];

        steviloVnosov++;
    } while (steviloVnosov != dolzina);

    return trenutnaNajdaljsaBeseda;
}

int main() {
    int dolzina = 20;
    string polje[dolzina];

    string najdaljsaBeseda = najdaljsiNiz(polje, dolzina);

    cout << "Najdaljsa beseda: " << najdaljsaBeseda << endl;

    return 0;
}
