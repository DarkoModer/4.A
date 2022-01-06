#include <iostream>

using namespace std;

string odstraniSodeZnake(string besedilo) {
    string vrni = "";

    for (int i = 0; besedilo[i] != '\0'; i++)
        if ((i + 1) % 2 != 0)
            vrni += besedilo[i];

    return vrni;
}

int main() {
    string besedilo = "";

    cout << "Podaj besedilo: ";
    cin >> besedilo;

    cout << odstraniSodeZnake(besedilo) << endl;

    return 0;
}