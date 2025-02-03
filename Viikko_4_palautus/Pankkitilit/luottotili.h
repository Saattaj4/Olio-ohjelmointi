#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"

class Luottotili : public pankkitili
{
public:
    Luottotili();
    Luottotili(string o, double lr);
    double getBalance();

    virtual bool withdraw(double nosto) override;
    virtual bool deposit(double nosto) override;

protected:

double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
