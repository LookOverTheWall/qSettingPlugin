#include "qSettingsPlugin.h"

extern const QString defaultPath = QApplication::applicationDirPath();

qSettingsPlugin::qSettingsPlugin()
    : m_path(new QString(defaultPath))
    , m_setting(new QSettings(*m_path))
{

}

qSettingsPlugin::qSettingsPlugin(const QString &path)
    : m_path(new QString(path))
    , m_dir(new QDir(*m_path))
    , m_setting(new QSettings(*m_path))
{

}

qSettingsPlugin::~qSettingsPlugin()
{

}

bool qSettingsPlugin::mf_checkPath()
{
    if ( m_path->isEmpty() )
        return false;
    if ( !m_dir->exists() )
        return false;
    return true;
}

QString qSettingsPlugin::mf_changePath()
{
    if ( mf_checkPath() )
        return *m_path;
    else
        return QDir::toNativeSeparators(*m_path);
}



void qSettingsPlugin::saveData(const QString &className, const QString &name, const QString &data)
{

}

void qSettingsPlugin::getData(const QString &className, const QString &name, QString &data)
{

}

