#include "uiwindow.h"
#include "ui_uiwindow.h"

UiWindow::UiWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UiWindow)
{
    ui->setupUi(this);
}

UiWindow::~UiWindow()
{
    delete ui;
}
