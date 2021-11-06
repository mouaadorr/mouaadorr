#include "dialog1.h"
#include<QHBoxLayout>      //<<<----- we should include QHBoxlayout in order to place the widgets horizontally

Dialog1::Dialog1(QWidget *parent):QWidget(parent)
{
    //predefinition of our functions
    createwidgets();
    placewidgets();
    makeconnexions();
    setWindowTitle("QHBOXLayout test");
}
void Dialog1:: createwidgets(){

    //creation of each widget
    name= new QLabel("Name :");
    line= new QLineEdit();
    button=new QPushButton("search");
}
void Dialog1::placewidgets(){

    //create a layout that will assure us a horizontally positioning of our widgets
    auto layout=new QHBoxLayout;
    setLayout(layout);

    //adding the widgets to layout
    layout->addWidget(name);
    layout->addWidget(line);
    layout->addWidget(button);

}
void Dialog1::makeconnexions(){}








