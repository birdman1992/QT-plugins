#include "circularinstrument.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CircularInstrument w;
    w.show();

    return a.exec();
}
