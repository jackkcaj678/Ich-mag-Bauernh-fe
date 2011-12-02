#include "aktionendialog.h"
#include "ui_aktionendialog.h"

AktionenDialog::AktionenDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AktionenDialog)
{
    ui->setupUi(this);
}

AktionenDialog::~AktionenDialog()
{
    delete ui;
}

void AktionenDialog::on_oeffnen_clicked()
{

}

void AktionenDialog::on_schliesen_clicked()
{

}
