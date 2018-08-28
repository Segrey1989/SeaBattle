#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "field_model.h"
#include <memory>
#include "game_state.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
   Game_state game_state;

    QGraphicsScene * scene;
    QPushButton *four;
     QPushButton *three;
      QPushButton *two;
       QPushButton *one;

    std::unique_ptr<field_model> model;
public:
    //Game_state game_state;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

     void install_ship(Ships_types i);
};

//void ship_but_click(){

//}

#endif // MAINWINDOW_H
