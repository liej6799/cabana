
#include <iostream>
#include <QApplication>
#include <QCommandLineParser>
#include "mainwin.h"

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication::setApplicationName("Cabana");
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QApplication app(argc, argv);
    app.setApplicationDisplayName("Cabana");

    int ret = 0;
    {
        MainWindow w;
        w.show();
        ret = app.exec();
    }

    return ret;
}