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
    QMessageBox::information(this, "Асистенти головного тренера", "Davide Ancelotti\n\nFrancesco Mauri");
}

void Coach::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Тренер воротарів", "Luis Llopis");
}

void Coach::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "Тренери по фітнесу", "Antonio Pintus\n\nBeniamino Fulco");
}

void Coach::on_pushButton_5_clicked()
{
    QMessageBox::information(this, "Технічний аналітик", "Simone Montanaro");
}

void Coach::on_pushButton_7_clicked()
{
    QMessageBox::information(this, "Фізіотерапевт", "José Carlos G. Parrales");
}

void Coach::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Клубна кар'єра", "Період       Клуб      Матчі(голи)\n\n"
                                                     "1976-1979   Parma   55(13)\n"
                                                     "1979-1987   Roma    171(12)\n"
                                                     "1987-1992   Milan    112(10)\n\n\n"
                                                     "Усього:\n"
                                                     "1976-1992                   338(35)");
}

void Coach::on_pushButton_6_clicked()
{
    QMessageBox::information(this, "Тренерська кар'єра", "Період       Клуб\n\n"
                                                         "1995-1996   Rajana\n"
                                                         "1996-1998   Parma\n"
                                                         "1999-2001   Juventus\n"
                                                         "2001-2009   Milan\n"
                                                         "2009-2011   Chelsea\n"
                                                         "2011-2013   PSG\n"
                                                         "2013-2015   Real Madrid\n"
                                                         "2016-2017   Bayern Munchen\n"
                                                         "2018-2019   Napoli\n"
                                                         "2019-2021   Everton\n"
                                                         "2021-o.t.     Real Madrid");
}

void Coach::on_pushButton_8_clicked()
{
    QUrl me("https://ru.wikipedia.org/wiki/%D0%90%D0%BD%D1%87%D0%B5%D0%BB%D0%BE%D1%82%D1%82%D0%B8,_%D0%9A%D0%B0%D1%80%D0%BB%D0%BE");
    QDesktopServices::openUrl(me);
}

void Coach::on_pushButton_9_clicked()
{
    this->close();
    emit third();
}
