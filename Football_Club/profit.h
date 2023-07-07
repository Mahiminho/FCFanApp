#ifndef PROFIT_H
#define PROFIT_H

#include <QMainWindow>

namespace Ui {
class Profit;
}

class Profit : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profit(QWidget *parent = nullptr);
    ~Profit();

private:
    Ui::Profit *ui;
signals:
    void ninth();
private slots:

    void on_pushButton_back_clicked();
    void on_pushButton_res_clicked();
};

#endif // PROFIT_H
