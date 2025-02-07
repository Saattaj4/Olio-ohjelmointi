#include <iostream>
#include "notifikaattori.h"
#include "seuraaja.h"

using namespace std;

int main()
{


    Seuraaja *A = new Seuraaja("Aapo");
    Seuraaja *B = new Seuraaja("BanskuBertta");
    Seuraaja *C = new Seuraaja("CocoJambo");

    Seuraaja D ("Dunari");
    Seuraaja E ("Eepeli");
    cout << endl;

    Notifikaattori *N = new Notifikaattori();

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    N->tulosta();
    N->poista(B);
    N->tulosta();
    N->postita("Kiipee puuhun");
/*
    A->next = B;
    B->next = C;

    Seuraaja *alku = A;
    while (alku != nullptr){
        cout << "(debug) Listalla nyt " << alku->getNimi() << endl;
        alku->paivitys("'Kiipee puuhun!'");
        alku = alku->next;
    }if (alku != nullptr){
        cout << "(debug) Listalla seuraavana " << alku->getNimi() << endl;
    }else{
        cout << "Lista loppui!" << endl;
    }
    cout << endl;
*/
    delete A;
    delete B;
    delete C;
    //delete n;

}
