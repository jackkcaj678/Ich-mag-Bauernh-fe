#include "tier.h"

Tier::Tier()
{
lebensDauer = 0;
lebensAlter = 0;
hunger = 0;
}
bool Tier::schlachtBereit(){
    if (lebnesAlter>=lebensDauer){
        sclachtBereit = true;
        return true;
    }
    return false;

}


