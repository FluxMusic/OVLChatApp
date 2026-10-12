#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QMainWindow>

#include "ui_chatwindow.h"

class ChatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatWindow(QWidget *parent = nullptr);
    ~ChatWindow() override;
private:
    //.ui file main class name
    Ui_ChatWindow ui;
};
#endif // CHATWINDOW_H
