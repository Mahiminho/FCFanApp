#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "team_composition.h"
#include "authorization.h"
#include "stadium.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_squad_clicked();
    void on_quit_clicked();

    void on_finance_clicked();

    void on_equipment_clicked();

private:
    Ui::MainWindow *ui;
    Team_Composition *team;
    Authorization *autor;
    Stadium *stad;
};

#endif // MAINWINDOW_H
