#ifndef PELI_H
#define PELI_H

class Game
{
public:

    Game(int);
    ~Game();
    void play();

private:
    int maxNumber;
    int playerGuesses;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};
#endif // PELI_H
