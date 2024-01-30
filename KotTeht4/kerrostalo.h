#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);

private:
    Katutaso eka;
    kerros toka;
    kerros kolmas;
};

#endif // KERROSTALO_H
