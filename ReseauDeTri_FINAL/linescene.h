#ifndef LINESCENE_H
#define LINESCENE_H

#include <QObject>
#include <QWidget>
#include <QGraphicsScene>
#include <QPainter>
#include "mainwindow.h"

class LineScene : public QGraphicsScene
{
public:
    LineScene(QObject *parent = nullptr);
    ~LineScene();


private:
    QPen m_color;

};

#endif // LINESCENE_H
