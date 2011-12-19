#ifndef LAGERDIALOG_H
#define LAGERDIALOG_H

#include <QDialog>

namespace Ui {
    class LagerDialog;
}

class LagerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LagerDialog(QWidget *parent = 0);
    ~LagerDialog();

private:
    Ui::LagerDialog *ui;
};

#endif // LAGERDIALOG_H
