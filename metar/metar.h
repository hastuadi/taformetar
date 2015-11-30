#ifndef METAR_H
#define METAR_H

#include "../MyFunctions.h"

class wind
{
public:
    wind();
    void translate(string input);
    bool valid;
};

class Metar
{
public:
    Metar();
};

#endif // METAR_H
