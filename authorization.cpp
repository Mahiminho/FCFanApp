#include "authorization.h"
#include "ui_authorization.h"
#include <QMessageBox>

Authorization::Authorization(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    fin = new Finances();
    connect(fin, &Finances::seventh, this, &Authorization::show);
}

Authorization::~Authorization()
{
    delete ui;
}


void Authorization::on_pushButton_clicked()
{
    this->close();
    emit sixth();
}

void Authorization::on_pushButton_next_clicked()
{
    if(ui->lineEdit_login->text() == "admin" && ui->lineEdit_pass->text() == "pass1234")
    {
        ui->lineEdit_login->clear();
        ui->lineEdit_pass->clear();
        this->close();
        fin->show();
    }
    else
    {
        QMessageBox::critical(this, "Error!", "Incorrect password or login! If you are an administrator, please try again.");
    }
}
