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
    QUrl my("https://en.wikipedia.org/wiki/Florentino_P%C3%A9rez");
    QDesktopServices::openUrl(my);
}

void Leadership::on_pushButton_clicked()
{
    this->close();
    emit second();
}
