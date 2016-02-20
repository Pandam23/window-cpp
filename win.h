#ifndef WIN_H
#define WIN_H

#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class Window : public QWidget
{
    Q_OBJECT
    QPushButton *button;
    QLabel *lable;
    QLineEdit *edit;
public:
    explicit Window(QWidget *parent = 0);

signals:

public slots:
    void setLableText();
};

#endif // WIN_H

