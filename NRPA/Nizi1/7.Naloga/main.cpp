#include <iostream>

using namespace std;

bool aliStaBesediEnaki(string niz1, string niz2) {
    if (niz1.length() != niz2.length())
        return false;

    bool enaki = true;

    for (int i = 0; enaki && niz1[i] != '\0'; i++)
        if (niz1[i] != niz2[i])
            enaki = false;

    return enaki;
}

int main() {
    string beseda1 = "", beseda2 = "";

    cout << "Podaj prvo besedo: ";
    cin >> beseda1;

    cout << "Podaj drugo besedo: ";
    cin >> beseda2;

    if (aliStaBesediEnaki(beseda1, beseda2))
        cout << "Besedi sta enaki" << endl;
    else
        cout << "Besedi nista enaki" << endl;

    return 0;
}