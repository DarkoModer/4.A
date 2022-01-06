#include <iostream>
using namespace std;

string vrniBrezSamostalnikov(string besedilo){
    string rez = besedilo;
    for (int i = 0; rez[i] != '\0'; ++i) {
        if (rez[i] == 'a' || rez[i] ==  'e' || rez[i] ==  'o' || rez[i] ==  'u' || rez[i] ==  'i' || rez[i] ==  'A' || rez[i] ==  'E' || rez[i] ==  'I' || rez[i] ==  'U' || rez[i] ==  'O'){
            rez.replace(i, 1, "");
        }
    }
    return rez;
}

int main() {

    string besedilo = "", rezultat;

    cout << "Podaj random besedilo.";
    getline(cin, besedilo);

    rezultat = vrniBrezSamostalnikov(besedilo);

    cout << "Novo besedilo :: " << rezultat;

    return 0;
}
