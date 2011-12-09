#ifndef LAGER_H
#define LAGER_H

#include "QString"

struct Lagergut; // Siehe unten

// Klasse Lager
class Lager
{
public:
    Lager();

    enum ware {eier, wolle, rindfleisch, milch, leder, heu, aepfel, kartoffeln, tomaten, huehnchenfleisch};

    QString lagerBestand();
    unsigned long objektBestand(ware objekt);
    unsigned long gesammtLager();

    // Nun getrennte Ein- und Auslagermethoden
    bool einlagern(ware objekt, unsigned long anzahl);
    Lagergut auslagern(ware objekt, unsigned long anzahl);

private:
    long v_eier;
    long v_wolle;
    long v_rindfleisch;
    long v_milch;
    long v_leder;
    long v_heu;
    long v_aepfel;
    long v_kartoffeln;
    long v_tomaten;
    long v_huehnchenfleisch;

};

// Extrastruktur zur Vereinfachung von Handel und Lagerung
struct Lagergut
{
    Lager::ware gut;
    unsigned long anzahl; // Man kann ausschließlich mit einer positiven Anzahl an Gütern handeln
};

#endif // LAGER_H
