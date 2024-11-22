#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class QLabel;
class QFrame;
class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);
private slots:
    void slotButtonClicked();
private:
    QFrame *frame;
    QPushButton *button_1, *button_2, *button_plus;
    QLabel *displayNum;
    QString num1, num2, oper;
};

#endif // WINDOW_Hs
