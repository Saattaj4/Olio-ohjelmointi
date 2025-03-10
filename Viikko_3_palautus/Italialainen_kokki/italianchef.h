#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string pw, int f, int w);

private:
    string password = "pizza";
    int flour = 0;
    int water = 0;
    int makePizza();
};

#endif // ITALIANCHEF_H
