#ifndef BUILDER_H
#define BUILDER_H

#include "window.h"
#include <QObject>

class Builder : public QObject
{
public:
    virtual void addText(const QString&) = 0;
    virtual void addButton(const QString&) = 0;
    virtual void rebuild() = 0;
    virtual Window* createWindow() = 0;
};


#endif // BUILDER_H
