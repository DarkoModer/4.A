#include <iostream>
#include <ctime>
#include <list>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(NULL));

    list<int> stevila;

    for (int i = 0; i != 4; i++)
        stevila.push_back(rand() % 21 - 10);

    cout << "Franc sporoca, da so random generirana stevila naslednja : ";
    for (int i : stevila) {
        cout << i << " ";
    }

    cout << endl;

    stevila.sort();

    cout << "Franc sporoca, da je najmanjse stevilo : " << stevila.front() << endl;

    return 0;
}