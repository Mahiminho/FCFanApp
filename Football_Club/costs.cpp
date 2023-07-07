#include "costs.h"
#include "ui_costs.h"
#include <QMessageBox>

Costs::Costs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Costs)
{
    ui->setupUi(this);
}

Costs::~Costs()
{
    delete ui;
}



void Costs::on_pushButton_back_clicked()
{
    this->close();
    emit eighth();
}

void Costs::on_pushButton_result_clicked()
{
    if(ui->radioButton_epl->isChecked())
    {
        if(ui->radioButton_frw->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 5 * 4 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_mdf->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 5 * 1 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_def->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 5 * 3 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_gk->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 5 * 2 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }
    }

    else if(ui->radioButton_seriaa->isChecked())
    {
        if(ui->radioButton_frw->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 4 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_mdf->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 1 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_def->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 3 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_gk->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 2 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }
    }

    else if(ui->radioButton_laliga->isChecked())
    {
        if(ui->radioButton_frw->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 4 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_mdf->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 1 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_def->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 3 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_gk->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 4 * 2 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }
    }

    else if(ui->radioButton_bundesliga->isChecked())
    {
        if(ui->radioButton_frw->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 3 * 4 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_mdf->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 3 * 1 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_def->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 3 * 3 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_gk->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 3 * 2 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }
    }

    else if(ui->radioButton_liga1->isChecked())
    {
        if(ui->radioButton_frw->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 2 * 4 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_mdf->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 2 * 1 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_def->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 2 * 3 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_gk->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 2 * 2 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }
    }

    else if(ui->radioButton_another->isChecked())
    {
        if(ui->radioButton_frw->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 1 * 4 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_mdf->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 1 * 1 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_def->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 1 * 3 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }

        else if(ui->radioButton_gk->isChecked())
        {
            double age = (ui->lineEdit_age->text()).toDouble();
            double pric = (ui->lineEdit_price->text()).toDouble();
            double prices = 1 * 2 * (40 - age) * 100000;
            if(pric > prices)
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе невигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
            else
            {
                QString res = QString("%1%2%3%4%5").arg("Вартість гравця: ").arg(pric).arg("\nРозумна вартість: ").arg(prices).arg("\n\nЦе вигідна покупка.");
                QMessageBox::information(this, "Результат", res);
            }
        }
    }
}

void Costs::on_pushButton_res_clicked()
{
    double sum = 0;
    double salar = (ui->lineEdit_salaryplayers->text()).toDouble();
    double personal = (ui->lineEdit_salarypersonal->text()).toDouble();
    double stadium = (ui->lineEdit_stadiumprice->text()).toDouble();
    double transfers = (ui->lineEdit_transfers->text()).toDouble();
    double transport = (ui->lineEdit_transport->text()).toDouble();
    sum = salar + personal + stadium + transfers + transport;
    //QString resi = QString("%1").arg(sum);
    QString resit = QString::number(sum, 'g', 10);
    ui->label_resultat->setText(resit);
}
