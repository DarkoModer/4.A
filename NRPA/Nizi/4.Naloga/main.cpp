#include <iostream>
using namespace std;

string vrniSoglasnik(string a){
    string rez;
    for (int i = 0; i < a.length(); i++){
        if (a[i] != 'a' && a[i] !=  'e' && a[i] !=  'o' && a[i] !=  'u' && a[i] !=  'i' && a[i] !=  'A' && a[i] !=  'E' && a[i] !=  'I' && a[i] !=  'U' && a[i] !=  'O'){
            rez = rez + a[i];
        }
    }
    return rez;
}


int main() {

    string beseda = "Soglasnik";
    string rezultat = "";

    rezultat = vrniSoglasnik(beseda);

    cout << rezultat;

    return 0;
}