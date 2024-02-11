#include "stadium.h"
#include "ui_stadium.h"
#include <QUrl>
#include <QDesktopServices>

Stadium::Stadium(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Stadium)
{
    ui->setupUi(this);
}

Stadium::~Stadium()
{
    delete ui;
}


void Stadium::on_pushButton_clicked()
{
    this->close();
    emit tenth();
}

void Stadium::on_pushButton_stadionsite_clicked()
{
    QUrl my("https://en.wikipedia.org/wiki/Santiago_Bernab%C3%A9u_Stadium");
    QDesktopServices::openUrl(my);
}

void Stadium::on_pushButton_resultt_clicked()
{
    long long sum = 0;
    long long numf = (ui->lineEdit_numfish->text()).toDouble();
    long long pricef = (ui->lineEdit_pricefish->text()).toDouble();
    long long numan = (ui->lineEdit_numman->text()).toDouble();
    long long priceman = (ui->lineEdit_priceman->text()).toDouble();

    if(ui->radioButton_easy->isChecked())
    {
        sum += 300000;
    }
    else if(ui->radioButton_midl->isChecked())
    {
        sum += 500000;
    }
    else if(ui->radioButton_super->isChecked())
    {
        sum += 900000;
    }

    long long tre = numf * pricef + numan * priceman;
    long long res = tre + sum;

    QString resit = QString::number(res, 'g', 10);
    ui->label_res->setText(resit);

}








