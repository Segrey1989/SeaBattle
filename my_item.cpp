#include "my_item.h"
#include "game_state.h"

my_item::my_item(QGraphicsItem *parent) : QGraphicsRectItem(parent)
{
    brush.reset(new QBrush(QColor(Qt::white)));
}

void my_item::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (is_mine == true && state==Ship_state::empty){
        game_state->choice.push_back(index);
        state=Ship_state::black;
        brush->setColor(QColor(0,0,0));

    }
    else if (is_mine == true && state==Ship_state::black){
        state=Ship_state::empty;
        brush->setColor(QColor(255,255,255));
    }

    update();
}

void my_item::paint(QPainter *painter,
                    const QStyleOptionGraphicsItem *option,
                    QWidget *widget)
{
    painter->setBrush(*brush);
    painter->drawRect(rect().x(),rect().y(),
                      rect().width(),rect().height());
}

void my_item::set_index(const QPoint &i)
{
    index = i;
}

void my_item::setIs_mine(bool flag)
{
    is_mine = flag;
}

QPoint my_item::get_index()
{
    return index;
}

void my_item::setGameState(Game_state *state)
{
    game_state =  state;
}

my_item::~my_item()
{

}

