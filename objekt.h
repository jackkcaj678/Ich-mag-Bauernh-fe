#ifndef OBJEKT_H
#define OBJEKT_H

class Objekt
{
public:
    Objekt();

    bool neueRunde(); // In untersten Subklassen reimplementieren!

    double einkaufsPreis();
    double verkaufsPreis();

protected:
    double BASIS_EINKAUFSPREIS;
    double BASIS_VERKAUFSPREIS;
};

#endif // OBJEKT_H
