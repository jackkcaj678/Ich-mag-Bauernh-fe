#include "test.h"

Test::Test()
{
}

void Test::testLager()
{
    Lager testlager;
    qDebug() << "10 | " << testlager.lagerBestand() << '\n';
    qDebug() << "11 | "<< testlager.einAuslagern(false, Lager::eier, 3) << '\n';
    qDebug() << "12 | "<< testlager.lagerBestand() << '\n';
}
