#include "peli.h"
#include <iostream>

using namespace std;

/* Toteuta alla olevan luokkakaavion mukainen luokka Game
1. Konstruktorissa parametrinä annetaan maksimiarvo, mille välille 1-maxNumber peli arpoo arvattavan luvun.
2. Play()-jäsenfunktioon toteutetaan peli
    printGameResult()-jäsenfunktiosta kutsutaan, kun peli on päättynyt.
Se tulostaa oikean vastauksen ja kuinka monta arvausta siihen tarvittiin.
3. Luokan toteutuksessa täytyy olla molemmat otsikkotiedosto Game.h ja luokan toteutus Game.cpp

***** Game ****
-maxNumber(int)
-playerGuess(int)
-randomNumber (int)
-numOfGuesses (int)

+Game(int)
+~Game()
+play():void
-printGameResult():void

*/

int main()
{
    Game Game(5);
    Game.play();
    return 0;
}
