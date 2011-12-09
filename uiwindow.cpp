#include "uiwindow.h"
#include "ui_uiwindow.h"
#include "lager.h"
#include "lagerdialog.h"

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

void UiWindow::on_actionBeenden_triggered()
{
    close();
}

void UiWindow::on_actionAktionen_2_triggered()
{
    AktionenDialog* aktionendialog = new AktionenDialog(this);
    aktionendialog->show();
}

void UiWindow::on_pushButton_clicked()
{
    LagerDialog* lagerdialog = new LagerDialog(this);
    lagerdialog->show();
}
