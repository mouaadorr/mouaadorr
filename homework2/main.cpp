#include <QApplication>    //<<<--- include the definition of the QApplication which necessary to run an application with an infinite loop to listen to all the events.
#include"dialog1.h"   //<<<---- don't forget to include the dialog1.h
#include "dialog2.h"  //<<<---- include the dialog2.h
#include "dialog3.h"
#include "dialog4.h"
int main(int argc, char *argv[])
{
    //creation of the application
    QApplication a(argc, argv);

  //create an object here
    // and show it
    return a.exec();
}











