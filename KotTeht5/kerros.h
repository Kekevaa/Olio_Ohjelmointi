#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

class kerros
{
public:
    kerros();
    ~kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
};

#endif // KERROS_H
