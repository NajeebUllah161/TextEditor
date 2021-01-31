/********************************************************************************
** Form generated from reading UI file 'dlg_all_chapter.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ALL_CHAPTER_H
#define UI_DLG_ALL_CHAPTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_All_Chapters
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *Dialog_All_Chapters)
    {
        if (Dialog_All_Chapters->objectName().isEmpty())
            Dialog_All_Chapters->setObjectName(QStringLiteral("Dialog_All_Chapters"));
        Dialog_All_Chapters->resize(635, 600);
        Dialog_All_Chapters->setMinimumSize(QSize(0, 600));
        Dialog_All_Chapters->setStyleSheet(QLatin1String("QWidget\n"
"{background:#c3c3c3;\n"
"}"));
        gridLayout = new QGridLayout(Dialog_All_Chapters);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 30, -1, 30);
        textEdit = new QTextEdit(Dialog_All_Chapters);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("QTextEdit\n"
"{background:white;\n"
"}"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        retranslateUi(Dialog_All_Chapters);

        QMetaObject::connectSlotsByName(Dialog_All_Chapters);
    } // setupUi

    void retranslateUi(QDialog *Dialog_All_Chapters)
    {
        Dialog_All_Chapters->setWindowTitle(QApplication::translate("Dialog_All_Chapters", "All Chapters", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_All_Chapters: public Ui_Dialog_All_Chapters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ALL_CHAPTER_H
