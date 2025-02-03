#include "asiakas.h"



Asiakas::Asiakas(string n, double lr)
    :kayttotili(n), luottotili(n, lr)

{
    nimi = n;
    cout<<"Bank account created to "<<nimi<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << endl << nimi << " - Use account balance " << kayttotili.getBalance() << "e" << endl;
    cout << nimi << " - Credit account balance " << luottotili.getBalance() << "e" << endl << endl;
}

bool Asiakas::talletus(double summa)
{
    bool ret = kayttotili.deposit(summa);
    if(ret == false)
    {
        cout << "Deposit didn't work" <<endl;
    }
    else
    {
        cout<<"Deposit successful"<<endl;
        cout << "Money in account: "<< summa << endl;
        return ret;
    }
}

bool Asiakas::nosto(double nosto)
{
    bool ret = kayttotili.withdraw(nosto);
    if(ret == false)
    {
        cout << "Asking too much money!" <<endl;
    }
    else
    {
        cout << "Withdraw successful"<<endl;
        return ret;
    }
}

bool Asiakas::luotonMaksu(double summa)
{
    bool ret = luottotili.deposit(summa);
    if(ret == false)
    {
        cout << "Credit payment didnt work" <<endl;
    }
    else
    {
        cout << "Credit payment worked"<<endl;
        return ret;

    }
}


bool Asiakas::luotonNosto(double nosto)
{
    bool ret = luottotili.withdraw(nosto);
    if(ret == false)
    {
        cout << "Credit deposit didnt work" <<endl;
    }

    else
    {
        cout<<"Credit deposit worked"<<endl;
        return ret;
    }
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool check = kayttotili.withdraw(summa);

    if (check == true){
        saaja.talletus(summa);
        cout << "Someone is getting paid today!" << endl;
        return true;
    } else {
        cout << "No can do maaaan! You are too poor!" << endl;
        return false;
    }

}
