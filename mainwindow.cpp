#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    model.reset(new field_model(scene, game_state));

    four = new QPushButton("Four");
    scene->addWidget(four);
    three = new QPushButton("Three");
    scene->addWidget(three);
    two = new QPushButton("Two");
    scene->addWidget(two);
    one = new QPushButton("One");
    scene->addWidget(one);


    four->setGeometry(-25, 50, 60,10);
    three->setGeometry(-25, 20, 60,10);
    two->setGeometry(-25, -10, 60,10);
    one->setGeometry(-25, -40, 60,10);

    connect(four, SIGNAL(clicked()), this, SLOT([this](){
        install_ship(Ships_types::biggest);
    }));
    connect(three, SIGNAL(clicked()), this, SLOT([this](){
        install_ship(Ships_types::bigger);
    }));
    connect(two, SIGNAL(clicked()), this,SLOT([this](){
        install_ship(Ships_types::big);
    }));
    connect(one, SIGNAL(clicked()), this, SLOT([this](){
        install_ship(Ships_types::small);
    }));

}

MainWindow::~MainWindow()
{
    delete ui;
}

 void MainWindow::install_ship(Ships_types a)
 {
    switch(a){
        case Ships_types::biggest:
            game_state.selected_ship = Ships_types::biggest; break;
//     case biggest:f_1(),f_2(),f_3(),f_4();break;
//     case bigger:f_1(),f_2(),f_3();break;
//     case big:f_1(),f_2();break;
//     case small:f_1();break;
     }

}

