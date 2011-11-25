#ifndef OBJEKT_H
#define OBJEKT_H

class Objekt
{
public:
    Objekt();
    double neueRunde();
    bool einkaufPreisSetzen(double neuerEinkaufsPreis);
    double einkaufsPreisAbrufen();
    bool verkaufpreisSetzen(double neuerVerkaufsPreis);
    double verkaufsPreisAbrufen();
private:
    double einkaufspreis;
    double verkaufspreis;
};

#endif // OBJEKT_H
