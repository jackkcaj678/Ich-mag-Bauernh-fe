#ifndef LAGER_H
#define LAGER_H
#include "QString"

class Lager
{
public:
    Lager();
    enum ware {eier, wolle, rindfleisch, milch, leder, heu, aepfel, kartoffeln, tomaten, huehnchenfleisch};
    QString lagerBestand();
    unsigned long objektBestand(ware objekt);
    bool einAuslagern(ware objekt, long anzahl);
    unsigned long gesammtLager();

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

#endif // LAGER_H
