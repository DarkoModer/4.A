#include <iostream>

using namespace std;

string odmotajPrepleteneCrke(string besedilo) {
    string velikeCrke = "", maleCrke = "";

    for (int i = 0; besedilo[i] != '\0'; i++)
        if (isupper(besedilo[i]))
            velikeCrke += besedilo[i];
        else
            maleCrke += besedilo[i];

    return velikeCrke + maleCrke;
}

int main() {
    string besedilo = "";

    cout << "Podaj besedilo: ";
    cin >> besedilo;

    cout << odmotajPrepleteneCrke(besedilo) << endl;

    return 0;
}
