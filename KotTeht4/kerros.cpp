#include "kerros.h"
#include <iostream>
using namespace std;
kerros::kerros() {
    cout<<"Kerros luotu"<<endl;
}

void kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl katutason asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double kerros::laskeKulutus(double hinta)
{
    double tulo = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + as3.laskeKulutus(hinta) + as4.laskeKulutus(hinta);
    cout<<"kerrosten kulutus kun hinta="<<hinta<<" on "<<tulo<<endl;
    return tulo;
}
