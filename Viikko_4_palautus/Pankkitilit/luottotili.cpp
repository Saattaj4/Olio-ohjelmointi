#include "luottotili.h"

Luottotili::Luottotili()
{

}

Luottotili::Luottotili(string o, double lr)
    :pankkitili(o)
{
    luottoRaja = lr;
    cout << "Luottoraja on "<< luottoRaja << endl;
}

double Luottotili::getBalance()
{
    return luottoRaja;
}

bool Luottotili::withdraw(double summa)
{
    cout << "Money in bank before credit deposit "
         << saldo
         << endl;
    cout << endl;

    // 1. Negatiivisia nostoja / velanmaksuja ei voi tehdä.
    if (summa < 0){
        cout << "Can't be done!" << endl;
        // Jos summa < nolla, return false;
        return false;
    }
    // 2. Luottotilin saldo saa mennä negatiiviseksi, mutta ei alle luottorajan
    // Luottoraja 1000, velka eli saldo on 800, summa 300
    // Jos saldo+summa > luottoraja, return false;

    else if (summa > luottoRaja) {
        cout << "Can't add funds from credit"
             << endl;
        return false;
    }

    // Muutoin lisätään saldoon summa, return true;
    else {
        cout << "Adding funds from credit"
             << endl;
         luottoRaja -= summa;

        return true;
    }
}

bool Luottotili::deposit(double summa)
{
    cout << "Money in bank before credit deposit "
         << luottoRaja
         << endl;
    cout << endl;

    if (summa < 0){
        cout << "Can't be done!" << endl;
        // Jos summa < nolla, return false;
        return false;
    }

    // Muutoin lisätään saldoon summa, return true;
    else {
        cout << "Adding funds to use account from credit"
             << endl;
        luottoRaja += summa;

        return true;
    }
}
