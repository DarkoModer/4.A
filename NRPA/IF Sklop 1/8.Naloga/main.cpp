#include <iostream>

using namespace std;

int main() {

    int pin;

    cout << "Franc zahteva pin :: ";
    cin >> pin;

    if (pin == 1234){
        cout << "DVIG DOVOLJEN";
    }else {
        cout << "NAPACNA STEVILKA!";
    }

    return 0;
}
