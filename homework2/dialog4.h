#ifndef DIALOG4_H
#define DIALOG4_H
#include<QVBoxLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QLCDNumber>
class dialog4 : public QWidget
{
public:
    dialog4(QWidget *parent = nullptr);
protected:
    void createwidgets();
    void placewidgets();
    void makeconnexions();
QPushButton *b1;
QPushButton *b2;
QPushButton *b3;
QPushButton *b4;
QPushButton *b5;
QPushButton *b6;
QPushButton *b7;
QPushButton *b9;
QPushButton *b8;
QPushButton *b10;
QPushButton *b11;
};

#endif // DIALOG4_H
