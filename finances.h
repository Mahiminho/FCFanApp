#ifndef FINANCES_H
#define FINANCES_H

#include <QMainWindow>
#include "costs.h"
#include "profit.h"

namespace Ui {
class Finances;
}

class Finances : public QMainWindow
{
    Q_OBJECT

public:
    explicit Finances(QWidget *parent = nullptr);
    ~Finances();

private:
    Ui::Finances *ui;
    Costs *cos;
    Profit *pro;
signals:
    void fifth();
private slots:

    void on_back_clicked();

    void on_costs_clicked();

    void on_profit_clicked();

signals:
    void seventh();
};

#endif // FINANCES_H
