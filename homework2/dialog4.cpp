#include<dialog4.h>
#include<QPushButton>
#include<QLineEdit>
#include<QCheckBox>
#include<QHBoxLayout>
#include<QLabel>
#include<QLayout>
#include<QLCDNumber>
dialog4::dialog4(QWidget *parent): QWidget(parent)
{
   createwidgets();
   placewidgets();
   makeconnexions();
   setWindowTitle("Numeric Keypad");
}
//creation of our buttons
//each button has a number and the last one "enter"
void dialog4::createwidgets(){
     b1=new QPushButton("7");
     b2=new QPushButton("8");
     b3=new QPushButton("9");
     b4=new QPushButton("4");
     b5=new QPushButton("5");
     b6=new QPushButton("6");
     b7=new QPushButton("1");
     b8=new QPushButton("2");
     b9=new QPushButton("3");
     b10=new QPushButton("0");
     b11=new QPushButton("enter");
}
//
void dialog4::placewidgets(){

    //in this exercice we need to place the buttons as a matrice
    //for that we gonna use a grid that is predefined in QT -> QGridLayout
    auto layout=new QGridLayout;

    auto cd=new QLCDNumber;  //<- The component showing the number
    //maximum it can contains 6 digits
    cd->setDigitCount(8);
    //minimum height of the LCDNumber is  80 pixels
    cd->setMinimumHeight(80);
    layout->addWidget(cd,0,0,1,3);
    setLayout(layout);
   //adding buttons to the grid with a specific position
    layout->addWidget(b1,1,0);
    layout->addWidget(b2,1,1);
    layout->addWidget(b3,1,2);
    layout->addWidget(b4,2,0);
    layout->addWidget(b5,2,1);
    layout->addWidget(b6,2,2);
    layout->addWidget(b7,3,0);
    layout->addWidget(b8,3,1);
    layout->addWidget(b9,3,2);
    layout->addWidget(b10,4,0);

    // the last one should take two to columns
    layout->addWidget(b11,4,1,1,2);
}
void dialog4::makeconnexions(){}

