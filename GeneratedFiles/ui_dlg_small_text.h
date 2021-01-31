/********************************************************************************
** Form generated from reading UI file 'dlg_small_text.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_SMALL_TEXT_H
#define UI_DLG_SMALL_TEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Small_Text
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QToolButton *tb_save;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dialog_Small_Text)
    {
        if (Dialog_Small_Text->objectName().isEmpty())
            Dialog_Small_Text->setObjectName(QStringLiteral("Dialog_Small_Text"));
        Dialog_Small_Text->resize(599, 430);
        Dialog_Small_Text->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#fff200;\n"
"}"));
        gridLayout = new QGridLayout(Dialog_Small_Text);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Dialog_Small_Text);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, 0, -1);
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_3->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(Dialog_Small_Text);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(90, 16777215));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 15, 10, -1);
        tb_save = new QToolButton(widget_2);
        tb_save->setObjectName(QStringLiteral("tb_save"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tb_save->sizePolicy().hasHeightForWidth());
        tb_save->setSizePolicy(sizePolicy);
        tb_save->setMinimumSize(QSize(80, 40));
        tb_save->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Impact"));
        font.setPointSize(20);
        tb_save->setFont(font);
        tb_save->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#e5f1fb;\n"
"}"));

        gridLayout_2->addWidget(tb_save, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout->addWidget(widget_2, 0, 1, 1, 1);


        retranslateUi(Dialog_Small_Text);

        QMetaObject::connectSlotsByName(Dialog_Small_Text);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Small_Text)
    {
        Dialog_Small_Text->setWindowTitle(QApplication::translate("Dialog_Small_Text", "Dialog", 0));
        tb_save->setText(QApplication::translate("Dialog_Small_Text", "SAVE", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Small_Text: public Ui_Dialog_Small_Text {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_SMALL_TEXT_H
