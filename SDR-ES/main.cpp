#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    w.setFixedSize(w.size());
    return a.exec();
}
