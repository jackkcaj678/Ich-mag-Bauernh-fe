#include <QtGui/QApplication>
#include "uiwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UiWindow w;
    w.show();

    //return 0;
    return a.exec();
}
