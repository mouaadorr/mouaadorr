#include "dialog2.h"
#include<QPushButton>
#include<QLineEdit>
#include<QCheckBox>
#include<QHBoxLayout>
#include<QLabel>
#include<QApplication>
Dialog2::Dialog2(QWidget *parent):  QWidget(parent )
{
    createwidgets();
    placewidgets();
   makeconnexions();
   setWindowTitle("Nested Layout test");
}

//at the below is the creation  of our widgets
void Dialog2::createwidgets(){
    button=new QPushButton("search");
    button2=new QPushButton("close");
    line=new QLineEdit("Nick");
    name=new QLabel("Name: ");
    check= new QCheckBox("Match case");
   check2= new QCheckBox("Search backward");
}

//at the below is the placement of our widgets
void Dialog2::placewidgets(){
 auto mainlayout= new QHBoxLayout;
 //setSpacing holds the spacing between widgets inside a layout
 mainlayout->setSpacing(5);
 auto rightLayout= new QVBoxLayout();
 auto topLeftLayout=new QHBoxLayout;
 auto leftLayout =new QVBoxLayout;

setLayout(mainlayout);

//adding the label "name" and the lineEdit to topLeftLayout is going to provide us an horizontal placement
topLeftLayout->addWidget(name);
topLeftLayout->addWidget(line);

//next leftLayout will assure the postition verical of the elements of topLeftLayout and checkboxes that are organized vertically
leftLayout->addLayout(topLeftLayout);
leftLayout-> addWidget(check);
leftLayout->addWidget(check2);

//the rightLayout gonna organize the two buttons vertically
rightLayout->addWidget(button);
rightLayout->addWidget(button2);

//to provide a space at the battom of rightLayout we should call the function addSpacerItem & we could also use addStretch
//QSpacerItem takes a width and height as arguments
rightLayout->addSpacerItem(new QSpacerItem(10,20));

//the main layout places the two layouts leftLayout and rightLayout horizontally
mainlayout->addLayout(leftLayout);
mainlayout->addLayout(rightLayout);


}
void Dialog2::makeconnexions(){}
