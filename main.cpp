#include "chatwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChatWindow w;
    w.resize(600, 400);
    w.show();
    return QApplication::exec();
}
