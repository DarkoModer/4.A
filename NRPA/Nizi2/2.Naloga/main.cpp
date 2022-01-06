#include <iostream>

using namespace std;

int prvaPojavitevCrke(string besedilo, char crka) {
    for (int i = 0; besedilo[i] != '\0'; i++)
        if (besedilo[i] == crka)
            return i + 1;

    return 0;
}

int main() {
    string besedilo = "";
    char crka = 0;

    cout << "Podaj besedilo: ";
    cin >> besedilo;

    cout << "Podaj crka: ";
    cin >> crka;

    int mesto = prvaPojavitevCrke(besedilo, crka);

    if (mesto == 0)
        cout << "Crka se ne pojavi" << endl;
    else
        cout << "Crka se pojavi na " << mesto << " mestu" << endl;

    return 0;
}
