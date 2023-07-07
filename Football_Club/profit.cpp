#include "profit.h"
#include "ui_profit.h"

Profit::Profit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profit)
{
    ui->setupUi(this);
}

Profit::~Profit()
{
    delete ui;
}



void Profit::on_pushButton_back_clicked()
{
    this->close();
    emit ninth();
}

void Profit::on_pushButton_res_clicked()
{
    double sum = 0;

    if(ui->checkBox_samsung->isChecked())
    {
        sum += 2000000;
    }
    if(ui->checkBox_adidas->isChecked())
    {
        sum += 7500000;
    }
    if(ui->checkBox_nike->isChecked())
    {
        sum += 10000000;
    }
    if(ui->checkBox_puma->isChecked())
    {
        sum += 4500000;
    }
    if(ui->checkBox_spotify->isChecked())
    {
        sum += 500000;
    }
    if(ui->checkBox_chevrolet->isChecked())
    {
        sum += 1300000;
    }
    if(ui->checkBox_toyota->isChecked())
    {
        sum += 1200000;
    }
    if(ui->checkBox_flyemirates->isChecked())
    {
        sum += 6600000;
    }
    if(ui->checkBox_parimatch->isChecked())
    {
        sum += 3300000;
    }
    if(ui->checkBox_huawei->isChecked())
    {
        sum += 1000000;
    }
    if(ui->checkBox_xiaomi->isChecked())
    {
        sum += 800000;
    }
    if(ui->checkBox_newbalance->isChecked())
    {
        sum += 4000000;
    }
    if(ui->checkBox_mcdonnalds->isChecked())
    {
        sum += 1100000;
    }
    if(ui->checkBox_cocacola->isChecked())
    {
        sum += 630000;
    }
    if(ui->checkBox_visa->isChecked())
    {
        sum += 2100000;
    }

    double numf = (ui->lineEdit_numfotballs->text()).toDouble();
    double pricef = (ui->lineEdit_pricefootballs->text()).toDouble();
    double matches = (ui->lineEdit_matches->text()).toDouble();
    double numplaces = (ui->lineEdit_numplaces->text()).toDouble();
    double ticket = (ui->lineEdit_priceticket->text()).toDouble();

    double items = numf * pricef + matches * numplaces * ticket;

    double resi = sum + items;

    QString resit = QString::number(resi, 'g', 10);
    ui->label_result->setText(resit);
}


























