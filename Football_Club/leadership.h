#ifndef LEADERSHIP_H
#define LEADERSHIP_H

#include <QMainWindow>



namespace Ui {
class Leadership;
}

class Leadership : public QMainWindow
{
    Q_OBJECT

public:
    explicit Leadership(QWidget *parent = nullptr);
    ~Leadership();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Leadership *ui;
signals:
    void second();


};

#endif // LEADERSHIP_H
