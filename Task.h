#ifndef TASK_H
#define TASK_H

#include <QDebug>
#include <QObject>
#include <QString>

class Task: public QObject
{
    Q_OBJECT
    
    private:
        QString m_description;
        bool m_completed;

    public:
        explicit Task(QString description, QObject *parent = nullptr);

        QString description();
        bool completed();
        void complete();

    signals:
        void taskCompleted(const QString description);
};

#endif