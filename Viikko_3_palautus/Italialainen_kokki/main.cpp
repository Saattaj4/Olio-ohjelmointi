#include <iostream>
#include "CHEF.H"
#include "italianchef.h"

using namespace std;

int main()
{

    Chef chef_olio("Taneli");

    int annoksia = chef_olio.makeSalad(10);
    cout << "Valmiita annoksia "
         << annoksia
         << endl;

    int annoksia1 = chef_olio.makeSoup(9);
    cout << "Valmiita annoksia "
         << annoksia1
         << endl;

    cout << endl;

    ItalianChef i_olio(" Super Pena");
    i_olio.askSecret("pizza",10,10);

    return 0;
}
