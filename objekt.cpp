#include "objekt.h"

Objekt::Objekt()
{
einkaufspreis = 0;
verkaufspreis = 0;
}
double Objekt::neueRunde(){

}

bool Objekt::einkaufPreisSetzen(double neuerEinkaufsPreis)
{
    einkaufspreis = neuerEinkaufsPreis;
    return true;
}
double Objekt::einkaufsPreisAbrufen(){
    return einkaufspreis;
}

bool Objekt::verkaufPreisSetzen(double neuerVerkaufsPreis){
    verkaufspreis = neuerVerkaufsPreis;
    return true;
}
double Objekt::verkaufsPreisAbrufen(){
     return verkaufspreis;

 }

