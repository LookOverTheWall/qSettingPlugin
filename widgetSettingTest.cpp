#include "widgetSettingTest.h"
#include "ui_widgetSettingTest.h"

widgetSettingTest::widgetSettingTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widgetSettingTest)
{
    ui->setupUi(this);
}

widgetSettingTest::~widgetSettingTest()
{
    delete ui;
}
