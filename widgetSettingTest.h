#ifndef WIDGETSETTINGTEST_H
#define WIDGETSETTINGTEST_H

#include <QWidget>
#include "qSettingsPlugin.h"

namespace Ui {
class widgetSettingTest;
}

class widgetSettingTest : public QWidget
{
    Q_OBJECT

public:
    explicit widgetSettingTest(QWidget *parent = 0);
    ~widgetSettingTest();

private:
    Ui::widgetSettingTest *ui;
};

#endif // WIDGETSETTINGTEST_H
