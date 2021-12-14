#include <iostream>
#include <math.h>
using namespace std;

int main() {

    // r = sqrt(p/M_PI)

    float p;

    cout << "Franc zahteva ploscino kroga. Podaj jo tudi ti :: ";
    cin >> p;

    if (p < 0) {
        cout << "Franc sporoca, da vpises cifro, ki je vecja od 0...";
    }else {
        cout << "Franc sporoca, da je polmer :: " << sqrt(p / M_PI);
    }
    return 0;
}
