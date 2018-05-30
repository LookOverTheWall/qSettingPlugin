#include "widgetSettingTest.h"
#include "ui_widgetSettingTest.h"
#include <QDebug>

widgetSettingTest::widgetSettingTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widgetSettingTest)
  , m_setting(new qSettingsPlugin())
{
    ui->setupUi(this);



    m_setting->saveData("Size", "width", "800");
    m_setting->saveData("Size", "height", "600");
    m_setting->saveData("Mode", "showOrNot", "true");

    QString str;
    int val;
    m_setting->getData("Size", "width", str);
    m_setting->getData("Size", "width", val);
    qDebug() << str << val << endl;

    QSettings set("test.ini", QSettings::IniFormat);
    set.setValue("Size/width", "800");
    set.setValue("Size/height", "600");
    set.setValue("Mode/showOrNot", "true");

}

widgetSettingTest::~widgetSettingTest()
{
    delete ui;
}
