#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo() {
    cout<<"Kerrosalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon asunnot"<<endl;
    eka = new Katutaso;
    toka = new kerros;
    kolmas = new kerros;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();

}

double Kerrostalo::laskeKulutus(double)
{
    double tulos = eka->laskeKulutus(1) + toka->laskeKulutus(1) + kolmas->laskeKulutus(1);
    cout<<"Kerrostalon kulutus "<<tulos<<endl;
    return tulos;
}
Kerrostalo::~Kerrostalo() {
    cout<<"Kerrosalo tuhottu"<<endl;
    delete eka;
    delete toka;
    delete kolmas;

}
