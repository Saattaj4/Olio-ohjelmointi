#include "pankkitili.h"
#include <iostream>



pankkitili::pankkitili(string Veeti) {

}

pankkitili::pankkitili()
{

}

pankkitili::~pankkitili()
{

}

bool pankkitili::withdraw(double summa)
{

    // Toteutusta on helpoin lähteä tekemään Pankkitili-luokasta.
    // Jäsenfunktioissa deposit() tekee talletuksen tilille ja withdraw() noston tililtä.
    // Hox! Nämä funktiot ovat virtuaalisia!


    //1. Negatiivisia nostoja / talletuksia ei voi tehdä. Esim. noston parametriksi ei voi antaa summaa -123.45.
    if (summa <0){
        cout << "Balance is under 0 or is negative, not allowed!" << endl;
        return false;
    }
    // 2. Pankkitilin saldo ei saa mennä negatiiviseksi, eli enempää ei voi nostaa kun mitä saldo on.
    else if (summa > saldo){
        cout << "Can't afford that! Poor guy!" << endl;
        return false;
    }
    // 3. Nämä jäsenfunktiot palauttaavat true/false sen mukaan, onnistuiko talletus
    else {
    cout << "Bank's balance before: " << saldo << endl;
    cout << "Withdrawing " << summa << " from it" << endl;
    saldo -= summa;
    cout << endl;
    return true;
}
}

bool pankkitili::deposit(double talletus)
{
    if (talletus <=0){
        cout << " Minium deposit cant be below 0.00! " << endl;
    }
    else{
        cout << "Bank's deposit before deposit: " << saldo << endl;
        cout << "Adding funds: " << talletus << endl;
        saldo += talletus;
        cout << "Your new total: " << saldo << endl;
        cout << endl;
        return true;
    }
}

double pankkitili::getBalance()
{
    return saldo;
}
