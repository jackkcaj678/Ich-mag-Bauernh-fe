#include "uiwindow.h"
#include "ui_lager.h"
#include "aktionendialog.h"

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

void UiWindow::on_actionBeenden_triggered()
{
    close();
}
