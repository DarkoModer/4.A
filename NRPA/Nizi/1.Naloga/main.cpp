#include <iostream>
using namespace std;

string zdruziNiza(string a, string b){
    string rezultat = a + b;
    return rezultat;
}

int main() {

    string a,b, rez;

    a = "Martin";
    b = "Jakob";

    rez = zdruziNiza(a,b);

    cout << rez;

    return 0;
}
