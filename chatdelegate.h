#ifndef CHATDELEGATE_H
#define CHATDELEGATE_H

#include <QStyledItemDelegate>

class ChatDelegate : public QStyledItemDelegate
{
public:
    explicit ChatDelegate(QObject *parent = nullptr)
        : QStyledItemDelegate(parent) {}

protected:
    void initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const override
    {
        QStyledItemDelegate::initStyleOption(option, index);

        bool isMyMessage = index.data(Qt::UserRole).toBool();

        if (isMyMessage) {
            option->decorationPosition = QStyleOptionViewItem::Right;
            option->displayAlignment = Qt::AlignRight | Qt::AlignVCenter;
        } else {
            option->decorationPosition = QStyleOptionViewItem::Left;
            option->displayAlignment = Qt::AlignLeft | Qt::AlignVCenter;
        }
    }
};

#endif // CHATDELEGATE_H
