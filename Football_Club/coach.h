#ifndef COACH_H
#define COACH_H

#include <QMainWindow>

namespace Ui {
class Coach;
}

class Coach : public QMainWindow
{
    Q_OBJECT

public:
    explicit Coach(QWidget *parent = nullptr);
    ~Coach();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Coach *ui;
signals:
    void third();
};

#endif // COACH_H
