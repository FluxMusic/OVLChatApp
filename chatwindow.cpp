#include "chatwindow.h"

#include <QDockWidget>
#include <QHBoxLayout>
#include <QToolBar>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QScrollArea>
#include <QVBoxLayout>

#include "chatdelegate.h"
#include "dmitem.h"

ChatWindow::ChatWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //Add .ui file structure to window
    ui.setupUi(this);

    QAction *addServerAction = new QAction("+");
    ui.toolBar->addAction(addServerAction);

    QPixmap icon(":/icons/assets/SAE_Logo.jpg");
    icon = icon.scaled(32, 32);
    ui.accountIcon->setPixmap(icon);

    connect(ui.adminButton, &QPushButton::clicked, this, &ChatWindow::onAdminClicked);
    connect(ui.adminButton, &QPushButton::pressed, this, &ChatWindow::onAdminPressed);
    connect(ui.adminButton, &QPushButton::released, this, &ChatWindow::onAdminReleased);
    connect(addServerAction, &QAction::triggered, this, &ChatWindow::onAdminClicked);
    connect(ui.sendButton, &QPushButton::clicked, this, &ChatWindow::sendMessage);
    connect(ui.messageEdit, &QLineEdit::returnPressed, this, &ChatWindow::sendMessage);

    chatModel = new QStandardItemModel(this);
    ui.chatList->setModel(chatModel);
    ui.chatList->setItemDelegate(new ChatDelegate(ui.chatList));

    QStandardItem *message = new QStandardItem(QIcon(":/icons/assets/SAE_Logo.jpg"), "Hello");
    message->setTextAlignment(Qt::AlignRight);
    message->setData(false, Qt::UserRole);
    chatModel->appendRow(message);
}

ChatWindow::~ChatWindow() = default;

void ChatWindow::onAdminClicked() const
{
    qDebug() << "Admin button was clicked";
}

void ChatWindow::onAdminPressed() const
{
    qDebug() << "Admin button was pressed";
}

void ChatWindow::onAdminReleased() const
{
    qDebug() << "Admin button was released";
}

void ChatWindow::sendMessage()
{
    // const QString message = ui.messageEdit->text();
    // qDebug() << message;

    QIcon icon = QIcon(":/icons/assets/SAE_Logo.jpg");
    QStandardItem *message = new QStandardItem(icon, ui.messageEdit->text());
    message->setTextAlignment(Qt::AlignRight);
    message->setData(true, Qt::UserRole);
    chatModel->appendRow(message);
}
