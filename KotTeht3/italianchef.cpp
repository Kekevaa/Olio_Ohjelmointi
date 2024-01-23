#include "italianchef.h"



ItalianChef::ItalianChef(string s):Chef(s)
{
    cout<<"Chef "<<name<<" Konstruktori"<<endl;
    jauho = 250;
    vesi = 100;
    // jos halutaan suorittaa Chef luokan alustus ennen tätä
}

string ItalianChef::getName()
{
    return name;
}

/*
void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta"<<endl;
}
*/
void ItalianChef::makePasta(){
    cout<<"Chef "<<name<<" makes Pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" uses jauhot "<<jauho<<endl;
    cout<<"Chef "<<name<<" uses vesi "<<vesi<<endl;
}
