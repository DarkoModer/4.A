#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));

    string a, b, c;
    a = 'A' + rand()%26;
    b = 'A' + rand()%26;
    c = 'A' + rand()%26;


    cout << "Franc sporoca, da random generirana crka = " << a+b+c << endl;

    if (a+b+c == "NMS") {
        cout << "ZADEL SI!!!";
    }else {
        cout << "VEC SRECE PRIHODNJIC";
    }


    return 0;
}
