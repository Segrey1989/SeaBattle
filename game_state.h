#ifndef GAME_STATE_H
#define GAME_STATE_H
#include <QMap>
#include<QSet>
#include <QVector>
#include "my_item.h"
enum class Ships_types {biggest, bigger, big, small,nulik};



class Game_state
{

public:
    QMap<Ships_types, int> ship_sizes={{Ships_types::small,1},
                                       {Ships_types::big,2},
                                       {Ships_types::bigger,3},
                                       {Ships_types::biggest,4}};

    QMap<Ships_types, int> ships_max_count={{Ships_types::small,4},
                                       {Ships_types::big,3},
                                       {Ships_types::bigger,2},
                                       {Ships_types::biggest,1}};

    int count_chunk=0;

    Ships_types selected_ship=Ships_types::nulik;
    QVector<QPoint> avaible;
    QVector<QPoint> choice;
    Game_state();
    void count_selected();


};


#endif // GAME_STATE_H
