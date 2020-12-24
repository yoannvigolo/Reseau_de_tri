#include "secondfen.h"
#include "ui_secondfen.h"

secondFen::secondFen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secondFen)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("programing.png"));
    setWindowTitle("Information reseau de tri");
    setWindowModality(Qt::ApplicationModal);
}

secondFen::~secondFen()
{
    delete ui;
}

void secondFen::on_pushButtonEnSavoir_clicked()
{
    QDesktopServices::openUrl(QUrl("https://fr.wikipedia.org/wiki/R%C3%A9seau_de_tri"));
}
