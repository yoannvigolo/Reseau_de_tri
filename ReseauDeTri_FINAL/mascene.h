#ifndef MASCENE_H
#define MASCENE_H

#include <QObject>
#include <QWidget>
#include <QGraphicsScene>
#include <QPen>
#include <iostream>
#include <QDebug>

using namespace std;

class QGraphicsScene;

class MaScene : public QGraphicsScene
{
public:
    MaScene(QObject *parent = nullptr);
    ~MaScene();

    void setListNonTrie(QList<int> list);

    QPen changeColor(QString color);

private:
    QList<int> m_ListNonTrie;

};

#endif // MASCENE_H
