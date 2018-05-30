#include "qSettingsPlugin.h"

extern const QString defaultSettingFileName = "default.ini";

qSettingsPlugin::qSettingsPlugin()
    : m_path(new QString(defaultSettingFileName))
    , m_setting(new QSettings(*m_path, QSettings::IniFormat))
{

}

qSettingsPlugin::~qSettingsPlugin()
{

}

void qSettingsPlugin::saveData(const QString &className, const QString &name, const QString &data)
{
    m_setting->setValue(className + "/" + name, data);
}

void qSettingsPlugin::getData(const QString &className, const QString &name, QString &data)
{
    data = m_setting->value(className + "/" + name).toString();
}

void qSettingsPlugin::getData(const QString &className, const QString &name, int &data)
{
    data = m_setting->value(className + "/" + name).toInt();
}

