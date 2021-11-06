#ifndef DIALOG1_H
#define DIALOG1_H
#include<QWidget>

//header to include the QPushButtom class which represents a pushbutton
#include<QPushButton>

//header to include the QLabel class which represents widget with a given text
#include<QLabel>

//header to include the QLineEdit class which represents widget with a given text area
#include<QLineEdit>
class Dialog1: public QWidget
{
public:
    Dialog1(QWidget *parent =nullptr);
protected:
    //to create a widget
    void createwidgets();

    //to place a widget
    void placewidgets();

    //this function won't be implemented because we didn't see signals yet
    void makeconnexions();

protected:

    //create a label
    QLabel *name;

    //create a pushbutton
    QPushButton *button;

    //create a lineedit(a text area)
    QLineEdit *line;

};

#endif // DIALOG1_H









