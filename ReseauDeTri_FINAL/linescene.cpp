#include "linescene.h"

LineScene::LineScene(QObject *parent)
    :   QGraphicsScene(parent)
{
    // Initialisation couleur
    QPen red;
    red.setColor(Qt::red);
    red.setWidth(3);
    QPen green;
    green.setColor(Qt::green);
    green.setWidth(3);
    QPen blue;
    blue.setColor(Qt::blue);
    blue.setWidth(3);
    QPen yellow;
    yellow.setColor(Qt::yellow);
    yellow.setWidth(3);
    QPen black;
    black.setColor(Qt::black);
    black.setWidth(3);

    m_color.setWidth(3);
    m_color.setColor(Qt::black);

    //Première Ligne
    addLine(-200, 0, -50, 0,m_color);
    addLine(-50, 0, 200, 0,m_color);
    addLine(200, 0, 350, 0,m_color);

    //Seconde Ligne
    addLine(-200, 100, 50, 100,m_color);
    addLine(50, 100, 200, 100,m_color);
    addLine(200, 100, 300, 100,m_color);
    addLine(300, 100, 350, 100,m_color);

    //Troisième Ligne
    addLine(-200, 200, -50, 200, m_color);
    addLine(-50, 200, 200, 200,m_color);
    addLine(200, 200, 300, 200,m_color);
    addLine(300, 200, 350, 200,m_color);

    //Quatrième Ligne
    addLine(-200, 300, 50, 300, m_color);
    addLine(50, 300, 200, 300, m_color);
    addLine(200, 300, 350, 300, m_color);

    //Fils intermédiaires
    addLine(-50, 0, -50, 200,m_color);
    addLine(50, 100, 50, 300,m_color);
    addLine(200, 0, 200, 100,m_color);
    addLine(300, 100, 300, 200,m_color);
    addLine(200, 200, 200, 300,m_color);

}
