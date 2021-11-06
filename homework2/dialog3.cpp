#include "dialog3.h"
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QFormLayout>    //this class will allow us to place our elements two by two and each element in a column.
                                              //in general it allows to place labels and other widgets such as lineEdit
#include<QPushButton>
Dialog3::Dialog3(QWidget *parent): QWidget(parent)
{
 createwidgets();
 placewidgets();
 makeconnexions();

 //Title of the window
 setWindowTitle(tr("Report Bug"));
}

// creation of our widgets
void Dialog3::createwidgets(){
      nameEdit =new QLineEdit;
      companyEdit =new QLineEdit;
      phoneEdit = new QLineEdit;
      emailEdit = new QLineEdit;
      problemEdit = new QLineEdit;
      summaryEdit = new QTextEdit;
      reset=new QPushButton("Reset");
      submitbugreport=new QPushButton("Submit bug report");
      dontsubmit=new QPushButton("Don't submit");
      combo = new QComboBox;
}
void Dialog3::placewidgets(){
      combo->addItem(tr("Always"));
      combo->addItem(tr("Sometimes"));
      combo->addItem(tr("Rarely"));

//in order to make our labels and our linEdits organized row by row i used the class "QFormLayout" that will assure us placement of our widgets
//layouts aren't the BEST way to organize the widgets in that case
             QFormLayout *layout = new QFormLayout;
             layout->addRow(tr("&Name:"), nameEdit);
             layout->addRow(tr("&Company:"), companyEdit);
             layout->addRow(tr("&Phone:"), phoneEdit);
             layout->addRow(tr("&Email:"), emailEdit);
             layout->addRow(tr("Problem &Title:"), problemEdit);
             layout->addRow(tr("&Summary Information:"),summaryEdit);
             layout->addRow(tr("&Reproducibility:"),combo);

//the design of the three bottom buttons I used three layouts
      //in order to do that a main layout will contain a left layout and a right layout
             QHBoxLayout *bottom=new QHBoxLayout;

       //the left one contains the button reset
             QHBoxLayout *left=new QHBoxLayout;
             left->addWidget(reset);

      //the right  one contains the two buttons: submitbugrepport and dontsubmit
                QHBoxLayout *right=new QHBoxLayout;
                right->addSpacerItem(new QSpacerItem(100, 20, QSizePolicy::Preferred));
                right->addWidget(submitbugreport);
                right->addWidget(dontsubmit);

       //we should add right and left to the bottom
                bottom->addLayout(left);
                bottom->addLayout(right);

       //next we must add the bottom layout to  the main one
             QVBoxLayout *Layout = new QVBoxLayout;
                Layout->addLayout(layout);
                Layout->addLayout(bottom);
             setLayout(Layout);
  }
void Dialog3::makeconnexions(){}

