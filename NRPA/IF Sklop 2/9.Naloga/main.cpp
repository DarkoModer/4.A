#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Franc zahteva, da podas dve cifri.." << endl;
    cout << "Prva cifra  ::";
    cin >> a;
    cout << "Druga cifra  ::";
    cin >> b;

    if (a < b){
        cout << "Formula : a + 2b == " << a + 2 * b;
    }else {
        cout << "Formula : 2a - 3b == " << 2 * a - 3 * b;
    }

    return 0;
}
