#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("琴弦科技(深圳)有限公司    作者:郭富标     请勿商用,所有权归本人所有");
    return a.exec();
}
