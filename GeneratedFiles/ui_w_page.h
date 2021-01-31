/********************************************************************************
** Form generated from reading UI file 'w_page.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_PAGE_H
#define UI_W_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Page_Menu
{
public:
    QGridLayout *gridLayout;

    void setupUi(QWidget *Form_Page_Menu)
    {
        if (Form_Page_Menu->objectName().isEmpty())
            Form_Page_Menu->setObjectName(QStringLiteral("Form_Page_Menu"));
        Form_Page_Menu->resize(297, 300);
        gridLayout = new QGridLayout(Form_Page_Menu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        retranslateUi(Form_Page_Menu);

        QMetaObject::connectSlotsByName(Form_Page_Menu);
    } // setupUi

    void retranslateUi(QWidget *Form_Page_Menu)
    {
        Form_Page_Menu->setWindowTitle(QApplication::translate("Form_Page_Menu", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_Page_Menu: public Ui_Form_Page_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_PAGE_H
