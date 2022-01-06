#include <iostream>

using namespace std;

int main() {
    string besedilo = "";

    cout << "Podaj besedilo: ";
    cin >> besedilo;

    cout << endl;

    for (int i = 0; besedilo[i] != '\0'; i++) {
        for (int j = 0; j != besedilo.length(); j++)
            cout << besedilo[i] << " ";

        cout << endl;
    }

    return 0;
}
