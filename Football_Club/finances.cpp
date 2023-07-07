#include "finances.h"
#include "ui_finances.h"

Finances::Finances(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Finances)
{
    ui->setupUi(this);
    cos = new Costs();
    connect(cos, &Costs::eighth, this, &Finances::show);
    pro = new Profit();
    connect(pro, &Profit::ninth, this, &Finances::show);
}

Finances::~Finances()
{
    delete ui;
}


void Finances::on_back_clicked()
{
    this->close();
    emit seventh();
}

void Finances::on_costs_clicked()
{
    this->close();
    cos->show();
}

void Finances::on_profit_clicked()
{
    this->close();
    pro->show();
}
