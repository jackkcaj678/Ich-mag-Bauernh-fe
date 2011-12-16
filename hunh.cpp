#include "hunh.h"

Huhn::Huhn()
{
    // LEBENSDAUER = ?;
    // MAX_HUNGER = ?;
    // HUNGER_PRO_RUNDE = ?
    // SCHLACHTERZEUGNIS_MENGE = ?

    // BASIS_EINKAUFSPREIS = ?
    // BASIS_VERKAUFSPREIS = ?
}

bool Huhn::neueRunde()
{
    aktuellesAlter++; // Alter erhöhen

    aktuellerHunger += HUNGER_PRO_RUNDE; // Hunger erhöhen
    if(aktuellerHunger > MAX_HUNGER) istAmLeben = false; // Tier stirbt, falls es zu viel Hunger hatte

    return true;
}

Lagergut Huhn::schlachten()
{
    if(istSchlachtBereit())
    {
        istAmLeben = false; // tot..

        Lagergut tmp;
        tmp.anzahl = SCHLACHTERZEUGNIS_MENGE;
        tmp.gut = Lager::huehnchenfleisch;

        return tmp;
    }

    // Nicht schlachtbereit -> 0 Hühnchenfleisch zurückgeben
    Lagergut tmp;
    tmp.anzahl = 0;
    tmp.gut = Lager::huehnchenfleisch;
    return tmp;
}
