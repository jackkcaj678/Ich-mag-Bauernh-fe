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

bool Lager::einAuslagern(ware objekt, long anzahl)
{
    if (objekt == eier){
        if (v_eier+anzahl<0) return false;

        v_eier += anzahl;
        return true;
    }
    else if (objekt == wolle){
        if (v_wolle+anzahl<0) return false;

        v_wolle += anzahl;
        return true;
    }
    else if (objekt == rindfleisch){
        if (v_rindfleisch+anzahl<0) return false;

        v_rindfleisch += anzahl;
        return true;
    }
    else if (objekt == milch){
        if (v_milch+anzahl<0) return false ;

        v_milch += anzahl;
        return true;
    }
    else if (objekt == leder){
        if (v_leder+anzahl<0) return false ;

        v_leder += anzahl;
        return true;
    }
    else if (objekt == heu){
        if (v_heu+anzahl<0) return false ;

        v_heu += anzahl;
        return true;
    }
    else if (objekt == aepfel){
        if (v_aepfel+anzahl<0) return false ;

        v_aepfel += anzahl;
        return true;
    }
    else if (objekt == kartoffeln){
        if (v_kartoffeln+anzahl<0) return false ;

        v_kartoffeln += anzahl;
        return true;
    }
    else if (objekt == tomaten){
        if (v_tomaten+anzahl<0) return false ;

        v_tomaten += anzahl;
        return true;
    }
    else if (objekt == huehnchenfleisch){
        if (v_huehnchenfleisch+anzahl<0) return false ;

        v_huehnchenfleisch += anzahl;
        return true;
    }
    else {
        return false;
    }

}

unsigned long Lager::gesammtLager(){
    return v_eier+ v_wolle+ v_rindfleisch+ v_milch+ v_leder+ v_heu+ v_aepfel+ v_kartoffeln +v_tomaten+ v_huehnchenfleisch;
}



