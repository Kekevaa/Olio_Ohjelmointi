#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo() {
    cout<<"Kerrosalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double)
{
    double tulos = eka.laskeKulutus(1) + toka.laskeKulutus(1) + kolmas.laskeKulutus(1);
    cout<<"Kerrostalon kulutus "<<tulos<<endl;
    return tulos;
}
