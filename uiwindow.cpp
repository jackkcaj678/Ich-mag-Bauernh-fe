#include "uiwindow.h"
#include "ui_uiwindow.h"
#include "lager.h"
#include "lagerdialog.h"

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

void UiWindow::on_actionAktionen_2_triggered()
{
}

void UiWindow::on_pushButton_clicked()
{
    LagerDialog* lagerdialog = new LagerDialog(this);
    lagerdialog->show();
}
