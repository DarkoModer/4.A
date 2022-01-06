#include <iostream>
#include <algorithm>

using namespace std;

void najdaljsiTrijeNizi(string polje[], int dolzina) {
    int steviloVnosov = 0;

    do {
        cout << "Podaj besedo: ";
        cin >> polje[steviloVnosov];

        steviloVnosov++;
    } while (steviloVnosov != dolzina);
}

int main() {
    int dolzina = 100;
    string polje[100];

    najdaljsiTrijeNizi(polje, dolzina);

    sort(begin(polje), end(polje), greater<string>());

    cout << "Najdaljsa beseda: " << polje[0] << endl;
    cout << "Najdaljsa beseda: " << polje[1] << endl;
    cout << "Najdaljsa beseda: " << polje[2] << endl;

    return 0;
}
