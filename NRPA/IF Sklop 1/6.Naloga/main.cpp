#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "Franc zahteva, da podas dve cifri.." << endl;
    cout << "Cifra  ::";
    cin >> a;

    if (a == 100){
        cout << "x je 100";
    }else {
        cout << "stevilo razlicno od 100!";
    }

    return 0;
}
