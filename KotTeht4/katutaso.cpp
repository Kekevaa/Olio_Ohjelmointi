#include <iostream>
#include "katutaso.h"
using namespace std;


Katutaso::Katutaso() {
    cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyjä asuntoja"<<endl;
    this->kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{
    double tulos = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + this->kerros::laskeKulutus(1);
    cout<<"Katutason ja perityn kerroksen kulutus kun hinta="<<hinta<<" on "<<tulos<<endl;
    return hinta;
}
