#ifndef WINDOW_H
#define WINDOW_H
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

class Window : public QWidget
{
    Q_OBJECT
private:
    QVBoxLayout *localbox;
    QVBoxLayout *box;
    QPushButton *exit;
public:
    Window(QWidget *parent = 0);
    void setWidget(QWidget*);
    void setTitle(const QString&);
    ~Window();
};

#endif // WINDOW_H
