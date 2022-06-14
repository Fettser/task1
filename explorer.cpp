#include "explorer.h"

Explorer::Explorer()
{
    this->rebuild();
    m_window->setFixedSize(500, 500);
    m_window->setTitle("Окно выбора файла");
    this->addFileExplorer();
    this->addText("Имя файла");
    QList<QString> extensions = {".txt", ".docx", ".pdf", ".png", ".jpg", ".mp3", ".json", ".js", ".html"};
    this->addComboBox(extensions);
    this->addButton("Открыть");
    Window *winExplorer = this->createWindow();
    winExplorer->show();
}
void Explorer::addText(const QString &msg) {
    QLineEdit *text = new QLineEdit();
    text->setText(msg);
    m_window->setWidget(text);
}
void Explorer::addButton(const QString &title) {
    QPushButton *actionButton = new QPushButton();
    actionButton->setText(title);
    m_window->setWidget(actionButton);
}
void Explorer::addFileExplorer() {
    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());
    QTreeView *tree = new QTreeView();
    tree->setModel(model);
    m_window->setWidget(tree);
}
void Explorer::addComboBox(QList<QString> &extension) {
    QComboBox *listOfExtensions = new QComboBox();
    listOfExtensions->addItems(extension);
    m_window->setWidget(listOfExtensions);
}
void Explorer::rebuild() {
    m_window = new Window();
}
Window* Explorer::createWindow() {
    Window *win = this->m_window;
    this->rebuild();
    return win;
}
Explorer::~Explorer()
{
    delete m_window;
}
