#ifndef TEXTINPUT_H
#define TEXTINPUT_H

#include "builder.h"
#include <QWidget>
#include <QTextEdit>
#include <QToolBar>

class TextInput : public Builder
{
    Q_OBJECT
private:
    Window *m_window;
public:
    TextInput();
    ~TextInput();

    void addText(const QString &msg = 0) override;
    void addButton(const QString &title = 0) override;
    void addToolBar(QList<QString> &tools);
    void rebuild() override;
    Window* createWindow() override;
};


#endif // TEXTINPUT_H
