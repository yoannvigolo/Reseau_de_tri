#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mascene.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QComboBox>
#include <QMovie>
#include <QGraphicsProxyWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    inline static QList<int> listeNombreNonTrie;
    inline static QList<QString> listColor;

    void setListNonTrie(int Nb1, int Nb2, int Nb3, int NB4);

    void setListColor(QString color, int pos);

    void setDefaultListColor();



private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    MaScene* m_lineScene;
    QList<int> TriageValeur(int Nb1, int Nb2, int Nb3, int Nb4 );
    QList<int> m_NbList;
};
#endif // MAINWINDOW_H
