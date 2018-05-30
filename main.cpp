#include "widgetSettingTest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("Trolltech");
    app.setApplicationName("Application Example");
    widgetSettingTest w;
    w.show();

    return app.exec();
}
