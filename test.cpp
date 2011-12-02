#include "test.h"

Test::Test()
{
}

void Test::testLager()
{
    Lager testlager;
    qDebug() << "10 | " << testlager.lagerBestand() << '\n';
    qDebug() << "11 | "<< testlager.einAuslagern(Lager::eier, -3) << '\n';
    qDebug() << "12 | "<< testlager.einAuslagern(Lager::wolle,-3) << '\n';
    qDebug() << "13 | "<< testlager.einAuslagern(Lager::rindfleisch, -3) << '\n';
    qDebug() << "14 | "<< testlager.einAuslagern(Lager::milch, -5) << '\n';
    qDebug() << "15 | "<< testlager.einAuslagern(Lager::leder, 7) << '\n';
    qDebug() << "16 | "<< testlager.einAuslagern(Lager::heu, -3) << '\n';
    qDebug() << "17 | "<< testlager.einAuslagern(Lager::aepfel, -3) << '\n';
    qDebug() << "18 | "<< testlager.einAuslagern(Lager::kartoffeln, -3) << '\n';
    qDebug() << "19 | "<< testlager.einAuslagern(Lager::tomaten, -3) << '\n';
    qDebug() << "20 | "<< testlager.einAuslagern(Lager::huehnchenfleisch, -3) << '\n';
    qDebug() << "21 | "<< testlager.einAuslagern(Lager::milch, 20) << '\n';
    qDebug() << "22 | "<< testlager.gesammtLager() << '\n';
    qDebug() << "23 | "<< testlager.lagerBestand() << '\n';
    qDebug() << "24 | "<< testlager.objektBestand(Lager::eier) << '\n';
    qDebug() << "25 | "<< testlager.objektBestand(Lager::wolle) << '\n';
    qDebug() << "26 | "<< testlager.objektBestand(Lager::rindfleisch) << '\n';
    qDebug() << "27 | "<< testlager.objektBestand(Lager::milch) << '\n';
    qDebug() << "28 | "<< testlager.objektBestand(Lager::leder) << '\n';
    qDebug() << "29 | "<< testlager.objektBestand(Lager::heu) << '\n';
    qDebug() << "30 | "<< testlager.objektBestand(Lager::aepfel) << '\n';
    qDebug() << "31 | "<< testlager.objektBestand(Lager::kartoffeln) << '\n';
    qDebug() << "32 | "<< testlager.objektBestand(Lager::tomaten) << '\n';
    qDebug() << "33 | "<< testlager.objektBestand(Lager::huehnchenfleisch) << '\n';
}
