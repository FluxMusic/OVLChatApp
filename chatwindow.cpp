#include "chatwindow.h"

#include <QDockWidget>
#include <QHBoxLayout>
#include <QToolBar>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QScrollArea>
#include <QVBoxLayout>

#include "dmitem.h"

ChatWindow::ChatWindow(QWidget *parent)
    : QMainWindow(parent)
{
    {
        //Add .ui file structure to window
        ui.setupUi(this);

        QPixmap icon(":/icons/assets/SAE_Logo.jpg");
        icon = icon.scaled(32, 32);
        ui.accountIcon->setPixmap(icon);
    }

    // /*
    {
        //Create every widget manually
        QAction *newServerAction = new QAction("+");
        ui.toolBar->addAction(newServerAction);


        QToolBar *toolBar = new QToolBar(this);
        addToolBar(Qt::LeftToolBarArea, toolBar);


        QDockWidget *dmArea = new QDockWidget();
        dmArea->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dmArea->setTitleBarWidget(new QLabel("Chats"));

        QWidget *dmAreaInternal = new QWidget();
        dmArea->setWidget(dmAreaInternal);
        QVBoxLayout *dmAreaLayout = new QVBoxLayout();
        dmAreaInternal->setLayout(dmAreaLayout);
        QScrollArea * chatScrollArea = new QScrollArea();
        dmAreaLayout->addWidget(chatScrollArea);
        DmItem *dm0 = new DmItem();
        DmItem *dm1 = new DmItem();
        QWidget *dmScrollWrapper = new QWidget(chatScrollArea);
        QVBoxLayout *dmScrollAreaLayout = new QVBoxLayout();
        dmScrollWrapper->setLayout(dmScrollAreaLayout);
        dmScrollAreaLayout->addWidget(dm0);
        dmScrollAreaLayout->addWidget(dm1);

        QWidget *accountNameWrapper = new QWidget();
        dmAreaLayout->addWidget(accountNameWrapper);
        QHBoxLayout *accountNameLayout = new QHBoxLayout();
        accountNameWrapper->setLayout(accountNameLayout);
        QLabel *accountIcon = new QLabel("Icon");
        QPixmap accountIconPixmap(":/icons/assets/SAE_Logo.jpg");
        accountIconPixmap = accountIconPixmap.scaled(32, 32);
        ui.accountIcon->setPixmap(accountIconPixmap);
        QLabel *accountName = new QLabel("Account");
        accountNameLayout->addWidget(accountIcon);
        accountNameLayout->addWidget(accountName);

        QPushButton *adminButton = new QPushButton("Admin");
        dmAreaLayout->addWidget(adminButton);

        addDockWidget(Qt::LeftDockWidgetArea, dmArea);


        setCentralWidget(new QWidget());
        QVBoxLayout *chatBoxLayout = new QVBoxLayout();
        centralWidget()->setLayout(chatBoxLayout);
        QScrollArea *chatBoxScrollArea = new QScrollArea();
        QLineEdit *messageLineEdit = new QLineEdit();
        messageLineEdit->setPlaceholderText("Type here");
        chatBoxLayout->addWidget(chatBoxScrollArea);
        QWidget *messageWrapper = new QWidget();
        chatBoxLayout->addWidget(messageWrapper);
        QHBoxLayout *messageLayout = new QHBoxLayout(messageWrapper);
        messageLayout->addWidget(messageLineEdit);
        QPushButton *sendButton = new QPushButton("Send");
        messageLayout->addWidget(sendButton);
    }
    // */
}

ChatWindow::~ChatWindow() = default;
