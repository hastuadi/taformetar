#include "metar.h"

wind::wind()
{
    valid = false;
}

void wind::translate(string input)
{
    if(input.length() > 2)
    {
        if(StringComparation(input.substr(input.length()-2),"KT"))
        {
            valid = true;
        }
    }
}

Metar::Metar()
{
}
