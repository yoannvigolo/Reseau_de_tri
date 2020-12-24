#ifndef SECONDFEN_H
#define SECONDFEN_H

#include <QMainWindow>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class secondFen;
}

class secondFen : public QMainWindow
{
    Q_OBJECT

public:
    explicit secondFen(QWidget *parent = nullptr);
    ~secondFen();

private slots:
    void on_pushButtonEnSavoir_clicked();

private:
    Ui::secondFen *ui;
};

#endif // SECONDFEN_H
