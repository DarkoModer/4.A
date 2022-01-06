#include <iostream>
using namespace std;

string obrniNiz(string a){
    string novi = "";
    for (int i = a.length()-1; i >= 0; --i) {
        novi = novi + a[i];
    }
    return novi;
}

int main() {

    string a, rezultat;

    a = "Damjan";

    rezultat = obrniNiz(a);

    cout << rezultat;

    return 0;
}
