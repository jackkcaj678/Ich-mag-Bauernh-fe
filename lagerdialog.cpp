#include "lagerdialog.h"
#include "ui_lagerdialog.h"

LagerDialog::LagerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LagerDialog)
{
    ui->setupUi(this);
}

LagerDialog::~LagerDialog()
{
    delete ui;
}
