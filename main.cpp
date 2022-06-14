#include "mainwindow.h"

#include "error.h"
#include "textinput.h"
#include "verification.h"
#include "explorer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Error *builderError = new Error();
    TextInput *builderTextInput = new TextInput();
    Verification *builderVerification = new Verification();
    Explorer *builderExplorer = new Explorer();

    return a.exec();
}
