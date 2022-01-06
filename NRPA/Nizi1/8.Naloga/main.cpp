#include <iostream>

using namespace std;

bool aliJePodniz(string niz1, string niz2) {
    int kolkoMoraBitEnakih = niz2.length();
    int enakih = 0, j = 0;

    for (int i = 0; niz1[i] != '\0'; i++)
        if (niz1[i] == niz2[j]) {
            enakih++;
            j++;

            if (enakih == kolkoMoraBitEnakih)
                return true;
        } else {
            enakih = 0;
            j = 0;
        }

    return false;
}

int main() {
    string beseda1 = "", beseda2 = "";

    cout << "Podaj prvo besedo: ";
    cin >> beseda1;

    cout << "Podaj drugo besedo: ";
    cin >> beseda2;

    if (aliJePodniz(beseda1, beseda2))
        cout << "Beseda je podniz" << endl;
    else
        cout << "Beseda ni podniz" << endl;

    return 0;
}