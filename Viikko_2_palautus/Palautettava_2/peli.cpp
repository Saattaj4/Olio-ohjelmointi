#include "peli.h"
#include <iostream>

using namespace std;

Game::~Game(){

}

void Game::play() {
    // Random numero arvonta
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;

    while (playerGuesses != randomNumber){
        // Kysytään arvaus
        cout << "Anna luku? "
             << endl;
        cin  >> playerGuesses;
        numOfGuesses++;
        // Tarkistetaan, onko arvaus pienempi, suurempi vai yhtäsuuri
        // Jos arvaus yhtäsuuri kuin satunnaisluku
        if (playerGuesses == randomNumber){
            cout << "Oikein arvasit!"
                 << endl;
            printGameResult();
            cout << endl;
        }
        // Jos arvays pienempi kuin satunnaisluku
        if (playerGuesses > randomNumber){
            cout << "Luku on pienempi kuin arvauksesi"
                 << endl;
            cout << "Reminder! Number is between 1 and "
                 << maxNumber
                 << endl;
            cout << endl;
        }
        // Jos arvaus isompi kuin satunnaisluku
        if (playerGuesses < randomNumber){
            cout << "Luku on suurempi kuin arvauksesi"
                 << endl;
            cout << "Reminder! Number is between 1 and "
                 << maxNumber
                 << endl;
            cout << endl;
        }
    }
}

Game::Game(int HighestNbr){
maxNumber = HighestNbr;


cout << "CONSTRUCTOR: Guess a number between 1 and "
     << maxNumber
     << endl;
cout << endl;
}

void Game::printGameResult(){
    cout << "Arvausten lukumaara: "
         << numOfGuesses
         << endl;
    cout << "Task cleared! Ending game..."
         << endl;
    cout << endl;
}
