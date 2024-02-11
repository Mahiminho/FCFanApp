#include "costs.h"
#include "ui_costs.h"
#include <QMessageBox>

Costs::Costs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Costs)
{
    ui->setupUi(this);
}

Costs::~Costs()
{
    delete ui;
}



void Costs::on_pushButton_back_clicked()
{
    this->close();
    emit eighth();
}

void Costs::on_pushButton_result_clicked()
{
    int league = 0, position = 0;

    if (ui->radioButton_epl->isChecked()) {
        league = 7;
    } else if (ui->radioButton_laliga->isChecked()) {
        league = 6;
    } else if (ui->radioButton_seriaa->isChecked()) {
        league = 5;
    } else if (ui->radioButton_bundesliga->isChecked()) {
        league = 4;
    } else if (ui->radioButton_liga1->isChecked()) {
        league = 3;
    } else if (ui->radioButton_another->isChecked()) {
        league = 2;
    }

    if (ui->radioButton_frw->isChecked()) {
        position = 5;
    } else if (ui->radioButton_mdf->isChecked()) {
        position = 4;
    } else if (ui->radioButton_def->isChecked()) {
        position = 3;
    } else if (ui->radioButton_gk->isChecked()) {
        position = 2;
    }

    long long age = (ui->lineEdit_age->text()).toDouble();
    long long pric = (ui->lineEdit_price->text()).toDouble();
    long long prices = league * position * (40 - age) * 100000;
    if(pric > prices)
    {
        QString res = QString("%1%2%3%4%5").arg("Player price: ").arg(pric).arg("\nCalculate price: ").arg(QString::number(prices)).arg("\n\nUnprofitable purchase.");
        QMessageBox::information(this, "Result", res);
    }
    else
    {
        QString res = QString("%1%2%3%4%5").arg("Player price: ").arg(pric).arg("\nCalculate price: ").arg(QString::number(prices)).arg("\n\nProfitable purchase.");
        QMessageBox::information(this, "Result", res);
    }
}

void Costs::on_pushButton_res_clicked()
{
    long long sum = 0;
    long long salar = (ui->lineEdit_salaryplayers->text()).toDouble();
    long long personal = (ui->lineEdit_salarypersonal->text()).toDouble();
    long long stadium = (ui->lineEdit_stadiumprice->text()).toDouble();
    long long transfers = (ui->lineEdit_transfers->text()).toDouble();
    long long transport = (ui->lineEdit_transport->text()).toDouble();
    sum = salar + personal + stadium + transfers + transport;
    QString resit = QString::number(sum, 'g', 10);
    ui->label_resultat->setText(resit);
}
