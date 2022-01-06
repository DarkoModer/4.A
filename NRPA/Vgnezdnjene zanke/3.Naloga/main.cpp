#include <iostream>
using namespace std;
int main() {

    int x;

    cout << "Podaj liho cifro";
    cin >> x;

    if (x % 2 == 0){
        cout << "Vpisi liho cifro!!";
        return 0;
    }


    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            if (i == x / 2 || j == x / 2) {
                cout << "1 ";
            }else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
