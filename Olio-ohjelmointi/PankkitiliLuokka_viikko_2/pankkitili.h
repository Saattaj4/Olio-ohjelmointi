#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{

public:

    Pankkitili();
    Pankkitili(string pinkoodi);
    Pankkitili(string pinkoodi, string tilinro);

    int getSaldo() const;
    void setSaldo(int newSaldo);

    bool kirjaudu(string pk);

private:
    int saldo;
    string tilinro;
    string pinkoodi;
    bool kirjautunut = false;

};

#endif // PANKKITILI_H
