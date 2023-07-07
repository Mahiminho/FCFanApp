#include "leadership.h"
#include "ui_leadership.h"
#include <QDesktopServices>
#include <QUrl>

Leadership::Leadership(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Leadership)
{
    ui->setupUi(this);
}

Leadership::~Leadership()
{
    delete ui;
}

void Leadership::on_pushButton_2_clicked()
{
    QUrl my("https://uk.wikipedia.org/wiki/%D0%A4%D0%BB%D0%BE%D1%80%D0%B5%D0%BD%D1%82%D1%96%D0%BD%D0%BE_%D0%9F%D0%B5%D1%80%D0%B5%D1%81");
    QDesktopServices::openUrl(my);
}

void Leadership::on_pushButton_clicked()
{
    this->close();
    emit second();
}
