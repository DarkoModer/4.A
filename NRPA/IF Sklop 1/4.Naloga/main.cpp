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
        cout << "A je vecji od B. Rezultat A-B == " << a - b;
    }else {
        cout << "B je vecji od A. Rezultat B-A == " << b - a;
    }

    return 0;
}
