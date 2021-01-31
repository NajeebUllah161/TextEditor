/********************************************************************************
** Form generated from reading UI file 'w_color_button.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_COLOR_BUTTON_H
#define UI_W_COLOR_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Color_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QToolButton *tb_action;
    QLabel *lbl_color;
    QToolButton *tb_menu;

    void setupUi(QWidget *Form_Color_Widget)
    {
        if (Form_Color_Widget->objectName().isEmpty())
            Form_Color_Widget->setObjectName(QStringLiteral("Form_Color_Widget"));
        Form_Color_Widget->resize(96, 30);
        Form_Color_Widget->setMinimumSize(QSize(45, 30));
        Form_Color_Widget->setMaximumSize(QSize(96, 30));
        gridLayout = new QGridLayout(Form_Color_Widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Form_Color_Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(30, 30));
        widget->setMaximumSize(QSize(30, 30));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 4);
        tb_action = new QToolButton(widget);
        tb_action->setObjectName(QStringLiteral("tb_action"));
        tb_action->setMinimumSize(QSize(26, 22));
        tb_action->setMaximumSize(QSize(26, 22));
        tb_action->setStyleSheet(QLatin1String("QToolButton\n"
"{ border-style:none;}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));

        gridLayout_2->addWidget(tb_action, 0, 0, 1, 1);

        lbl_color = new QLabel(widget);
        lbl_color->setObjectName(QStringLiteral("lbl_color"));
        lbl_color->setMinimumSize(QSize(26, 4));
        lbl_color->setMaximumSize(QSize(26, 4));

        gridLayout_2->addWidget(lbl_color, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        tb_menu = new QToolButton(Form_Color_Widget);
        tb_menu->setObjectName(QStringLiteral("tb_menu"));
        tb_menu->setMinimumSize(QSize(15, 30));
        tb_menu->setMaximumSize(QSize(15, 30));
        tb_menu->setStyleSheet(QLatin1String("\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon/dropdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_menu->setIcon(icon);
        tb_menu->setIconSize(QSize(10, 10));

        gridLayout->addWidget(tb_menu, 0, 1, 1, 1);


        retranslateUi(Form_Color_Widget);

        QMetaObject::connectSlotsByName(Form_Color_Widget);
    } // setupUi

    void retranslateUi(QWidget *Form_Color_Widget)
    {
        Form_Color_Widget->setWindowTitle(QApplication::translate("Form_Color_Widget", "Form", 0));
        tb_action->setText(QApplication::translate("Form_Color_Widget", "...", 0));
        lbl_color->setText(QString());
        tb_menu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form_Color_Widget: public Ui_Form_Color_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_COLOR_BUTTON_H
