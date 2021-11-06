#ifndef DIALOG3_H
#define DIALOG3_H
#include<QPushButton>
#include<QLineEdit>
#include<QTextEdit> //header to include a QTextEdit class which represents a large text area
#include<QComboBox> //header to include the QComboBox class
class Dialog3 : public QWidget
  {
 public:
  Dialog3(QWidget *parent =nullptr);
 private:
      void createwidgets();
      void placewidgets();
      void makeconnexions();
private:
      QLineEdit *nameEdit;
      QLineEdit *companyEdit;
      QLineEdit *phoneEdit;
      QLineEdit *emailEdit;
      QLineEdit *problemEdit;
      QTextEdit *summaryEdit;

//A QComboBox provides a means of presenting a list of options to the user in a way
//that takes up the minimum amount of screen space.
      QComboBox *combo;
      QPushButton *reset;
      QPushButton *submitbugreport;
      QPushButton *dontsubmit;
  };
#endif // DIALOG3_H

