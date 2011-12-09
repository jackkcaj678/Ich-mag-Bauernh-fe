#ifndef TIER_H
#define TIER_H

#include "objekt.h"
#include "lager.h"

class Tier : public Objekt
{
public:
    Tier();
    bool istSchlachtBereit(); // kann man Tier schlachten?
    Lagergut schlachten(); // Tier schlachten und resultierende Ware zurückgeben -> reimplementieren!

protected:
    unsigned int LEBENSDAUER; // Wie lange lebt das Tier maximal?
    unsigned int HUNGER_PRO_RUNDE; // Wie viel Hunger kommt pro Runde hinzu?
    unsigned int MAX_HUNGER; // Ab wie viel Hunger stirbt das Tier?
    unsigned int SCHLACHTERZEUGNIS_MENGE; // Wie viel wirft das Tier nach dem Schlachten ab?

    unsigned int aktuellesAlter;
    unsigned int aktuellerHunger;

    bool istAmLeben; // Falls Tier durch Hunger oder Schlachtung gestorben -> false -> wird nach der aktuellen Runde gelöscht
};

#endif // TIER_H
