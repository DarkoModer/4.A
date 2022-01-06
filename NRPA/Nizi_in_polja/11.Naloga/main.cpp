#include <iostream>

using namespace std;

bool imaBeseda3Samoglasnike(string beseda) {
    int steviloSamoglasnikov = 0;

    for (int i = 0; beseda[i] != '\0'; i++) {
        char crka = tolower(beseda[i]);
        if (crka == 'a' || crka == 'e' || crka == 'i' || crka == 'o' || crka == 'u')
            steviloSamoglasnikov++;
    }
    return steviloSamoglasnikov >= 3;
}

void bogateBesede(string polje[], int dolzina) {
    int steviloVnosov = 0;
    string vnos = "";

    do {
        do {
            cout << "Podaj besedo: ";
            cin >> vnos;
        } while (!imaBeseda3Samoglasnike(vnos));

        polje[steviloVnosov] = vnos;

        steviloVnosov++;
    } while (steviloVnosov != dolzina);
}

int main() {
    int dolzina = 200;
    string polje[dolzina];

    bogateBesede(polje, dolzina);

    for (string element : polje)
        cout << element << endl;

    return 0;
}
