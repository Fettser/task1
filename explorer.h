#ifndef EXPLORER_H
#define EXPLORER_H

#include "builder.h"

#include <QComboBox>
#include <QLineEdit>
#include <QFileSystemModel>
#include <QTreeView>

class Explorer : public Builder
{
    Q_OBJECT
private:
    Window *m_window;
public:
    Explorer();
    ~Explorer();

    void addText(const QString &msg = 0) override;
    void addButton(const QString &title = 0) override;
    void addFileExplorer();
    void addComboBox(QList<QString> &extension);
    void rebuild() override;
    Window* createWindow() override;
};


#endif // EXPLORER_H
