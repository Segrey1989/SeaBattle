#ifndef MY_ITEM_H
#define MY_ITEM_H

#include <QtWidgets>
#include <memory>

class Game_state;

enum class Ship_state {empty,black,miss,kill};

class my_item : public QGraphicsRectItem
{
    std::unique_ptr<QBrush> brush;
    bool enable; // кликабельность item
    Ship_state state;
    QPoint index; //храним координаты
    bool is_mine;
    Game_state *game_state;
public:
    explicit my_item(QGraphicsItem *parent = nullptr);
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);

public:
    void setGameState(Game_state *state);
    void set_index(const QPoint & i);
    void setIs_mine(bool);
    QPoint get_index();
    ~my_item();
};

#endif // MY_ITEM_H
