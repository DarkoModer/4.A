#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));

    string a;
    a = 'a' + rand()%26;

    cout << "Franc sporoca, da random generirana crka = " << a << endl;

    if (a == "a" || a == "i" || a == "e" || a == "o" || a == "u" || a == "A" || a == "I" || a == "E" || a == "O" || a == "U") {
        cout << "Franc sporoca, da je crka SAMOGLASNIKA";
    }else {
        cout << "Franc sporoca, da je crka SOGLASNIK";
    }


    return 0;
}
