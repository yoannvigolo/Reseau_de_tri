#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton_3->setCheckable(true);
    ui->pushButton_3->setChecked(false);
    ui->actionChanger_couleurs->setIcon(QIcon("C:/Users/yoann/OneDrive/Documents/qt_projects/ReseauDeTri_FINAL/color.png"));

    ui->comboBox_color1->insertItem(0, "Noir");
    ui->comboBox_color1->insertItem(1,"Rouge");
    ui->comboBox_color1->insertItem(2, "Vert");
    ui->comboBox_color1->insertItem(3, "Bleu");
    ui->comboBox_color1->insertItem(4, "Jaune");

    ui->comboBox_color2->insertItem(0, "Noir");
    ui->comboBox_color2->insertItem(1,"Rouge");
    ui->comboBox_color2->insertItem(2, "Vert");
    ui->comboBox_color2->insertItem(3, "Bleu");
    ui->comboBox_color2->insertItem(4, "Jaune");

    ui->comboBox_color3->insertItem(0, "Noir");
    ui->comboBox_color3->insertItem(1,"Rouge");
    ui->comboBox_color3->insertItem(2, "Vert");
    ui->comboBox_color3->insertItem(3, "Bleu");
    ui->comboBox_color3->insertItem(4, "Jaune");

    ui->comboBox_color4->insertItem(0, "Noir");
    ui->comboBox_color4->insertItem(1,"Rouge");
    ui->comboBox_color4->insertItem(2, "Vert");
    ui->comboBox_color4->insertItem(3, "Bleu");
    ui->comboBox_color4->insertItem(4, "Jaune");

    setDefaultListColor();

    setWindowIcon(QIcon("programing.png"));
    setWindowTitle("Reseau de Tri");

}

MainWindow::~MainWindow()
{
    delete ui;
}

QList<int> MainWindow::TriageValeur(int Nb1, int Nb2, int Nb3, int Nb4)
{
    m_NbList.clear();
    m_NbList << Nb1 << Nb2 << Nb3 << Nb4;

    // Premier Fils
    if(m_NbList.value(0) > m_NbList.value(2))
    {
        m_NbList.swap(0, 2);
    }

    //Second Fils
    if(m_NbList.value(1) > m_NbList.value(3))
    {
        m_NbList.swap(1, 3);
    }

    //Troisieme Fils
    if(m_NbList.value(0) > m_NbList.value(1))
    {
        m_NbList.swap(0, 1);
    }

    //Quatrième Fils
    if(m_NbList.value(2) > m_NbList.value(3))
    {
        m_NbList.swap(2, 3);
    }

    //Cinquieme Fils
    if(m_NbList.value(1) > m_NbList.value(2))
    {
        m_NbList.swap(1, 2);
    }

    return m_NbList;
}

void MainWindow::setListNonTrie(int Nb1, int Nb2, int Nb3, int Nb4)
{
    listeNombreNonTrie.clear();
    listeNombreNonTrie << Nb1 << Nb2 << Nb3 << Nb4;
}

void MainWindow::setListColor(QString a, int pos)
{
    listColor.takeAt(pos);
    listColor.insert(pos, a);
}

void MainWindow::setDefaultListColor()
{
    ui->comboBox_color1->setCurrentText("Rouge");
    ui->comboBox_color2->setCurrentText("Bleu");
    ui->comboBox_color3->setCurrentText("Vert");
    ui->comboBox_color4->setCurrentText("Jaune");

    listColor << "Rouge" << "Vert" << "Bleu" << "Jaune";
}


void MainWindow::on_pushButton_clicked()
{
    setListNonTrie(ui->number1->value(), ui->number2->value(), ui->number3->value(), ui->number4->value());

    setListColor(ui->comboBox_color1->currentText(),0);
    setListColor(ui->comboBox_color2->currentText(),1);
    setListColor(ui->comboBox_color3->currentText(),2);
    setListColor(ui->comboBox_color4->currentText(),3);

    m_lineScene = new MaScene(this);
    ui->graphicsView->setScene(m_lineScene);

    TriageValeur(ui->number1->value(), ui->number2->value(), ui->number3->value(), ui->number4->value());

    ui->label->setNum(m_NbList.value(0));
    ui->label_2->setNum(m_NbList.value(1));
    ui->label_3->setNum(m_NbList.value(2));
    ui->label_4->setNum(m_NbList.value(3));
}

void MainWindow::on_pushButton_2_clicked()
{
    delete m_lineScene;

    ui->number1->setValue(0);
    ui->number2->setValue(0);
    ui->number3->setValue(0);
    ui->number4->setValue(0);

    ui->label->setNum(0);
    ui->label_2->setNum(0);
    ui->label_3->setNum(0);
    ui->label_4->setNum(0);

    setDefaultListColor();

    on_pushButton_clicked();

    QMessageBox::information(this, "RESET", "Reseau de Tri reset !");


}
