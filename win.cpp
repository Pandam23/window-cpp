#include "win.h"


Window::Window(QWidget *parent) : QWidget(parent)
{
    button = new QPushButton ("Click");
    edit = new QLineEdit;
    lable = new QLabel("start text");

    QVBoxLayout *layout = new QVBoxLayout;
    layout -> addWidget (edit);
    layout -> addWidget (button);
    layout -> addWidget (lable);
    this -> setLayout (layout);

    connect(button, SIGNAL(clicked(bool)), this, SLOT(setLableText()));
}

void Window :: setLableText()
{
    lable ->setText(edit -> text());
}
