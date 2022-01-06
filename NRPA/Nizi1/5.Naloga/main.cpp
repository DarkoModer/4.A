#include <iostream>

using namespace std;

bool preveriDavcnoST(string davcna) {
    if (davcna.length() < 8)
        return false;

    int faktor = 8;
    int vsota = 0;

    for (int i = 0; i <= davcna.length() - 2; i++) {
        vsota += ((int) davcna[i] - 48) * faktor;

        faktor--;
    }

    return (vsota + ((int) davcna[7] - 48)) % 11 == 0 ;
}

int main() {
    string davcna = "";

    cout << "Podaj davcno: ";
    cin >> davcna;

    if (preveriDavcnoST(davcna))
        cout << "Davcna stevilka je veljavna" << endl;
    else
        cout << "Davcna stevilka neveljavna" << endl;

    return 0;
}