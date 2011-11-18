#ifndef TIER_H
#define TIER_H
#include "objekt.H"
class Tier : public Objekt
{
public:
    Tier();
    bool istSchlachtBereit();
    unsigned int akutellesAlter();
private:
    unsigned int lebensDauer;
    unsigned int lebensAlter;
    unsigned int schlachtBereit;
    unsigned int hunger;

};

#endif // TIER_H
