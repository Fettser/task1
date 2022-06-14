#ifndef VERIFICATION_H
#define VERIFICATION_H

#include "builder.h"

#include <QLabel>

class Verification : public Builder
{
    Q_OBJECT
private:
    Window *m_window;
public:
    Verification();
    ~Verification();

    void addText(const QString &msg = 0) override;
    void addButton(const QString &title = 0) override;
    void rebuild() override;
    Window* createWindow() override;
};


#endif // VERIFICATION_H
