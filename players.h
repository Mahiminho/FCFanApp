#ifndef PLAYERS_H
#define PLAYERS_H

#include <QMainWindow>

namespace Ui {
class Players;
}

class Players : public QMainWindow
{
    Q_OBJECT

public:
    explicit Players(QWidget *parent = nullptr);
    ~Players();

private:
    Ui::Players *ui;
signals:
    void fourth();
private slots:
    void on_pushButton_3_clicked();
    void on_site_button_clicked();
    void on_info_button_clicked();
    void on_filtr_button_clicked();
    void on_clear_clicked();
};

#endif // PLAYERS_H
