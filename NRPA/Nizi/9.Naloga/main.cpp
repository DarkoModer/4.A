#include <iostream>
using namespace std;

string obrniNiz(string a){
    string novi = "";
    for (int i = a.length()-1; i >= 0; --i) {
        novi = novi + a[i];
    }
    return novi;
}

bool aliJePalindrom(string besedilo){
    string obrnejnoBesedilo = obrniNiz(besedilo);

    if (besedilo == obrnejnoBesedilo){
        return true;
    }else {
        return false;
    }

}

int main() {

    string besedilo = "";

    cout << "Vpisi poljubno poved.";
    getline(cin, besedilo);

    bool rezultat = aliJePalindrom(besedilo);

    cout << "Besedilo je PALINDROM :: ";

    if (rezultat == 1){
        cout << "TRUE";
    }else {
        cout << "False";
    }

    return 0;
}
