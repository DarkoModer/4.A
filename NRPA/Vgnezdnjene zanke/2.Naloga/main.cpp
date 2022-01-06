#include <iostream>
using namespace std;
int main() {

    int x;

    cout << "Podaj neko cifro";
    cin >> x;

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            if (j == 0 || j == x - 1 || i == 0 || i == x - 1) {
                cout << i + 1 << " ";
            }else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
