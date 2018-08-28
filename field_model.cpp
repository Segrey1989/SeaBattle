#include "field_model.h"

field_model::field_model(QGraphicsScene * scene, Game_state &gameState)
{
    int w{30};
    my_data.reset(new my_item* [10]);
    enemy_data.reset(new my_item* [10]);
    isBlockedMine = false;
    isBlockedEnemy = true;

    for (int i = 0; i < 10; ++i){
        my_data[i] = new my_item[10];
        enemy_data[i] = new my_item[10];
    }
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            my_data[i][j].setRect(-350+(i*w),150-(j*w),w,w);
            my_data[i][j].set_index(QPoint(i,j));
            my_data[i][j].setIs_mine(true);
            my_data[i][j].setGameState(&gameState);

            enemy_data[i][j].setRect(50+(i*w),150-(j*w),w,w);
            enemy_data[i][j].set_index(QPoint(i,j));
            enemy_data[i][j].setIs_mine(false);
            enemy_data[i][j].setGameState(&gameState);

            scene->addItem(&my_data[i][j]);
            scene->addItem(&enemy_data[i][j]);
        }
    }

}

field_model::~field_model()
{
}

void field_model::update(my_item * obj)
{
    //network.send_data(obj->network_data());

   // obj->set_state(...);

}

