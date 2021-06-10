#include <stdlib.h>
#include <cstring>
#include "placenamegenerator.h"

std::string getPlaceName()
{
    std::string finishedName = "";
    char c;
    int pd = 0, i;

    if (rand() % 100 > 40)
    {
        finishedName += doubles[rand() % DOUBLESCOUNT];
        if (rand() % 100 > 60)
        {
            finishedName += postdoubles[rand() % POSTDOUBLESCOUNT];
            pd++;
        } else
            finishedName[strlen(finishedName.c_str()) - 1] = '\0';
    } else
        finishedName += first[rand() % FIRSTCOUNT];

    c = finishedName[strlen(finishedName.c_str()) - 1];

    if (rand() % 100 > 50 and not pd)
    {
        if (c == 'r' or c == 'b')
        {
            if (rand() % 100 > 40)
                finishedName += "ble";
            else
                finishedName += "gle";
        } else if (c == 'n' or c == 'd')
            finishedName == "dle";
        else if (c == 's')
            finishedName += "tle";
    }

    c = finishedName[strlen(finishedName.c_str()) - 1];

    if (rand() % 100 > 70 and c == 'e')
        if (finishedName[strlen(finishedName.c_str()) - 2] == 'l')
            finishedName += "s";
    else if (rand() % 100 > 50)
    {
        if (c == 'n')
        {
            if (rand() % 100 > 50)
                finishedName += "s";
            else 
                finishedName += "d";
        } else if (c == 'm')
            finishedName += "s";
    }

    if (rand() % 100 > 70)
        finishedName += mid[rand() % MIDCOUNT];
    finishedName += last[rand() % LASTCOUNT];

    for (i = finishedName.length() - 1; i >= 0; i--)
    {
        if (finishedName[i] == ' ')
        {
            finishedName[i + 1] = toupper(finishedName[i + 1]);
        }
    }

    for (i = finishedName.length() - 1; i >= 0; i--)
    {
        if (finishedName[i] == '-')
        {
            finishedName[i + 1] = toupper(finishedName[i + 1]);
        }
    }

    return finishedName;
}