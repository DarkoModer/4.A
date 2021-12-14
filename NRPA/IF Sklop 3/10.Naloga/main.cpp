#include <iostream>

using namespace std;

int main() {

    int dan , mesec, leto;

    cout << "Marjan zahteva, da vpises danasnji datum s stevilkami." << endl;
    cout << "Napisi kateri dan je danes (s cifro) : ";
    cin >> dan;

    if (dan < 1 || dan > 31){
        cout << "Vpisi dan med 1 in 31!!!";

        return 0;
    }

    cout << "Napisi kateri mesec je trenutno (s cifro) : ";
    cin >> mesec;

    if (mesec < 1 || mesec > 12){
        cout << "Vpisi mesec med 1 in 12!!!";

        return 0;
    }

    cout << "Napisi kateri dan je trenutno (s cifro) : ";
    cin >> leto;

    if (leto < 1970 || dan > 2050){
        cout << "Vpisi letosnje leto!!!";

        return 0;
    }

    string meseci[12] = {"Januar", "Februar", "Marec", "April", "Maj", "Junij", "Julij", "Avgust", "September", "Oktober", "November", "December"};


    cout << "Danasnji datum " << dan << ". " << meseci[mesec-1] << " " << leto;

    return 0;
}
