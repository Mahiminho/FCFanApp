#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    team = new Team_Composition();
    connect(team, &Team_Composition::first, this, &MainWindow::show);
    autor = new Authorization();
    connect(autor, &Authorization::sixth, this, &MainWindow::show);
    stad = new Stadium();
    connect(stad, &Stadium::tenth, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_squad_clicked()
{
    hide();
    //team = new Team_Composition(this);
    team->show();
}

void MainWindow::on_quit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_finance_clicked()
{
    this->close();
    autor->show();
}

void MainWindow::on_equipment_clicked()
{
    this->close();
    stad->show();
}
