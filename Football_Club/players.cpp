#include "players.h"
#include "ui_players.h"
#include <QListWidget>
#include <QUrl>
#include <QMessageBox>
#include <QDesktopServices>
#include <QStringList>


Players::Players(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Players)
{
    ui->setupUi(this);
    QListWidgetItem *Benzema = new QListWidgetItem("Benzema");
    ui->listWidget->addItem(Benzema);
    QListWidgetItem *Rodrygo = new QListWidgetItem("Rodrygo");
    ui->listWidget->addItem(Rodrygo);
    QListWidgetItem *Vinicius = new QListWidgetItem("Vinicius");
    ui->listWidget->addItem(Vinicius);
    QListWidgetItem *Hazard = new QListWidgetItem("Hazard");
    ui->listWidget->addItem(Hazard);
    QListWidgetItem *Bale = new QListWidgetItem("Bale");
    ui->listWidget->addItem(Bale);
    QListWidgetItem *Isco = new QListWidgetItem("Isco");
    ui->listWidget->addItem(Isco);
    QListWidgetItem *Kroos = new QListWidgetItem("Kroos");
    ui->listWidget->addItem(Kroos);
    QListWidgetItem *Casemiro = new QListWidgetItem("Casemiro");
    ui->listWidget->addItem(Casemiro);
    QListWidgetItem *Valverde = new QListWidgetItem("Valverde");
    ui->listWidget->addItem(Valverde);
    QListWidgetItem *Camavinga = new QListWidgetItem("Camavinga");
    ui->listWidget->addItem(Camavinga);
    QListWidgetItem *Modric = new QListWidgetItem("Modric");
    ui->listWidget->addItem(Modric);
    QListWidgetItem *Alaba = new QListWidgetItem("Alaba");
    ui->listWidget->addItem(Alaba);
    QListWidgetItem *Carvajal = new QListWidgetItem("Carvajal");
    ui->listWidget->addItem(Carvajal);
    QListWidgetItem *Mendy = new QListWidgetItem("Mendy");
    ui->listWidget->addItem(Mendy);
    QListWidgetItem *Marcelo = new QListWidgetItem("Marcelo");
    ui->listWidget->addItem(Marcelo);
    QListWidgetItem *Nacho = new QListWidgetItem("Nacho");
    ui->listWidget->addItem(Nacho);
    QListWidgetItem *Courtois = new QListWidgetItem("Courtois");
    ui->listWidget->addItem(Courtois);

}

Players::~Players()
{
    delete ui;
}

void Players::on_pushButton_3_clicked()
{
    this->close();
    emit fourth();
}

void Players::on_site_button_clicked()
{
    if(ui->listWidget->currentItem()->text() == "Benzema")
    {
        QUrl my("https://de.wikipedia.org/wiki/Karim_Benzema");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Rodrygo")
    {
        QUrl my("https://de.wikipedia.org/wiki/Rodrygo");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Vinicius")
    {
        QUrl my("https://de.wikipedia.org/wiki/Vin%C3%ADcius_J%C3%BAnior");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Hazard")
    {
        QUrl my("https://de.wikipedia.org/wiki/Eden_Hazard");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Bale")
    {
        QUrl my("https://de.wikipedia.org/wiki/Gareth_Bale");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Isco")
    {
        QUrl my("https://de.wikipedia.org/wiki/Isco");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Kroos")
    {
        QUrl my("https://de.wikipedia.org/wiki/Toni_Kroos");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Casemiro")
    {
        QUrl my("https://de.wikipedia.org/wiki/Casemiro");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Valverde")
    {
        QUrl my("https://de.wikipedia.org/wiki/Federico_Valverde");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Camavinga")
    {
        QUrl my("https://de.wikipedia.org/wiki/Eduardo_Camavinga");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Modric")
    {
        QUrl my("https://de.wikipedia.org/wiki/Luka_Modri%C4%87");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Alaba")
    {
        QUrl my("https://de.wikipedia.org/wiki/David_Alaba");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Carvajal")
    {
        QUrl my("https://de.wikipedia.org/wiki/Dani_Carvajal");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Mendy")
    {
        QUrl my("https://de.wikipedia.org/wiki/Ferland_Mendy");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Marcelo")
    {
        QUrl my("https://de.wikipedia.org/wiki/Marcelo_(Fu%C3%9Fballspieler,_1988)");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Nacho")
    {
        QUrl my("https://de.wikipedia.org/wiki/Nacho_(Fu%C3%9Fballspieler,_1990)");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Courtois")
    {
        QUrl my("https://de.wikipedia.org/wiki/Thibaut_Courtois");
        QDesktopServices::openUrl(my);
    }

}

void Players::on_info_button_clicked()
{
    if(ui->listWidget->currentItem()->text() == "Benzema")
    {
        QMessageBox::information(this, "Benzema", "Ім'я: Karim Mostafa Benzema\n"
                                                  "Дата народження: 19 березня 1987 р.\n"
                                                  "Ріст: 185 см.\n"
                                                  "Національність: француз \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: нападаючий \n"
                                                  "Трансферна вартість: 26 млн. \n"
                                                  "Номер: 9");
    }
    else if(ui->listWidget->currentItem()->text() == "Rodrygo")
    {
        QMessageBox::information(this, "Rodrygo", "Ім'я: Rodrygo Silva de Goes\n"
                                                  "Дата народження: 9 січня 2001 р.\n"
                                                  "Ріст: 174 см.\n"
                                                  "Національність: бразилець \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: нападаючий \n"
                                                  "Трансферна вартість: 40 млн. \n"
                                                  "Номер: 21");
    }
    else if(ui->listWidget->currentItem()->text() == "Vinicius")
    {
        QMessageBox::information(this, "Vinicius", "Ім'я: Vinícius José Paixão de Oliveira Júnior\n"
                                                  "Дата народження: 12 липня 2000 р.\n"
                                                  "Ріст: 176 см.\n"
                                                  "Національність: бразилець \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: нападаючий \n"
                                                  "Трансферна вартість: 100 млн. \n"
                                                  "Номер: 20");
    }
    else if(ui->listWidget->currentItem()->text() == "Hazard")
    {
        QMessageBox::information(this, "Hazard", "Ім'я: Eden Michael Hazard\n"
                                                  "Дата народження: 7 січня 1991 р.\n"
                                                  "Ріст: 175 см.\n"
                                                  "Національність: бельгієць \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: нападаючий \n"
                                                  "Трансферна вартість: 16 млн. \n"
                                                  "Номер: 7");
    }
    else if(ui->listWidget->currentItem()->text() == "Bale")
    {
        QMessageBox::information(this, "Bale", "Ім'я: Gareth Frank Bale\n"
                                                  "Дата народження: 16 липня 1989 р.\n"
                                                  "Ріст: 185 см.\n"
                                                  "Національність: уельсець \n"
                                                  "Робоча нога: ліва \n"
                                                  "Позиція: нападаючий \n"
                                                  "Трансферна вартість: 3 млн. \n"
                                                  "Номер: 18");
    }
    else if(ui->listWidget->currentItem()->text() == "Isco")
    {
        QMessageBox::information(this, "Isco", "Ім'я: Francisco Román Alarcón Suárez\n"
                                                  "Дата народження: 21 квітня 1992 р.\n"
                                                  "Ріст: 176 см.\n"
                                                  "Національність: іспанець \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: півзахисник \n"
                                                  "Трансферна вартість: 7.5 млн. \n"
                                                  "Номер: 22");
    }
    else if(ui->listWidget->currentItem()->text() == "Kroos")
    {
        QMessageBox::information(this, "Kroos", "Ім'я: Toni Kroos\n"
                                                  "Дата народження: 4 січня 1990 р.\n"
                                                  "Ріст: 183 см.\n"
                                                  "Національність: німець \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: півзахисник \n"
                                                  "Трансферна вартість: 27 млн. \n"
                                                  "Номер: 8");
    }
    else if(ui->listWidget->currentItem()->text() == "Casemiro")
    {
        QMessageBox::information(this, "Casemiro", "Ім'я: Carlos Henrique José Francisco Venancio Casimiro\n"
                                                  "Дата народження: 23 лютого 1992 р.\n"
                                                  "Ріст: 185 см.\n"
                                                  "Національність: бразилець \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: півзахисник \n"
                                                  "Трансферна вартість: 50 млн. \n"
                                                  "Номер: 14");
    }
    else if(ui->listWidget->currentItem()->text() == "Valverde")
    {
        QMessageBox::information(this, "Valverde", "Ім'я: Federico Santiago Valverde Dipetta\n"
                                                  "Дата народження: 22 липня 1998 р.\n"
                                                  "Ріст: 182 см.\n"
                                                  "Національність: уругваєць \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: півзахисник \n"
                                                  "Трансферна вартість: 65 млн. \n"
                                                  "Номер: 15");
    }
    else if(ui->listWidget->currentItem()->text() == "Camavinga")
    {
        QMessageBox::information(this, "Camavinga", "Ім'я: Eduardo Celmi Camavinga\n"
                                                  "Дата народження: 10 листопада 2022 р.\n"
                                                  "Ріст: 182 см.\n"
                                                  "Національність: француз \n"
                                                  "Робоча нога: ліва \n"
                                                  "Позиція: півзахисник \n"
                                                  "Трансферна вартість: 55 млн. \n"
                                                  "Номер: 25");
    }
    else if(ui->listWidget->currentItem()->text() == "Modric")
    {
        QMessageBox::information(this, "Modric", "Ім'я: Luka Modrić\n"
                                                  "Дата народження: 9 вересня 1985 р.\n"
                                                  "Ріст: 172 см.\n"
                                                  "Національність: хорват \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: півзахисник \n"
                                                  "Трансферна вартість: 10 млн. \n"
                                                  "Номер: 10");
    }
    else if(ui->listWidget->currentItem()->text() == "Alaba")
    {
        QMessageBox::information(this, "Alaba", "Ім'я: David Olatukunbo Alaba\n"
                                                  "Дата народження: 24 червня 1992 р.\n"
                                                  "Ріст: 180 см.\n"
                                                  "Національність: австрієць \n"
                                                  "Робоча нога: ліва \n"
                                                  "Позиція: захисник \n"
                                                  "Трансферна вартість: 55 млн. \n"
                                                  "Номер: 4");
    }
    else if(ui->listWidget->currentItem()->text() == "Carvajal")
    {
        QMessageBox::information(this, "Carvajal", "Ім'я: Daniel Carvajal Ramos\n"
                                                  "Дата народження: 11 січня 1992 р.\n"
                                                  "Ріст: 173 см.\n"
                                                  "Національність: іспанець \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: захисник \n"
                                                  "Трансферна вартість: 18 млн. \n"
                                                  "Номер: 2");
    }
    else if(ui->listWidget->currentItem()->text() == "Mendy")
    {
        QMessageBox::information(this, "Mendy", "Ім'я: Ferland Sinna Mendy\n"
                                                  "Дата народження: 8 червня 1995 р.\n"
                                                  "Ріст: 180 см.\n"
                                                  "Національність: француз \n"
                                                  "Робоча нога: ліва \n"
                                                  "Позиція: захисник \n"
                                                  "Трансферна вартість: 50 млн. \n"
                                                  "Номер: 23");
    }
    else if(ui->listWidget->currentItem()->text() == "Marcelo")
    {
        QMessageBox::information(this, "Marcelo", "Ім'я: Marcelo Vieira da Silva Júnior\n"
                                                  "Дата народження: 12 травня 1988 р.\n"
                                                  "Ріст: 174 см.\n"
                                                  "Національність: бразилець \n"
                                                  "Робоча нога: ліва \n"
                                                  "Позиція: захисник \n"
                                                  "Трансферна вартість: 3 млн. \n"
                                                  "Номер: 12");
    }
    else if(ui->listWidget->currentItem()->text() == "Nacho")
    {
        QMessageBox::information(this, "Nacho", "Ім'я: José Ignacio Fernández Iglesias\n"
                                                  "Дата народження: 18 січня 1990 р.\n"
                                                  "Ріст: 180 см.\n"
                                                  "Національність: іспанець \n"
                                                  "Робоча нога: права \n"
                                                  "Позиція: захисник \n"
                                                  "Трансферна вартість: 7 млн. \n"
                                                  "Номер: 6");
    }
    else if(ui->listWidget->currentItem()->text() == "Courtois")
    {
        QMessageBox::information(this, "Courtois", "Ім'я: Thibaut Nicolas Marc Courtois\n"
                                                  "Дата народження: 11 травня 1992 р.\n"
                                                  "Ріст: 200 см.\n"
                                                  "Національність: бельгієць \n"
                                                  "Робоча нога: ліва \n"
                                                  "Позиція: воротар \n"
                                                  "Трансферна вартість: 65 млн. \n"
                                                  "Номер: 1");
    }

}









void Players::on_filtr_button_clicked()
{
    //QStringList names = {"Benzema", "Rodrygo", "Vinicius", "Hazard", "Bale", "Isco", "Kroos", "Casemiro",
                         //"Valverde", "Camavinga", "Modric", "Alaba", "Carvajal", "Mendy", "Marcelo", "Nacho", "Courtois"};

    QStringList positions = {"FRW", "FRW", "FRW", "FRW", "FRW", "MDF", "MDF", "MDF",
                             "MDF", "MDF", "MDF", "DEF", "DEF", "DEF", "DEF", "DEF", "GK"};

    int years[] = {34, 21, 21, 31, 32, 30, 32, 30,
                  23, 19, 36, 29, 30, 26, 34, 32, 30};

    double prices[] = {26, 40, 100, 16, 3, 7.5, 24, 50,
                      65, 55, 10, 55, 18, 50, 3, 7, 65};

    //if(ui->listWidget->currentItem()->text() == "Benzema")
       //ui->listWidget->currentItem()->setBackgroundColor("red");



    if(ui->forward_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "FRW")
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
    if(ui->mdf_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "MDF")
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
    if(ui->def_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "DEF")
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
    if(ui->gk_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "GK")
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
    if(ui->plus30_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(years[i] >= 30)
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
    if(ui->minus30_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(years[i] < 30)
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
    if(ui->plus25_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(prices[i] >= 25)
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
    if(ui->minus25_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(prices[i] < 25)
            {
                ui->listWidget->item(i)->setBackgroundColor("red");
            }
        }
    }
}

void Players::on_clear_clicked()
{
    for (int i = 0; i < ui->listWidget->count(); i++)
    {
       ui->listWidget->item(i)->setBackgroundColor("white");
    }
}
