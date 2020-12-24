#include "mascene.h"
#include "mainwindow.h"

MaScene::MaScene(QObject *parent)
    :   QGraphicsScene(parent)
{
    // Initialisation couleur
    QPen black;
    black.setColor(Qt::black);
    black.setWidth(3);

    //Première Ligne
    addLine(-200, 0, -50, 0,changeColor(MainWindow::listColor.value(0)));
    addLine(-200, 100, 50, 100,changeColor(MainWindow::listColor.value(1)));
    addLine(-200, 200, -50, 200, changeColor(MainWindow::listColor.value(2)));
    addLine(-200, 300, 50, 300, changeColor(MainWindow::listColor.value(3)));

    if(MainWindow::listeNombreNonTrie.value(0) > MainWindow::listeNombreNonTrie.value(2))
    {
        addLine(-50, 0, -50, 200,changeColor(MainWindow::listColor.value(0)));
        addLine(-50, 200, 200, 200,changeColor(MainWindow::listColor.value(0)));
        addLine(-53, 0, -53, 200,changeColor(MainWindow::listColor.value(2)));
        addLine(-50, 0, 200, 0,changeColor(MainWindow::listColor.value(2)));
        MainWindow::listeNombreNonTrie.swap(0,2);
        MainWindow::listColor.swap(0,2);
    }

    else
    {
        addLine(-50, 0, -50, 200,black);
        addLine(-50, 0, 200, 0,changeColor(MainWindow::listColor.value(0)));
        addLine(-50, 200, 200, 200,changeColor(MainWindow::listColor.value(2)));
    }

    if(MainWindow::listeNombreNonTrie.value(1) > MainWindow::listeNombreNonTrie.value(3))
    {
        addLine(50, 100, 50, 300,changeColor(MainWindow::listColor.value(1)));
        addLine(50, 300, 200, 300, changeColor(MainWindow::listColor.value(1)));
        addLine(53, 100, 53, 300,changeColor(MainWindow::listColor.value(3)));
        addLine(50, 100, 200, 100,changeColor(MainWindow::listColor.value(3)));
        MainWindow::listeNombreNonTrie.swap(1,3);
        MainWindow::listColor.swap(1,3);

    }

    else
    {
        addLine(50, 100, 50, 300,black);
        addLine(50, 300, 200, 300, changeColor(MainWindow::listColor.value(3)));
        addLine(50, 100, 200, 100,changeColor(MainWindow::listColor.value(1)));
    }

    if(MainWindow::listeNombreNonTrie.value(0) > MainWindow::listeNombreNonTrie.value(1))
    {
        addLine(200, 0, 200, 100,changeColor(MainWindow::listColor.value(0)));
        addLine(200, 100, 300, 100,changeColor(MainWindow::listColor.value(0)));
        addLine(197, 0, 197, 100,changeColor(MainWindow::listColor.value(1)));
        addLine(200, 0, 350, 0,changeColor(MainWindow::listColor.value(1)));
        MainWindow::listeNombreNonTrie.swap(0,1);
        MainWindow::listColor.swap(0,1);
    }

    else
    {
        addLine(200, 0, 200, 100,black);
        addLine(200, 100, 300, 100,changeColor(MainWindow::listColor.value(1)));
        addLine(200, 0, 350, 0,changeColor(MainWindow::listColor.value(0)));
    }

    if(MainWindow::listeNombreNonTrie.value(2) > MainWindow::listeNombreNonTrie.value(3))
    {
        addLine(200, 200, 200, 300,changeColor(MainWindow::listColor.value(2)));
        addLine(200, 300, 350, 300,changeColor(MainWindow::listColor.value(2)));
        addLine(197, 200, 197, 300,changeColor(MainWindow::listColor.value(3)));
        addLine(200, 200, 300, 200,changeColor(MainWindow::listColor.value(3)));
        MainWindow::listeNombreNonTrie.swap(2,3);
        MainWindow::listColor.swap(2,3);
    }
    else
    {
        addLine(200, 200, 200, 300,black);
        addLine(200, 300, 350, 300,changeColor(MainWindow::listColor.value(3)));
        addLine(200, 200, 300, 200,changeColor(MainWindow::listColor.value(2)));
    }

    if(MainWindow::listeNombreNonTrie.value(1) > MainWindow::listeNombreNonTrie.value(2))
    {
        addLine(300, 100, 300, 200,changeColor(MainWindow::listColor.value(1)));
        addLine(300, 200, 350, 200,changeColor(MainWindow::listColor.value(1)));
        addLine(297, 100, 297, 200,changeColor(MainWindow::listColor.value(2)));
        addLine(300, 100, 350, 100,changeColor(MainWindow::listColor.value(2)));
        MainWindow::listeNombreNonTrie.swap(1,2);
        MainWindow::listColor.swap(1,2);
    }

    else
    {
        addLine(300, 100, 300, 200,black);
        addLine(300, 200, 350, 200,changeColor(MainWindow::listColor.value(2)));
        addLine(300, 100, 350, 100,changeColor(MainWindow::listColor.value(1)));
    }

    addRect(-56,-6,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(-56,194,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(46,96,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(46,296,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));

    addRect(194,-4,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(194,96,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(194,196,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(194,296,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(294,196,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
    addRect(294,96,12,12,QPen(Qt::black), QBrush(Qt::SolidPattern));
}


MaScene::~MaScene()
{

}

void MaScene::setListNonTrie(QList<int> list)
{
    m_ListNonTrie = list;
}

QPen MaScene::changeColor(QString color)
{
    QPen pen;
    pen.setWidth(3);

    if(color == "Noir"){
        pen.setColor(Qt::black);
    }
    if(color == "Rouge"){
        pen.setColor(Qt::red);
    }
    if(color == "Vert"){
        pen.setColor(Qt::green);
    }
    if(color == "Bleu"){
        pen.setColor(Qt::blue);
    }
    else if(color == "Jaune"){
        pen.setColor(Qt::yellow);
    }
    return  pen;
}
