#ifndef STADIUM_H
#define STADIUM_H

#include <QMainWindow>

namespace Ui {
class Stadium;
}

class Stadium : public QMainWindow
{
    Q_OBJECT

public:
    explicit Stadium(QWidget *parent = nullptr);
    ~Stadium();

private:
    Ui::Stadium *ui;
signals:
    void tenth();
private slots:

    void on_pushButton_clicked();
    void on_pushButton_stadionsite_clicked();
    void on_pushButton_resultt_clicked();
};

#endif // STADIUM_H
