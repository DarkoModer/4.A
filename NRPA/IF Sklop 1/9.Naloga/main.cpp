#include <iostream>

using namespace std;

int main() {

    int starost;

    cout << "Franc zahteva vaso starost :: ";
    cin >> starost;

    if (starost >= 18){
        cout << "Oseba je polnoletna.";
    }else {
        cout << "Oseba ni polnoletna!";
    }

    return 0;
}
