#include "italianchef.h"

ItalianChef::ItalianChef(){
    cout << "ItalianChef defaultkonstruktori, ei nimeä"
         << endl;
}
ItalianChef::ItalianChef(string name)
{
    cout << "ItalianChef konstruktori"
         << ", kokin nimi"
         << name
         << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori"
         << endl;
}

/*1. Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok
 *2. jos on, kutsuu makePizza()-jäsenfunktiota.
 *2.1 Parametrinä annetut f & w pitää sijoittaa jäsenmuuttujiin eli jauhojen (flour) ja veden (water) määrä.
 *3. Funktio palauttaa true/false sen mukaan oliko salasana oikea.
*/
bool ItalianChef::askSecret(string pw, int f, int w)
{
    water = w;
    flour = f;

    if (pw == password)
    {
        cout << "Salasana oikein! Moving to makePizza()"
             << endl;

        makePizza();
        return true;
    }
    else
    {
        cout << "Salasana ei kelpaa, ota rehuja!"
             << endl;
        return false;
    }
}

/* 4. makePizza tekee pizzoja niin paljon kuin aineksi riittää, yhteen pizzaan tarvitaan:
- 5 ainesta jauhoja -> flour-jäsenmuuttuja
- 5 ainesta vettä -> water-jäsenmuuttuja
*/
int ItalianChef::makePizza()
{
    int pizzat = 0;
    cout << "Valmiit pizzat: ";
    cout << min(water/5, flour/5)
         << endl;
    return pizzat;

}
