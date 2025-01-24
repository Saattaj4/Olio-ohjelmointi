#include "chef.h"

Chef::Chef() {}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, kokin nimi "
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "Chef destruktori"
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{

    int annoksia = 0;
    annoksia = aines / 5;
    cout << "Salaattiaineksien maara "
         << aines
         << endl;
    return annoksia;
    // 1. Salaatti: yhteen annokseen tarvitaan 5 ainesta
    // 2. palauttavat annosten määrän
}

int Chef::makeSoup(int aines)
{
    int annoksia = 0;
    annoksia = aines / 3;
    cout << "Keittoaineksien maara "
         << aines
         << endl;
    return annoksia;
    // Keitto: yhteen annokseen tarvitaan 3 ainesta
    // 2. palauttavat annosten määrän
}

