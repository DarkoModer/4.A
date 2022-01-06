#include <iostream>
using namespace std;

string zlij(string a, string b){
    bool aa = false, bb = false;
    int i = 0, j = 0;
    string rezultat = "";
    while (!aa || !bb){
        if (a[i] == '\0'){
            aa = true;
        }
        if (b[j] == '\0'){
            bb = true;
        }
        if (!aa){
            rezultat += a[i];
            i++;
        }
        if (!bb){
            rezultat += b[j];
            j++;
        }
    }
    return rezultat;
}

int main() {

    string prva = "", druga = "", rezultat = "";

    cout << "Vpisi dve besedi." << endl;
    cout << "Vpisi prvo:: ";
    cin >> prva;
    cout << "Vpisi drugo:: ";
    cin >> druga;

    rezultat = zlij(prva, druga);
    cout << "Rezultat je:: " << rezultat;

    return 0;
}
