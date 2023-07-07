#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QMainWindow>
#include <finances.h>

namespace Ui {
class Authorization;
}

class Authorization : public QMainWindow
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();

private:
    Ui::Authorization *ui;
    Finances *fin;
signals:
    void sixth();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_next_clicked();
};

#endif // AUTHORIZATION_H
