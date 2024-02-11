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
        QUrl my("https://en.wikipedia.org/wiki/Karim_Benzema");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Rodrygo")
    {
        QUrl my("https://en.wikipedia.org/wiki/Rodrygo");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Vinicius")
    {
        QUrl my("https://en.wikipedia.org/wiki/Vin%C3%ADcius_J%C3%BAnior");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Hazard")
    {
        QUrl my("https://en.wikipedia.org/wiki/Eden_Hazard");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Bale")
    {
        QUrl my("https://en.wikipedia.org/wiki/Gareth_Bale");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Isco")
    {
        QUrl my("https://en.wikipedia.org/wiki/Isco");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Kroos")
    {
        QUrl my("https://en.wikipedia.org/wiki/Toni_Kroos");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Casemiro")
    {
        QUrl my("https://en.wikipedia.org/wiki/Casemiro");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Valverde")
    {
        QUrl my("https://en.wikipedia.org/wiki/Federico_Valverde");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Camavinga")
    {
        QUrl my("https://en.wikipedia.org/wiki/Eduardo_Camavinga");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Modric")
    {
        QUrl my("https://en.wikipedia.org/wiki/Luka_Modri%C4%87");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Alaba")
    {
        QUrl my("https://en.wikipedia.org/wiki/David_Alaba");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Carvajal")
    {
        QUrl my("https://en.wikipedia.org/wiki/Dani_Carvajal");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Mendy")
    {
        QUrl my("https://en.wikipedia.org/wiki/Ferland_Mendy");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Marcelo")
    {
        QUrl my("https://en.wikipedia.org/wiki/Marcelo_(Fu%C3%9Fballspieler,_1988)");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Nacho")
    {
        QUrl my("https://en.wikipedia.org/wiki/Nacho_(Fu%C3%9Fballspieler,_1990)");
        QDesktopServices::openUrl(my);
    }
    else if(ui->listWidget->currentItem()->text() == "Courtois")
    {
        QUrl my("https://en.wikipedia.org/wiki/Thibaut_Courtois");
        QDesktopServices::openUrl(my);
    }

}

void Players::on_info_button_clicked()
{
    if(ui->listWidget->currentItem()->text() == "Benzema")
    {
        QMessageBox::information(this, "Benzema", "Name: Karim Mostafa Benzema\n"
                                                  "Date of birth: 19.03.1987\n"
                                                  "Growth: 185 cm.\n"
                                                  "Nationality: French\n"
                                                  "Work foot: right\n"
                                                  "Position: forward\n"
                                                  "Transfer value: 26 m.\n"
                                                  "Number: 9");
    }
    else if(ui->listWidget->currentItem()->text() == "Rodrygo")
    {
        QMessageBox::information(this, "Rodrygo", "Name: Rodrygo Silva de Goes\n"
                                                  "Date of birth: 09.01.2001\n"
                                                  "Growth: 174 cm.\n"
                                                  "Nationality: Brazilian\n"
                                                  "Work foot: right\n"
                                                  "Position: forward\n"
                                                  "Transfer value: 40 m.\n"
                                                  "Number: 21");
    }
    else if(ui->listWidget->currentItem()->text() == "Vinicius")
    {
        QMessageBox::information(this, "Vinicius", "Name: Vinícius José Paixão de Oliveira Júnior\n"
                                                   "Date of birth: 12.07.2000\n"
                                                   "Growth: 176 cm.\n"
                                                   "Nationality: Brazilian\n"
                                                   "Work foot: right\n"
                                                   "Position: forward\n"
                                                   "Transfer value: 100 m.\n"
                                                   "Number: 20");
    }
    else if(ui->listWidget->currentItem()->text() == "Hazard")
    {
        QMessageBox::information(this, "Hazard", "Name: Eden Michael Hazard\n"
                                                 "Date of birth: 07.01.1991\n"
                                                 "Growth: 175 cm.\n"
                                                 "Nationality: Belgian\n"
                                                 "Work foot: right\n"
                                                 "Position: forward\n"
                                                 "Transfer value: 16 m.\n"
                                                 "Number: 7");
    }
    else if(ui->listWidget->currentItem()->text() == "Bale")
    {
        QMessageBox::information(this, "Bale", "Name: Gareth Frank Bale\n"
                                               "Date of birth: 16.07.1989\n"
                                               "Growth: 185 cm.\n"
                                               "Nationality: Wales\n"
                                               "Work foot: left\n"
                                               "Position: forward\n"
                                               "Transfer value: 3 m.\n"
                                               "Number: 18");
    }
    else if(ui->listWidget->currentItem()->text() == "Isco")
    {
        QMessageBox::information(this, "Isco", "Name: Francisco Román Alarcón Suárez\n"
                                               "Date of birth: 21.04.1992\n"
                                               "Growth: 176 cm.\n"
                                               "Nationality: Spanish\n"
                                               "Work foot: right\n"
                                               "Position: midfielder\n"
                                               "Transfer value: 7.5 m.\n"
                                               "Number: 22");
    }
    else if(ui->listWidget->currentItem()->text() == "Kroos")
    {
        QMessageBox::information(this, "Kroos", "Name: Toni Kroos\n"
                                                "Date of birth: 04.01.1990\n"
                                                "Growth: 183 cm.\n"
                                                "Nationality: Gernman\n"
                                                "Work foot: right\n"
                                                "Position: midfielder\n"
                                                "Transfer value: 27 m.\n"
                                                "Number: 8");
    }
    else if(ui->listWidget->currentItem()->text() == "Casemiro")
    {
        QMessageBox::information(this, "Casemiro", "Name: Carlos Henrique José Francisco Venancio Casimiro\n"
                                                   "Date of birth: 23.02.1992\n"
                                                   "Growth: 185 cm.\n"
                                                   "Nationality: Brazilian\n"
                                                   "Work foot: right\n"
                                                   "Position: midfielder\n"
                                                   "Transfer value: 50 m.\n"
                                                   "Number: 14");
    }
    else if(ui->listWidget->currentItem()->text() == "Valverde")
    {
        QMessageBox::information(this, "Valverde", "Name: Federico Santiago Valverde Dipetta\n"
                                                   "Date of birth: 22.07.1998\n"
                                                   "Growth: 182 cm.\n"
                                                   "Nationality: Uruguayan\n"
                                                   "Work foot: right\n"
                                                   "Position: midfielder\n"
                                                   "Transfer value: 65 m.\n"
                                                   "Number: 15");
    }
    else if(ui->listWidget->currentItem()->text() == "Camavinga")
    {
        QMessageBox::information(this, "Camavinga", "Name: Eduardo Celmi Camavinga\n"
                                                    "Date of birth: 10.11.2002\n"
                                                    "Growth: 182 cm.\n"
                                                    "Nationality: French\n"
                                                    "Work foot: left\n"
                                                    "Position: midfielder\n"
                                                    "Transfer value: 55 m.\n"
                                                    "Number: 25");
    }
    else if(ui->listWidget->currentItem()->text() == "Modric")
    {
        QMessageBox::information(this, "Modric", "Name: Luka Modrić\n"
                                                 "Date of birth: 09.09.1985\n"
                                                 "Growth: 172 cm.\n"
                                                 "Nationality: Croatian\n"
                                                 "Work foot: right\n"
                                                 "Position: midfielder\n"
                                                 "Transfer value: 10 m.\n"
                                                 "Number: 10");
    }
    else if(ui->listWidget->currentItem()->text() == "Alaba")
    {
        QMessageBox::information(this, "Alaba", "Ім'я: David Olatukunbo Alaba\n"
                                                "Date of birth: 24.06.1992\n"
                                                "Growth: 180 cm.\n"
                                                "Nationality: Austrian\n"
                                                "Work foot: left\n"
                                                "Position: defender\n"
                                                "Transfer value: 55 m.\n"
                                                "Number: 4");
    }
    else if(ui->listWidget->currentItem()->text() == "Carvajal")
    {
        QMessageBox::information(this, "Carvajal", "Ім'я: Daniel Carvajal Ramos\n"
                                                   "Date of birth: 11.01.1992\n"
                                                   "Growth: 173 cm.\n"
                                                   "Nationality: Spanish\n"
                                                   "Work foot: right\n"
                                                   "Position: defender\n"
                                                   "Transfer value: 18 m.\n"
                                                   "Number: 2");
    }
    else if(ui->listWidget->currentItem()->text() == "Mendy")
    {
        QMessageBox::information(this, "Mendy", "Name: Ferland Sinna Mendy\n"
                                                "Date of birth: 08.06.1995\n"
                                                "Growth: 180 cm.\n"
                                                "Nationality: French\n"
                                                "Work foot: left\n"
                                                "Position: defender\n"
                                                "Transfer value: 50 m.\n"
                                                "Number: 23");
    }
    else if(ui->listWidget->currentItem()->text() == "Marcelo")
    {
        QMessageBox::information(this, "Marcelo", "Name: Marcelo Vieira da Silva Júnior\n"
                                                  "Date of birth: 12.05.1988\n"
                                                  "Growth: 174 cm.\n"
                                                  "Nationality: Brazilian\n"
                                                  "Work foot: left\n"
                                                  "Position: defender\n"
                                                  "Transfer value: 3 m.\n"
                                                  "Number: 12");
    }
    else if(ui->listWidget->currentItem()->text() == "Nacho")
    {
        QMessageBox::information(this, "Nacho", "Name: José Ignacio Fernández Iglesias\n"
                                                "Date of birth: 18.01.1990\n"
                                                "Growth: 180 cm.\n"
                                                "Nationality: Spanish\n"
                                                "Work foot: right\n"
                                                "Position: defender\n"
                                                "Transfer value: 7 m.\n"
                                                "Number: 6");
    }
    else if(ui->listWidget->currentItem()->text() == "Courtois")
    {
        QMessageBox::information(this, "Courtois", "Name: Thibaut Nicolas Marc Courtois\n"
                                                   "Date of birth: 11.05.1992\n"
                                                   "Growth: 200 cm.\n"
                                                   "Nationality: Belgian\n"
                                                   "work foot: left\n"
                                                   "Position: goalkeeper\n"
                                                   "Transfer value: 65 m.\n"
                                                   "Number: 1");
    }

}



void Players::on_filtr_button_clicked()
{
    QStringList positions = {"FRW", "FRW", "FRW", "FRW", "FRW", "MDF", "MDF", "MDF",
                             "MDF", "MDF", "MDF", "DEF", "DEF", "DEF", "DEF", "DEF", "GK"};

    int years[] = {34, 21, 21, 31, 32, 30, 32, 30,
                  23, 19, 36, 29, 30, 26, 34, 32, 30};

    double prices[] = {26, 40, 100, 16, 3, 7.5, 24, 50,
                      65, 55, 10, 55, 18, 50, 3, 7, 65};

    if(ui->forward_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "FRW")
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
            }
        }
    }
    if(ui->mdf_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "MDF")
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
            }
        }
    }
    if(ui->def_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "DEF")
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
            }
        }
    }
    if(ui->gk_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(positions[i] == "GK")
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
            }
        }
    }
    if(ui->plus30_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(years[i] >= 30)
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
            }
        }
    }
    if(ui->minus30_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(years[i] < 30)
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
            }
        }
    }
    if(ui->plus25_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(prices[i] >= 25)
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
            }
        }
    }
    if(ui->minus25_box->isChecked())
    {
        for (int i = 0; i < ui->listWidget->count(); i++)
        {
            if(prices[i] < 25)
            {
                ui->listWidget->item(i)->setBackgroundColor("yellow");
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
