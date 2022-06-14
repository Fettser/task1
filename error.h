#ifndef ERROR_H
#define ERROR_H

#include "builder.h"
#include <QObject>
#include <QLabel>

class Error : public Builder
{
    Q_OBJECT
private:
    Window *m_window;
public:
    Error();
    ~Error();

    void addText(const QString &msg = 0) override;
    void addButton(const QString &title = 0) override;
    void rebuild() override;
    Window* createWindow() override;

};


#endif // ERROR_H
