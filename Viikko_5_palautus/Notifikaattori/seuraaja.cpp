#include "seuraaja.h"

// Annetaan seuraajan päivitykseksi nimeksi n
Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "Luodaan seuraaja " << n << endl;
}

void Seuraaja::paivitys(string Viesti){
    cout << nimi << " sai viestin: "
         << Viesti << endl;
}

string Seuraaja::getNimi() const {
    return nimi;
}
