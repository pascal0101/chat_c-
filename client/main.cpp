#include "mainwindow.h"
#include <QApplication>
#include "FenClient.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FenClient fenetre;
    fenetre.show();
    return a.exec();
}
