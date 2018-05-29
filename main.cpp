#include "widgetSettingTest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    widgetSettingTest w;
    w.show();

    return a.exec();
}
