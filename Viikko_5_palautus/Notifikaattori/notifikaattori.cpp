#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {}


void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    // 1. uusiSeur->next =
    // 2. seuraajat =

    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;

}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    cout << endl;
    cout << ("Poistetaan seuraaja ") << poistSeur->getNimi() << endl;
    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        if (alku->next == poistSeur){
            alku->next= poistSeur->next;
        }
        alku = alku->next;

    }
}

void Notifikaattori::tulosta() // Seuraajalista
{
    cout << endl;
    cout << ("Listan seuraajat") << endl;

    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        cout << "(debug) Listalla nyt " << alku->getNimi() << endl;
        alku = alku->next;
    }

}

void Notifikaattori::postita(string v)
{
    cout << endl;
    cout << "Viestin saajat" << endl;
    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        alku->paivitys(v);
        alku = alku->next;
    }
    cout << endl;
}
