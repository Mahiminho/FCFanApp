#ifndef TEAM_COMPOSITION_H
#define TEAM_COMPOSITION_H

#include <QMainWindow>
#include "leadership.h"
#include "coach.h"
#include "players.h"


namespace Ui {
class Team_Composition;
}

class Team_Composition : public QMainWindow
{
    Q_OBJECT

public:
    explicit Team_Composition(QWidget *parent = nullptr);
    ~Team_Composition();

private slots:
    void on_pushButton_director_clicked();
    void on_pushButton_coach_clicked();
    void on_pushButton_back_clicked();

    void on_pushButton_players_clicked();

private:
    Ui::Team_Composition *ui;
    Leadership *lead;
    Coach *coa;
    Players *play;
signals:
    void first();

};

#endif // TEAM_COMPOSITION_H
