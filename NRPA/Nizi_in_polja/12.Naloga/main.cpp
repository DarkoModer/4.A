#include <iostream>

using namespace std;

int danVLetu(int dan, int mesec) {
    int pristevek[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

    return dan + pristevek[mesec - 1];
}

int main() {
    int dan = 0, mesec = 0;

    cout << "Podaj dan: ";
    cin >> dan;

    cout << "Podaj mesec: ";
    cin >> mesec;

    cout << danVLetu(dan, mesec) << endl;

    return 0;
}
