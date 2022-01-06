#include <iostream>
using namespace std;

string cenzuraSamoglasnikov(string a){
    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] == 'a' || a[i] ==  'e' || a[i] ==  'o' || a[i] ==  'u' || a[i] ==  'i' || a[i] ==  'A' || a[i] ==  'E' || a[i] ==  'I' || a[i] ==  'U' || a[i] ==  'O') {
            a.replace(i, 1, "#");
        }
    }
    return a;
}

int main() {

    string beseda, rezultat = "";

    cout << "Vpisi poljubno besedo:: ";
    cin >> beseda;

    rezultat = cenzuraSamoglasnikov(beseda);

    cout << rezultat;

    return 0;
}
