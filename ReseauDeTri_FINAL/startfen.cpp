#include "startfen.h"

StartFen::StartFen(QWidget *parent) : QWidget(parent)
{
    QFont font;
    font.setPointSize(12);

    setWindowIcon(QIcon("programing.png"));
    setWindowTitle("Reseau de Tri");
    setWindowModality(Qt::ApplicationModal);
    setFixedSize(300,300);

    QString code;

    code += "Reseau de Tri \n\n";

    m_textEdit = new QTextEdit(this);
    m_hlayout = new QVBoxLayout(this);

    m_textEdit->setPlainText(code);
    m_textEdit->setReadOnly(true);
    m_textEdit->setFont(QFont("Helvetica"));
    m_textEdit->setLineWrapMode(QTextEdit::NoWrap);
    m_textEdit->setFont(font);

    m_hlayout->addWidget(m_textEdit);
    setLayout(m_hlayout);

}
