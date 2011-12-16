#include "lager.h"

Lager::Lager()
{
    v_eier = 0;
    v_wolle = 0;
    v_rindfleisch = 0;
    v_milch = 0;
    v_leder = 0;
    v_heu = 0;
    v_aepfel = 0;
    v_kartoffeln = 0;
    v_tomaten = 0;
    v_huehnchenfleisch = 0;

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

bool Lager::einlagern(ware objekt, unsigned long anzahl)
{
    if (objekt == eier) // Eier
    {
        v_eier += anzahl;
    }
    else if (objekt == wolle) // Wolle
    {
        v_wolle += anzahl;
    }
    else if (objekt == rindfleisch) // Rindfleisch
    {
        v_rindfleisch += anzahl;
    }
    else if (objekt == milch) // Milch
    {
        v_milch += anzahl;
    }
    else if (objekt == leder) // Leder
    {
        v_leder += anzahl;
    }
    else if (objekt == heu) // Heu
    {
        v_heu += anzahl;
    }
    else if (objekt == aepfel) // Äpfel
    {
        v_aepfel += anzahl;
    }
    else if (objekt == kartoffeln) // Kartoffeln
    {
        v_kartoffeln += anzahl;
    }
    else if (objekt == tomaten) // Tomaten
    {
        v_tomaten += anzahl;
    }
    else if (objekt == huehnchenfleisch) // Hühnchenfleisch
    {
        v_huehnchenfleisch += anzahl;
    }
    else return false;

    return true;
}

Lagergut Lager::auslagern(ware objekt, unsigned long anzahl)
{
    Lagergut out;
    out.gut = objekt;
    out.anzahl = 0;

    if (objekt == eier) // Eier
    {
        long tmp = v_eier-anzahl;
        if (tmp >= 0)
        {
            v_eier -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == wolle) // Wolle
    {
        long tmp = v_wolle-anzahl;
        if (tmp >= 0)
        {
            v_wolle -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == rindfleisch) // Rindfleisch
    {
        long tmp = v_rindfleisch-anzahl;
        if (tmp >= 0)
        {
            v_rindfleisch -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == milch) // Milch
    {
        long tmp = v_milch-anzahl;
        if (tmp >= 0)
        {
            v_milch -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == leder) // Leder
    {
        long tmp = v_leder-anzahl;
        if (tmp >= 0)
        {
            v_leder -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == heu) // Heu
    {
        long tmp = v_heu-anzahl;
        if (tmp >= 0)
        {
            v_heu -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == aepfel) // Äpfel
    {
        long tmp = v_aepfel-anzahl;
        if (tmp >= 0)
        {
            v_aepfel -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == kartoffeln) // Kartoffeln
    {
        long tmp = v_kartoffeln-anzahl;
        if (tmp >= 0)
        {
            v_kartoffeln -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == tomaten) // Tomaten
    {
        long tmp = v_tomaten-anzahl;
        if (tmp >= 0)
        {
            v_tomaten -= anzahl;
            out.anzahl = anzahl;
        }
    }
    else if (objekt == huehnchenfleisch) // Hühnchenfleisch
    {
        long tmp = v_huehnchenfleisch-anzahl;
        if (tmp >= 0)
        {
            v_huehnchenfleisch -= anzahl;
            out.anzahl = anzahl;
        }
    }

    return out;
}

unsigned long Lager::gesammtLager(){
    return v_eier+ v_wolle+ v_rindfleisch+ v_milch+ v_leder+ v_heu+ v_aepfel+ v_kartoffeln +v_tomaten+ v_huehnchenfleisch;
}



