#include "verification.h"

Verification::Verification()
{
    this->rebuild();
    m_window->setFixedSize(300, 100);
    m_window->setTitle("Окно подтверждения");
    this->addText("Подтвердите действие");
    this->addButton("Подтвердить");
    Window *winVerification = this->createWindow();
    winVerification->show();
}
void Verification::addText(const QString &msg) {
    QLabel *line = new QLabel(msg);
    m_window->setWidget(line);
}
void Verification::addButton(const QString &title) {
    QPushButton *actionButton = new QPushButton();
    actionButton->setText(title);
    actionButton->setFixedSize(actionButton->sizeHint());
    m_window->setWidget(actionButton);
}
void Verification::rebuild() {
    this->m_window = new Window();
}
Window* Verification::createWindow() {
    Window *win = this->m_window;
    this->rebuild();
    return win;
}
Verification::~Verification() {
    delete m_window;
}
