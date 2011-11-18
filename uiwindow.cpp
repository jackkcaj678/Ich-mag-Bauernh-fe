#include "uiwindow.h"
#include "ui_uiwindow.h"
#include "lager.h"

UiWindow::UiWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UiWindow)
{
    ui->setupUi(this);
    Lager lager1;
    lager1.lagerBestand();
}

UiWindow::~UiWindow()
{
    delete ui;
}
