#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

using namespace std;

// Yliluokka

class Chef
{
public:
    Chef();
    Chef(string name);
    ~Chef();
    std::string getName();

    string getChefName() const;
    int makeSalad(int aines);
    int makeSoup(int aines);

protected:

    string chefName;
};



#endif // CHEF_H
