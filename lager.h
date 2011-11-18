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
    bool einAuslagern(bool einAus, ware objekt, unsigned long anzahl);

private:
    unsigned long v_eier;
    unsigned long v_wolle;
    unsigned long v_rindfleisch;
    unsigned long v_milch;
    unsigned long v_leder;
    unsigned long v_heu;
    unsigned long v_aepfel;
    unsigned long v_kartoffeln;
    unsigned long v_tomaten;
    unsigned long v_huehnchenfleisch;

};

#endif // LAGER_H
