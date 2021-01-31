/********************************************************************************
** Form generated from reading UI file 'dlg_color_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_COLOR_MENU_H
#define UI_DLG_COLOR_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "cxcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog_Color_Menu
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    CxColorButton *tb_col_3;
    CxColorButton *tb_col_1;
    CxColorButton *tb_col_8;
    CxColorButton *tb_col_4;
    CxColorButton *tb_col_5;
    CxColorButton *tb_col_6;
    CxColorButton *tb_col_7;
    CxColorButton *tb_col_9;
    CxColorButton *tb_col_2;
    CxColorButton *tb_col_10;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QToolButton *tb_choose_more;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    CxColorButton *tb_col_11;
    CxColorButton *tb_col_18;
    CxColorButton *tb_col_12;
    CxColorButton *tb_col_14;
    CxColorButton *tb_col_15;
    CxColorButton *tb_col_16;
    CxColorButton *tb_col_17;
    CxColorButton *tb_col_20;
    CxColorButton *tb_col_19;
    CxColorButton *tb_col_13;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *Dialog_Color_Menu)
    {
        if (Dialog_Color_Menu->objectName().isEmpty())
            Dialog_Color_Menu->setObjectName(QStringLiteral("Dialog_Color_Menu"));
        Dialog_Color_Menu->resize(227, 87);
        gridLayout = new QGridLayout(Dialog_Color_Menu);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        widget = new QWidget(Dialog_Color_Menu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 20));
        widget->setMaximumSize(QSize(16777215, 20));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(1);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tb_col_3 = new CxColorButton(widget);
        buttonGroup = new QButtonGroup(Dialog_Color_Menu);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(tb_col_3);
        tb_col_3->setObjectName(QStringLiteral("tb_col_3"));
        tb_col_3->setMinimumSize(QSize(20, 20));
        tb_col_3->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_3, 0, 2, 1, 1);

        tb_col_1 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_1);
        tb_col_1->setObjectName(QStringLiteral("tb_col_1"));
        tb_col_1->setMinimumSize(QSize(20, 20));
        tb_col_1->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_1, 0, 0, 1, 1);

        tb_col_8 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_8);
        tb_col_8->setObjectName(QStringLiteral("tb_col_8"));
        tb_col_8->setMinimumSize(QSize(20, 20));
        tb_col_8->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_8, 0, 7, 1, 1);

        tb_col_4 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_4);
        tb_col_4->setObjectName(QStringLiteral("tb_col_4"));
        tb_col_4->setMinimumSize(QSize(20, 20));
        tb_col_4->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_4, 0, 3, 1, 1);

        tb_col_5 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_5);
        tb_col_5->setObjectName(QStringLiteral("tb_col_5"));
        tb_col_5->setMinimumSize(QSize(20, 20));
        tb_col_5->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_5, 0, 4, 1, 1);

        tb_col_6 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_6);
        tb_col_6->setObjectName(QStringLiteral("tb_col_6"));
        tb_col_6->setMinimumSize(QSize(20, 20));
        tb_col_6->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_6, 0, 5, 1, 1);

        tb_col_7 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_7);
        tb_col_7->setObjectName(QStringLiteral("tb_col_7"));
        tb_col_7->setMinimumSize(QSize(20, 20));
        tb_col_7->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_7, 0, 6, 1, 1);

        tb_col_9 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_9);
        tb_col_9->setObjectName(QStringLiteral("tb_col_9"));
        tb_col_9->setMinimumSize(QSize(20, 20));
        tb_col_9->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_9, 0, 8, 1, 1);

        tb_col_2 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_2);
        tb_col_2->setObjectName(QStringLiteral("tb_col_2"));
        tb_col_2->setMinimumSize(QSize(20, 20));
        tb_col_2->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_2, 0, 1, 1, 1);

        tb_col_10 = new CxColorButton(widget);
        buttonGroup->addButton(tb_col_10);
        tb_col_10->setObjectName(QStringLiteral("tb_col_10"));
        tb_col_10->setMinimumSize(QSize(20, 20));
        tb_col_10->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(tb_col_10, 0, 9, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(Dialog_Color_Menu);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 3, 0, 3);
        tb_choose_more = new QToolButton(widget_2);
        tb_choose_more->setObjectName(QStringLiteral("tb_choose_more"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tb_choose_more->sizePolicy().hasHeightForWidth());
        tb_choose_more->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(tb_choose_more, 0, 0, 1, 1);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget_3 = new QWidget(Dialog_Color_Menu);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 20));
        widget_3->setMaximumSize(QSize(16777215, 20));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(1);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        tb_col_11 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_11);
        tb_col_11->setObjectName(QStringLiteral("tb_col_11"));
        tb_col_11->setMinimumSize(QSize(20, 20));
        tb_col_11->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_11, 0, 0, 1, 1);

        tb_col_18 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_18);
        tb_col_18->setObjectName(QStringLiteral("tb_col_18"));
        tb_col_18->setMinimumSize(QSize(20, 20));
        tb_col_18->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_18, 0, 9, 1, 1);

        tb_col_12 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_12);
        tb_col_12->setObjectName(QStringLiteral("tb_col_12"));
        tb_col_12->setMinimumSize(QSize(20, 20));
        tb_col_12->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_12, 0, 1, 1, 1);

        tb_col_14 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_14);
        tb_col_14->setObjectName(QStringLiteral("tb_col_14"));
        tb_col_14->setMinimumSize(QSize(20, 20));
        tb_col_14->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_14, 0, 4, 1, 1);

        tb_col_15 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_15);
        tb_col_15->setObjectName(QStringLiteral("tb_col_15"));
        tb_col_15->setMinimumSize(QSize(20, 20));
        tb_col_15->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_15, 0, 5, 1, 1);

        tb_col_16 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_16);
        tb_col_16->setObjectName(QStringLiteral("tb_col_16"));
        tb_col_16->setMinimumSize(QSize(20, 20));
        tb_col_16->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_16, 0, 6, 1, 1);

        tb_col_17 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_17);
        tb_col_17->setObjectName(QStringLiteral("tb_col_17"));
        tb_col_17->setMinimumSize(QSize(20, 20));
        tb_col_17->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_17, 0, 7, 1, 1);

        tb_col_20 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_20);
        tb_col_20->setObjectName(QStringLiteral("tb_col_20"));
        tb_col_20->setMinimumSize(QSize(20, 20));
        tb_col_20->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_20, 0, 11, 1, 1);

        tb_col_19 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_19);
        tb_col_19->setObjectName(QStringLiteral("tb_col_19"));
        tb_col_19->setMinimumSize(QSize(20, 20));
        tb_col_19->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_19, 0, 10, 1, 1);

        tb_col_13 = new CxColorButton(widget_3);
        buttonGroup->addButton(tb_col_13);
        tb_col_13->setObjectName(QStringLiteral("tb_col_13"));
        tb_col_13->setMinimumSize(QSize(20, 20));
        tb_col_13->setMaximumSize(QSize(20, 20));

        gridLayout_3->addWidget(tb_col_13, 0, 2, 1, 1);


        gridLayout->addWidget(widget_3, 1, 0, 1, 1);


        retranslateUi(Dialog_Color_Menu);

        QMetaObject::connectSlotsByName(Dialog_Color_Menu);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Color_Menu)
    {
        Dialog_Color_Menu->setWindowTitle(QApplication::translate("Dialog_Color_Menu", "Dialog", 0));
        tb_col_3->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_1->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_8->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_4->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_5->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_6->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_7->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_9->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_2->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_10->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_choose_more->setText(QApplication::translate("Dialog_Color_Menu", "Choose More", 0));
        tb_col_11->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_18->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_12->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_14->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_15->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_16->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_17->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_20->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_19->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
        tb_col_13->setText(QApplication::translate("Dialog_Color_Menu", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Color_Menu: public Ui_Dialog_Color_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_COLOR_MENU_H
