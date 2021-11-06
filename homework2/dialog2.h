#ifndef DIALOG2_H
#define DIALOG2_H
#include <QWidget>
#include<QPushButton>
#include<QLineEdit>

//header to include the QCheckBox class which represents a checkbutton
#include<QCheckBox>
#include<QHBoxLayout>
#include<QLabel>
class Dialog2: public QWidget
{
public:
   Dialog2(QWidget *parent =nullptr);

protected:
    void placewidgets();
    void createwidgets();
    void makeconnexions();

protected:
    QLabel *name;
    QPushButton *button;
    QPushButton *button2;
    QLineEdit *line;
    QCheckBox *check;
    QCheckBox *check2;

};

#endif // DIALOG2_H

