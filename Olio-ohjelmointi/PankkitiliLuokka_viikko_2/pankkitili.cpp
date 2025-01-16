#include "pankkitili.h"

Pankkitili::Pankkitili() {
    saldo = 0;
    pinkoodi = "1234";
    tilinro = "FI80546000123";
}

Pankkitili::Pankkitili(string pk)
{
    pinkoodi = pk;
    saldo =0;
    tilinro = "FI80546000123";
}

int Pankkitili::getSaldo() const
{
    if (kirjautunut == true){
        return saldo;
    }else{
        return -1000;
    }
}

void Pankkitili::setSaldo(int newSaldo)
{
    saldo += saldo + newSaldo;
}

bool Pankkitili::kirjaudu(string pk)
{
    if (pinkoodi == pk){
        kirjautunut = true;
    }else{
        kirjautunut = false;

        return kirjautunut;
    }

}
