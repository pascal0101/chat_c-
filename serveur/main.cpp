#include "mainwindow.h"
#include "FenServeur.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FenServeur fenetre;
    fenetre.show();

    //MainWindow w;
    //w.show();
    return a.exec();
}
