#ifndef WIDGETSETTINGTEST_H
#define WIDGETSETTINGTEST_H

#include <QCoreApplication>
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

    const QString settingFileName = "data.ini";
    const QString path = settingFileName;//QCoreApplication::applicationDirPath() + "/" + settingFileName;
    qSettingsPlugin *m_setting;
};

#endif // WIDGETSETTINGTEST_H
