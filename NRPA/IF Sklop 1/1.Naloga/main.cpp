#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Podaj cifro a == ";
    cin >> a;
    cout << "Podaj cifro b == ";
    cin >> b;

    int sestevanje = a + b;
    int odstevanje = a - b;
    int mnozenje = a * b;
    float deljenje = a / b;

    cout << "Sestevanje  " << sestevanje << endl;
    cout << "Odstevanje  " << odstevanje << endl;
    cout << "Mnozenje  " << mnozenje << endl;
    cout << "Deljenje  " << deljenje << endl;

    return 0;
}
