#include <QCoreApplication>
#include "Task.h"
#include <iostream>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    
   Task* task1 = new Task("buy groceries", $app);
   Task* task2 = new Task("fix bug", $app);  

   task1->completed();
   task2->completed();

    return app.exec();
}


// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);
    
//     QTextStream inputStream(stdin);

//     qInfo() << "debuging ...\n";
//     QString name = inputStream.readLine();
//     qInfo() << "the value of name is:\n" << name;

//     return app.exec();
// }

