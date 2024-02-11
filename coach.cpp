#include "coach.h"
#include "ui_coach.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

Coach::Coach(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Coach)
{
    ui->setupUi(this);
}

Coach::~Coach()
{
    delete ui;
}

void Coach::on_pushButton_clicked()
{
    QMessageBox::information(this, "Assistants to the head coach", "Davide Ancelotti\n\nFrancesco Mauri");
}

void Coach::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Goalkeeper coach", "Luis Llopis");
}

void Coach::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "Fitness trainers", "Antonio Pintus\n\nBeniamino Fulco");
}

void Coach::on_pushButton_5_clicked()
{
    QMessageBox::information(this, "Technical analyst", "Simone Montanaro");
}

void Coach::on_pushButton_7_clicked()
{
    QMessageBox::information(this, "Physiotherapist", "José Carlos G. Parrales");
}

void Coach::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Club career", "Period\t\tClub\t\tMatches(goals)\n\n"
                                                  "1976-1979\tParma\t\t55(13)\n"
                                                  "1979-1987\tRoma\t\t171(12)\n"
                                                  "1987-1992\tMilan\t\t112(10)\n\n\n"
                                                  "Total:\n"
                                                  "1976-1992\t\t\t338(35)");
}

void Coach::on_pushButton_6_clicked()
{
    QMessageBox::information(this, "Coaching career", "Period\t\tClub\n\n"
                                                      "1995-1996\tRajana\n"
                                                      "1996-1998\tParma\n"
                                                      "1999-2001\tJuventus\n"
                                                      "2001-2009\tMilan\n"
                                                      "2009-2011\tChelsea\n"
                                                      "2011-2013\tPSG\n"
                                                      "2013-2015\tReal Madrid\n"
                                                      "2016-2017\tBayern Munchen\n"
                                                      "2018-2019\tNapoli\n"
                                                      "2019-2021\tEverton\n"
                                                      "2021-o.t.\t\tReal Madrid");
}

void Coach::on_pushButton_8_clicked()
{
    QUrl me("https://en.wikipedia.org/wiki/Carlo_Ancelotti");
    QDesktopServices::openUrl(me);
}

void Coach::on_pushButton_9_clicked()
{
    this->close();
    emit third();
}
