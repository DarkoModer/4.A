#include <iostream>
using namespace std;

int main() {

    int a;

    cout << "Franc zahteva, da napises cifro" << endl;
    cin >> a;

    if (a%2==0) {
        cout << "Cifra je soda";
    }else {
        cout << "Cifra je liha";
    }

    return 0;
}
