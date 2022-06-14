#include "textinput.h"

TextInput::TextInput() {
    this->rebuild();
    m_window->setFixedSize(400, 500);
    m_window->setTitle("Окно ввода текста");
    QList<QString> tools = {"copy", "delete", "remove", "insert", "add"};
    this->addToolBar(tools);
    this->addText("Поле текстового редактора");
    this->addButton("Подтвердить");
    Window *winTextInput = this->createWindow();
    winTextInput->show();
}

void TextInput::rebuild() {
    this->m_window = new Window();
}

void TextInput::addText(const QString &msg) {
    QTextEdit *text = new QTextEdit();
    text->setText(msg);
    m_window->setWidget(text);
}

void TextInput::addButton(const QString &title) {
    QPushButton *actionButton = new QPushButton();
    actionButton->setFixedWidth(100);
    actionButton->setStyleSheet("background-color: red");
    actionButton->setText(title);
    m_window->setWidget(actionButton);
}

void TextInput::addToolBar(QList<QString> &tools) {
    QToolBar *bar = new QToolBar();
    int size = tools.size();
    for(int i = 0; i < size; i++) {
        bar->addAction(tools[i]);
    }
    m_window->setWidget(bar);
}

Window* TextInput::createWindow() {
    Window *win = this->m_window;
    this->rebuild();
    return win;
}

TextInput::~TextInput() {
    delete m_window;
}
