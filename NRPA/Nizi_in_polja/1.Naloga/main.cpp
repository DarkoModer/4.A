#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));

    int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0;
    int generiranoStevilo = 0;

    for (int i = 0; i != 100; i++) {
        generiranoStevilo = rand() % 6 + 1;

        switch (generiranoStevilo) {
            case 1:
                i1++;
                break;
            case 2:
                i2++;
                break;
            case 3:
                i3++;
            case 4:
                i4++;
            case 5:
                i5++;
                break;
            case 6:
                i6++;
                break;
        }
    }

    cout << "Stevilko 1 je padlo: " << i1 << " krat" << endl;
    cout << "Stevilko 2 je padlo: " << i2 << " krat" << endl;
    cout << "Stevilko 3 je padlo: " << i2 << " krat" << endl;
    cout << "Stevilko 4 je padlo: " << i4 << " krat" << endl;
    cout << "Stevilko 5 je padlo: " << i5 << " krat" << endl;
    cout << "Stevilko 6 je padlo: " << i6 << " krat" << endl;


    return 0;
}
