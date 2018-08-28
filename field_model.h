#ifndef FIELD_MODEL_H
#define FIELD_MODEL_H
#include <QtWidgets>
#include <memory>
#include "my_item.h"
#include "game_state.h"
#include <QVector>
#include <vector>

class field_model
{
    std::unique_ptr<my_item *[]> my_data;
    std::unique_ptr<my_item *[]> enemy_data;
    bool isBlockedMine;
     bool isBlockedEnemy;
public:
    field_model(QGraphicsScene *scene, Game_state &gameState);
    ~field_model();
    void update(my_item *);
   // void ship_fil();
};

#endif // FIELD_MODEL_H
