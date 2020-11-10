#include "testbasemodule.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testBaseModule w;
    w.show();
    return a.exec();
}
