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

private:
    Ui::UiWindow *ui;
};

#endif // UIWINDOW_H
