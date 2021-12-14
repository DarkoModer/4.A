#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "Franc zahteva, da podas celo cifro  :: ";
    cin >> a;

    if (a % 3 == 0 || a % 5 == 0){
        cout << "Franc sporoca, da  stevilo JE veckratnik stevil 3 ali 5.";
    }else{
        cout << "Franc sporoca, da stevilo NI veckratnik stevil 3 ali 5.";
    }

    return 0;
}
