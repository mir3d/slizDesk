#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class CConfig;
class CPlate;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAdd_triggered();

private:
    Ui::MainWindow *ui;

    CConfig *m_conf;
    CPlate *m_plate;
};

#endif // MAINWINDOW_H
