#include "error.h"

Error::Error() {
    this->rebuild();
    m_window->setFixedSize(500, 80);
    m_window->setTitle("Окно с сообщением об ошибке");
    m_window->setWindowIcon(QIcon(":rec/img/error.png"));
    this->addText("Информация об ошибке");
    Window *winError = this->createWindow();
    winError->show();
}
void Error::addText(const QString &msg) {
    QLabel *msgLabel = new QLabel(msg);
    m_window->setWidget(msgLabel);
}
void Error::addButton(const QString &title) {
    Q_UNUSED(title);
}
void Error::rebuild() {
    m_window = new Window();
}
Window* Error::createWindow() {
    Window *win = this->m_window;
    this->rebuild();
    return win;
}
Error::~Error() {
    delete m_window;
}
