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
    ~qSettingsPlugin();

protected:

private:
    QString *m_path;
    QSettings *m_setting;

signals:

public slots:
    void saveData(const QString &className, const QString &name, const QString &data);
    void getData(const QString &className, const QString &name, QString &data);
    void getData(const QString &className, const QString &name, int &data);

};

#endif // QSETTINGSPLUGIN_H
