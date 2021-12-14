#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));

    int a, b;

    cout << "Franc prireja BINGO. Napiši stevilko med 1 in 5. Vso sreco!!  " << endl;
    cin >> a;

    if (a<1 || a>5){
        cout << "Podaj cifro med 1 in 5";
    }else {
        b = rand() %5+1;
        cout << "Srecno stevilo je bilo :: " << b << endl;
        if (a == b){
            cout << "Uspesno ste zadeli stevilko!";
        }else{
            cout << "Niste uspeli zadeti stevilke. Vec srece prihodnjic.";
        }
    }

    return 0;
}
