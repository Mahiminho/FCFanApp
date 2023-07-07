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
    QUrl my("https://ru.wikipedia.org/wiki/%D0%A1%D0%B0%D0%BD%D1%82%D1%8C%D1%8F%D0%B3%D0%BE_%D0%91%D0%B5%D1%80%D0%BD%D0%B0%D0%B1%D0%B5%D1%83_(%D1%81%D1%82%D0%B0%D0%B4%D0%B8%D0%BE%D0%BD)");
    QDesktopServices::openUrl(my);
}

void Stadium::on_pushButton_formasite_clicked()
{
    QUrl my("https://ru.wikipedia.org/wiki/%D0%A0%D0%B5%D0%B0%D0%BB_%D0%9C%D0%B0%D0%B4%D1%80%D0%B8%D0%B4_(%D1%84%D1%83%D1%82%D0%B1%D0%BE%D0%BB%D1%8C%D0%BD%D1%8B%D0%B9_%D0%BA%D0%BB%D1%83%D0%B1)#%D0%A4%D0%BE%D1%80%D0%BC%D0%B0");
    QDesktopServices::openUrl(my);
}

void Stadium::on_pushButton_resultt_clicked()
{
    double sum = 0;
    double numf = (ui->lineEdit_numfish->text()).toDouble();
    double pricef = (ui->lineEdit_pricefish->text()).toDouble();
    double numan = (ui->lineEdit_numman->text()).toDouble();
    double priceman = (ui->lineEdit_priceman->text()).toDouble();

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

    double tre = numf * pricef + numan * priceman;
    double res = tre + sum;

    QString resit = QString::number(res, 'g', 10);
    ui->label_res->setText(resit);

}








