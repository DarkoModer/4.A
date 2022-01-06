#include <iostream>
using namespace std;

int steviloSamoglasnikov(string besedilo){
    string rez = besedilo;
    int st = 0;
    for (int i = 0; rez[i] != '\0'; ++i) {
        if (rez[i] == 'a' || rez[i] ==  'e' || rez[i] ==  'o' || rez[i] ==  'u' || rez[i] ==  'i' || rez[i] ==  'A' || rez[i] ==  'E' || rez[i] ==  'I' || rez[i] ==  'U' || rez[i] ==  'O'){
            st = st + 1;
        }
    }
    return st;
}

int main() {

    string besedilo = "";
    int rezultat;

    cout << "Podaj random besedilo.";
    getline(cin, besedilo);

    rezultat = steviloSamoglasnikov(besedilo);

    cout << "Stevilo samostalnikov je:: " << rezultat;

    return 0;
}
