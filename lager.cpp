#include "lager.h"



Lager::Lager()
{
v_eier =0;
v_wolle =0;
v_rindfleisch =0;
v_milch =0;
v_leder =0;
v_heu =0;
v_aepfel =0;
v_kartoffeln =0;
v_tomaten =0;
v_huehnchenfleisch =0;

}

QString Lager::lagerBestand()
{
    QString tmp;
    tmp += "Eier: " + QString::number (v_eier);
    tmp += "\nWolle: " + QString::number (v_wolle);
    tmp += "\nRindfleisch: " + QString::number (v_rindfleisch);
    tmp += "\nMilch: "  + QString::number (v_milch);
    tmp += "\nLeder: " + QString::number (v_leder);
    tmp += "\nHeu: " + QString::number (v_heu);
    tmp += "\nÄpfel: " + QString::number (v_aepfel);
    tmp += "\nKartoffeln: " + QString::number (v_kartoffeln);
    tmp += "\nTomaten: " + QString::number (v_tomaten);
    tmp += "\nHühnchenfleisch: " + QString::number (v_huehnchenfleisch);
     return tmp;
}

unsigned long Lager::objektBestand(ware objekt)
{
    if (objekt == eier){
        return v_eier;
    }
    else if (objekt == wolle){
        return v_wolle;
    }
     else if (objekt == rindfleisch){
        return v_rindfleisch;
    }
     else if (objekt == milch){
        return v_milch;
    }
     else if (objekt == leder){
        return v_leder;
    }
     else if (objekt == heu){
        return v_heu;
    }
     else if (objekt == aepfel){
        return v_aepfel;
    }
     else if (objekt == kartoffeln){
        return v_kartoffeln;
    }
     else if (objekt == tomaten){
        return v_tomaten;
    }
     else if (objekt == huehnchenfleisch){
        return v_huehnchenfleisch;
    }
    else {
        return 0;
    }

}

bool Lager::einAuslagern(bool einAus, ware objekt, unsigned long anzahl)
{
    if (objekt == eier){
        if (einAus){
            v_eier += anzahl;
            return true;
        }
        else {
            if (anzahl<v_eier){
                v_eier -= anzahl;
                return true;
            }
            else{
                return false;
            }
        }
    }
    else if (objekt == wolle){
        if (einAus){
            v_wolle += anzahl;
            return true;
        }
        else {
            v_wolle -= anzahl;
            if (anzahl<v_wolle){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == rindfleisch){
        if (einAus){
            v_rindfleisch += anzahl;
            return true;
        }
        else {
            v_rindfleisch -= anzahl;
            if (anzahl<v_rindfleisch){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == milch){
        if (einAus){
            v_milch += anzahl;
            return true;
        }
        else {
            v_milch -= anzahl;
            if (anzahl<v_milch){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == leder){
        if (einAus){
            v_leder += anzahl;
            return true;
        }
        else {
            v_leder -= anzahl;
            if (anzahl<v_leder){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == heu){
        if (einAus){
            v_heu += anzahl;
            return true;
        }
        else {
            v_heu -= anzahl;
            if (anzahl<v_heu){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == aepfel){
        if (einAus){
            v_aepfel += anzahl;
            return true;
        }
        else {
            v_aepfel -= anzahl;
            if (anzahl<v_aepfel){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == kartoffeln){
        if (einAus){
            v_kartoffeln += anzahl;
            return true;
        }
        else {
            v_kartoffeln -= anzahl;
            if (anzahl<v_kartoffeln){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == tomaten){
        if (einAus){
            v_tomaten += anzahl;
            return true;
        }
        else {
            v_tomaten -= anzahl;
            if (anzahl<v_tomaten){
                return false;
            }
            else{
                return false;
            }
        }
    }
     else if (objekt == huehnchenfleisch){
        if (einAus){
            v_huehnchenfleisch += anzahl;
            return true;
        }
        else {
            v_huehnchenfleisch -= anzahl;
            if (anzahl<v_huehnchenfleisch){
                return false;
            }
            else{
                return false;
            }
        }
    }
    else {
        return false;
    }
}



