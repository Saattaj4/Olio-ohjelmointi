#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;


class Asiakas
{

public:
    Asiakas(string nimi, double lr);
    bool talletus(double summa);
    string getNimi();
    void showSaldo();
    bool nosto (double Nosto);
    bool luotonMaksu(double Maksu);
    bool luotonNosto(double Nosto);

    bool tiliSiirto(double summa, Asiakas &saaja);

private:
    pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;

};

#endif // ASIAKAS_H
