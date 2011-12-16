#include "objekt.h"

Objekt::Objekt()
{
    BASIS_EINKAUFSPREIS = 0;
    BASIS_VERKAUFSPREIS = 0;
}

bool Objekt::neueRunde()
{
    return true;
}

double Objekt::einkaufsPreis()
{
    return BASIS_EINKAUFSPREIS;
}

double Objekt::verkaufsPreis()
{
    return BASIS_VERKAUFSPREIS;

}

