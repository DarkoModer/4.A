#include <iostream>

using namespace std;

string odstraniPodvojeneZnake(string besedilo) {
    string vrni = "";

    for (int i = 0; besedilo[i] != '\0'; i += 2)
        vrni += besedilo[i];

    return vrni;
}

int main() {
    string besedilo = "";

    cout << "Podaj besedilo: ";
    cin >> besedilo;

    cout << odstraniPodvojeneZnake(besedilo) << endl;

    return 0;
}
