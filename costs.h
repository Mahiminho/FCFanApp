#ifndef COSTS_H
#define COSTS_H

#include <QMainWindow>

namespace Ui {
class Costs;
}

class Costs : public QMainWindow
{
    Q_OBJECT

public:
    explicit Costs(QWidget *parent = nullptr);
    ~Costs();

private:
    Ui::Costs *ui;
signals:
    void eighth();
private slots:

    void on_pushButton_back_clicked();
    void on_pushButton_result_clicked();
    void on_pushButton_res_clicked();
};

#endif // COSTS_H
