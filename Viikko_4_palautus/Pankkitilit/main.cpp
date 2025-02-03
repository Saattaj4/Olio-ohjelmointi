#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    //pankkitili pa("Veeti");
    // Luottotili pa1;
    Asiakas pa2("Matti Persaukinen",30);
    Asiakas pa3("Martti Pershauki",50);

    //pa.withdraw(10);
    //pa.deposit(20);
    //pa.getBalance();
    //pa1.withdraw(100);
    pa2.talletus(3);
    pa2.nosto(1);
    pa2.showSaldo();
    pa2.luotonNosto(15);
    pa2.showSaldo();
    pa2.luotonMaksu(10);
    pa2.showSaldo();

    pa3.showSaldo();
    pa2.tiliSiirto(10, pa3);
    pa2.showSaldo();
    pa3.showSaldo();

    return 0;
}
