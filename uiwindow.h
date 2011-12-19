#ifndef UIWINDOW_H
#define UIWINDOW_H

#include <QMainWindow>

namespace Ui {
    class UiWindow;
}

class UiWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UiWindow(QWidget *parent = 0);
    ~UiWindow();

private slots:
    void on_actionBeenden_triggered();


    void on_actionAktionen_2_triggered();


    void on_pushButton_clicked();

private:
    Ui::UiWindow *ui;
};

#endif // UIWINDOW_H
