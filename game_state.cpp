#include "game_state.h"

Game_state::Game_state()
{

}

void Game_state::count_selected()
{int x=0;
 if (choice.size() == 1)
 {
     QPoint first = choice[0];
     QPoint temp;
     temp.setX(first.x()+1);
     temp.setY(first.y());
     if (temp.x()>=0 && temp.x()<10 && temp.y()>=0 && temp.y()<10)
         avaible.push_back(temp);
     x=1;

     temp.setX(first.x()-1);
     temp.setY(first.y());
     if (temp.x()>=0 && temp.x()<10 && temp.y()>=0 && temp.y()<10)
         avaible.push_back(temp);
     x=1;

     temp.setX(first.x());
     temp.setY(first.y()-1);
     if (temp.x()>=0 && temp.x()<10 && temp.y()>=0 && temp.y()<10)
         avaible.push_back(temp);
     x=2;

     temp.setX(first.x());
     temp.setY(first.y()+1);
     if (temp.x()>=0 && temp.x()<10 && temp.y()>=0 && temp.y()<10)
         avaible.push_back(temp);
     x=2;

 }
 else if (choice.size() == 2)
 {
     if (x=1){

     }

 }

}
