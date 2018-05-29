#ifndef QSETTINGSPLUGIN_H
#define QSETTINGSPLUGIN_H

#include <QtGlobal>
#include <QApplication>
#include <QSettings>
#include <QString>
#include <QDir>

class qSettingsPlugin
{
public:
    qSettingsPlugin();
    qSettingsPlugin(const QString &path);
    ~qSettingsPlugin();

protected:

private:
    QString *m_path;
    QDir *m_dir;
    QSettings *m_setting;

    inline bool mf_checkPath();
    inline QString mf_changePath();

signals:

public slots:
    void saveData(const QString &className, const QString &name, const QString &data);
    void getData(const QString &className, const QString &name, QString &data);

};

#endif // QSETTINGSPLUGIN_H
