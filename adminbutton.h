#ifndef ADMINBUTTON_H
#define ADMINBUTTON_H

#include <QMessageBox>
#include <QPushButton>

class AdminButton : public QPushButton
{
public:
    explicit AdminButton(QWidget *parent = nullptr)
        : QPushButton(parent)
    {}

    //show a dialog when button is pressed
    void mousePressEvent(QMouseEvent *e) override
    {
        QPushButton::mousePressEvent(e);

        if (this->isDown()) {
            QMessageBox dialog;
            dialog.exec();
        }
    }
};

#endif // ADMINBUTTON_H
