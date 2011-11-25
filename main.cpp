#include <QtGui/QApplication>
#include "uiwindow.h"

#include "test.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //UiWindow w;
    //w.show();

    Test test;
    test.testLager();

    return 0;
    //return a.exec();
}
