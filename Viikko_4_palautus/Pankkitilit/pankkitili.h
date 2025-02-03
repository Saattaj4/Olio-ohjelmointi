#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>
using namespace std;

class pankkitili{
public:
    pankkitili(string o);
    pankkitili();
    ~pankkitili();
    virtual bool withdraw(double);
    virtual bool deposit(double);
    double getBalance();

protected:
    string omistaja;
    double saldo = 50;
};

#endif // PANKKITILI_H
