#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

#include "ui_chatwindow.h"

class ChatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatWindow(QWidget *parent = nullptr);
    ~ChatWindow() override;

public Q_SLOTS:
    void onAdminClicked() const;
    void onAdminPressed() const;
    void onAdminReleased() const;
    void sendMessage();

private:
    //.ui file main class name + Ui_ to access .ui file
    Ui_ChatWindow ui;

    QStandardItemModel *chatModel = nullptr;
};
#endif // CHATWINDOW_H
