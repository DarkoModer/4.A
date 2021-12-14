#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Franc zahteva, da podas dve cifri.." << endl;
    cout << "Prva cifra  ::";
    cin >> a;
    cout << "Druga cifra  ::";
    cin >> b;

    if (a > b){
        cout << "A je veji!";
    }else if (a == b){
        cout << "Cifri sta isti";
    }else {
        cout << "B je veji!";
    }

    return 0;
}
