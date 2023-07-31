#include "steuerung.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Steuerung w;
    w.show();

    return a.exec();
}
