#ifndef TIER_H
#define TIER_H
#include "objekt.H"
class Tier : public Objekt
{
public:
    Tier();
    unsigned int akutellesAlter();
private:
    unsigned int lebensDauer;
    unsigned int lebensAlter;
    bool schlachtBereit;
    unsigned int hunger;

};

#endif // TIER_H
