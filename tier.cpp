#include "tier.h"

Tier::Tier()
{
    LEBENSDAUER = 0;
    HUNGER_PRO_RUNDE = 0;
    MAX_HUNGER = 0;
    SCHLACHTERZEUGNIS_MENGE = 0;

    aktuellesAlter = 0;
    aktuellerHunger = 0;

    istAmLeben = true;
}

bool Tier::istSchlachtBereit()
{
    if (aktuellesAlter>=LEBENSDAUER) return true;
    return false;
}

Lagergut Tier::schlachten()
{
    Lagergut tmp;
    tmp.anzahl = 0;

    return tmp;
}
