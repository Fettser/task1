#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    this->box = new QVBoxLayout();
    this->localbox = new QVBoxLayout();
    this->exit = new QPushButton();

    exit->setText("Закрыть");

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addStretch();
    buttonLayout->addWidget(exit);

    box->addLayout(localbox);
    box->addLayout(buttonLayout);
    this->setLayout(box);
    connect(exit, &QPushButton::clicked, this, &QWidget::close);
}
void Window::setWidget(QWidget *widget)
{
    this->localbox->addWidget(widget);
}
void Window::setTitle(const QString &title)
{
    this->setWindowTitle(title);
}
Window::~Window()
{
    delete this->exit;
    delete this->localbox;
    delete this->box;
}
