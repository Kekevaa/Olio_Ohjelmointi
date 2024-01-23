#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class ItalianChef:public Chef
{
public:
    ItalianChef(string s);

    string getName();
    void makePasta();
    ItalianChef(string,int,int);


private:

    int vesi;
    int jauho;
};

#endif // ITALIANCHEF_H
