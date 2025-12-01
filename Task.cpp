#include "Task.h"

explicit Task::Task(QString description, QObject *parent) : 
QObject{parent}, m_description(description), m_completed(false)
{}

QString Task::description() // getter for description
{
    return m_description;
}


bool Task::completed() // getter for m_completed
{
    return m_completed;
}


void Task::complete(){
    if (!m_completed){
        m_completed = true;

        qInfo() << "task completed: " << m_description; // send for the console
        emit taskCompleted(m_description); // send segnal
    }
}