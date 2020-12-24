#ifndef STARTFEN_H
#define STARTFEN_H

#include <QObject>
#include <QWidget>
#include <QIcon>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QVBoxLayout>

class StartFen : public QWidget
{
    Q_OBJECT
public:
    explicit StartFen(QWidget *parent = nullptr);

signals:

public slots:

private:
    QTextEdit* m_textEdit;
    QVBoxLayout* m_hlayout;
};

#endif // STARTFEN_H
