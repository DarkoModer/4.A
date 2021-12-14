#include <iostream>
#include <list>

using namespace std;

int main() {

    int a;
    list<int> stevila;

    cout << "Marjan prijazno zahteva, da podas 3 cifre.." << endl;
    cout << "Prva cifra :";
    cin >> a;
    stevila.push_back(a);
    cout << "Druga cifra :";
    cin >> a;
    stevila.push_back(a);
    cout << "Tretja cifra :";
    cin >> a;
    stevila.push_back(a);


    cout << "Franc sporoca, da so podane stevilke naslednje : ";
    for (int i : stevila) {
        cout << i << " ";
    }

    cout << endl;

    stevila.sort();

    cout << "Franc sporoca, da je najvecje stevilo : " << stevila.back() << endl;

    return 0;
}
