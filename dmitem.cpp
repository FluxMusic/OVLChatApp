#include "dmitem.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

DmItem::DmItem(QWidget *parent)
    : QWidget{parent}
{
    QHBoxLayout *layout = new QHBoxLayout();
    setLayout(layout);

    QLabel *icon = new QLabel("iconPlaceholder");
    QPixmap iconPixmap(":/icons/assets/SAE_Logo.jpg");
    iconPixmap = iconPixmap.scaled(32, 32);
    icon->setPixmap(iconPixmap);
    QLabel *dmName = new QLabel("Placeholder");
    QPushButton *dmButton = new QPushButton("open DM");

    layout->addWidget(icon);
    layout->addWidget(dmName);
    layout->addWidget(dmButton);
}
