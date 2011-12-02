#ifndef AKTIONENDIALOG_H
#define AKTIONENDIALOG_H

#include <QDialog>
#include <windows.h>
#include <mmsystem.h>

namespace Ui {
    class AktionenDialog;
}

class AktionenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AktionenDialog(QWidget *parent = 0);
    ~AktionenDialog();

private slots:
    void on_oeffnen_clicked();

    void on_schliesen_clicked();

private:
    Ui::AktionenDialog *ui;
};

#endif // AKTIONENDIALOG_H
