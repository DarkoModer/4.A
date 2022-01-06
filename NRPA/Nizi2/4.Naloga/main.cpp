#include <iostream>

using namespace std;

int main() {
    string najdaljsaBeseda = "";
    string vnos = "";

    while (vnos != "0") {
        cout << "Podaj besedo: ";
        cin >> vnos;

        if (najdaljsaBeseda.length() < vnos.length())
            najdaljsaBeseda = vnos;
    }

    cout << najdaljsaBeseda << endl;

    return 0;
}
