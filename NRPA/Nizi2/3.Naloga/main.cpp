#include <iostream>

using namespace std;

int zadnjaPojavitevCrke(string besedilo, char crka) {
    int pojavitev = 0;

    for (int i = 0; besedilo[i] != '\0'; i++)
        if (besedilo[i] == crka)
            pojavitev = i + 1;

    return pojavitev;
}

int main() {
    string besedilo = "";
    char crka = 0;

    cout << "Podaj besedilo: ";
    cin >> besedilo;

    cout << "Podaj crka: ";
    cin >> crka;

    int mesto = zadnjaPojavitevCrke(besedilo, crka);

    if (mesto == 0)
        cout << "Crka se ne pojavi" << endl;
    else
        cout << "Crka se pojavi na " << mesto << " mestu" << endl;

    return 0;
}
