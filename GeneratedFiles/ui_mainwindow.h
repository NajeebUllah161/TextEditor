/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "cxcenterbutton.h"
#include "cxchapterlist.h"
#include "cxcolorwidget.h"
#include "cxpagebutton.h"
#include "cxpagelabel.h"
#include "cxreslistwidget.h"
#include "cxtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_Form_MainWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *w_chapter_control;
    QGridLayout *gridLayout_4;
    QToolButton *tb_collect;
    QToolButton *tb_prev_chapter;
    CxChapterList *lw_chapter_list;
    QToolButton *tb_next_chapter;
    QWidget *w_top;
    QGridLayout *gridLayout_2;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QToolButton *tb_menu_text;
    QToolButton *tb_menu_file;
    QToolButton *tb_start;
    QToolButton *tb_add_chapter;
    QWidget *widget_7;
    QGridLayout *gridLayout_19;
    QWidget *widget_6;
    QGridLayout *gridLayout_7;
    QToolButton *tb_minimize;
    QToolButton *tb_maximize;
    QToolButton *tb_close;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lbl_title;
    QWidget *w_main;
    QGridLayout *gridLayout_5;
    QWidget *w_content;
    QGridLayout *gridLayout_9;
    QWidget *widget;
    QGridLayout *gridLayout_10;
    CxCenterButton *tb_create_text;
    CxCenterButton *tb_upload;
    QWidget *widget_2;
    QGridLayout *gridLayout_11;
    QWidget *w_res_1;
    QGridLayout *gridLayout_17;
    QToolButton *tb_res_1;
    QWidget *w_res_2;
    QGridLayout *gridLayout_18;
    QToolButton *tb_res_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_16;
    CxResListWidget *lw_res_1;
    CxResListWidget *lw_res_2;
    QWidget *w_text;
    QGridLayout *gridLayout_6;
    QWidget *w_text_control;
    QGridLayout *gridLayout_8;
    QWidget *w_cfmt_bar;
    QGridLayout *gridLayout_21;
    QFontComboBox *cb_font;
    QComboBox *cb_fontsize;
    QToolButton *tb_font_inc;
    QToolButton *tb_font_dec;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *tb_bold;
    QToolButton *tb_italic;
    QToolButton *tb_underline;
    QToolButton *tb_left;
    QToolButton *tb_center;
    QToolButton *tb_right;
    QSpacerItem *horizontalSpacer_3;
    CxColorWidget *w_textcolor;
    CxColorWidget *w_highlightcolor;
    CxColorWidget *w_backgroundcolor;
    QToolButton *tb_pdf;
    QToolButton *tb_print;
    QToolButton *tb_save;
    QWidget *w_pagination;
    QGridLayout *gridLayout_15;
    CxPageLabel *lb_page_2;
    CxPageLabel *lb_page_3;
    CxPageLabel *lb_page_5;
    CxPageLabel *lb_page_1;
    CxPageLabel *lb_page_4;
    QToolButton *tb_next_page;
    QToolButton *tb_prev_page;
    QWidget *widget_4;
    QGridLayout *gridLayout_20;
    QToolButton *tb_undo;
    QToolButton *tb_redo;
    CxPageButton *tb_show_page;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_9;
    QGridLayout *gridLayout_12;
    QWidget *w_text_area;
    QGridLayout *gridLayout_13;
    QWidget *widget_12;
    QGridLayout *gridLayout_14;
    CxTextEdit *textEdit;
    QWidget *widget_8;
    QGridLayout *gridLayout_22;
    QToolButton *tb_copy_all;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Form_MainWindow)
    {
        if (Form_MainWindow->objectName().isEmpty())
            Form_MainWindow->setObjectName(QStringLiteral("Form_MainWindow"));
        Form_MainWindow->resize(1250, 722);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form_MainWindow->sizePolicy().hasHeightForWidth());
        Form_MainWindow->setSizePolicy(sizePolicy);
        Form_MainWindow->setMinimumSize(QSize(1250, 500));
        Form_MainWindow->setMaximumSize(QSize(11111, 111111));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Form_MainWindow->setWindowIcon(icon);
        Form_MainWindow->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#c3c3c3;\n"
"}"));
        gridLayout = new QGridLayout(Form_MainWindow);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        w_chapter_control = new QWidget(Form_MainWindow);
        w_chapter_control->setObjectName(QStringLiteral("w_chapter_control"));
        w_chapter_control->setMinimumSize(QSize(0, 60));
        w_chapter_control->setMaximumSize(QSize(16777215, 60));
        gridLayout_4 = new QGridLayout(w_chapter_control);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        tb_collect = new QToolButton(w_chapter_control);
        tb_collect->setObjectName(QStringLiteral("tb_collect"));
        tb_collect->setMinimumSize(QSize(60, 50));
        tb_collect->setMaximumSize(QSize(60, 50));
        tb_collect->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#7f7f7f;\n"
"border:none;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"background:#c3c3c3;\n"
"border:none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icon/more_page_btn_diasbled.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_collect->setIcon(icon1);
        tb_collect->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(tb_collect, 0, 3, 1, 1);

        tb_prev_chapter = new QToolButton(w_chapter_control);
        tb_prev_chapter->setObjectName(QStringLiteral("tb_prev_chapter"));
        tb_prev_chapter->setMinimumSize(QSize(100, 50));
        tb_prev_chapter->setMaximumSize(QSize(16777215, 50));
        tb_prev_chapter->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#e9e9e9;\n"
"border:none;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"background:#919191;\n"
"border:none;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icon/left-xxl.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_prev_chapter->setIcon(icon2);
        tb_prev_chapter->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(tb_prev_chapter, 0, 0, 1, 1);

        lw_chapter_list = new CxChapterList(w_chapter_control);
        lw_chapter_list->setObjectName(QStringLiteral("lw_chapter_list"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lw_chapter_list->sizePolicy().hasHeightForWidth());
        lw_chapter_list->setSizePolicy(sizePolicy1);
        lw_chapter_list->setMinimumSize(QSize(0, 50));
        lw_chapter_list->setMaximumSize(QSize(16777215, 50));
        lw_chapter_list->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"  border-top: 4px solid gray;;\n"
"  border-bottom: 4px solid #e9e9e9;\n"
"}"));
        lw_chapter_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lw_chapter_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_4->addWidget(lw_chapter_list, 0, 1, 1, 1);

        tb_next_chapter = new QToolButton(w_chapter_control);
        tb_next_chapter->setObjectName(QStringLiteral("tb_next_chapter"));
        tb_next_chapter->setMinimumSize(QSize(100, 50));
        tb_next_chapter->setMaximumSize(QSize(16777215, 50));
        tb_next_chapter->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#e9e9e9;\n"
"border:none;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"background:#919191;\n"
"border:none;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icon/right-xxl.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_next_chapter->setIcon(icon3);
        tb_next_chapter->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(tb_next_chapter, 0, 2, 1, 1);


        gridLayout->addWidget(w_chapter_control, 1, 0, 1, 1);

        w_top = new QWidget(Form_MainWindow);
        w_top->setObjectName(QStringLiteral("w_top"));
        w_top->setMinimumSize(QSize(0, 60));
        w_top->setMaximumSize(QSize(16777215, 60));
        w_top->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#919191;\n"
"}"));
        gridLayout_2 = new QGridLayout(w_top);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 10);
        widget_5 = new QWidget(w_top);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(350, 50));
        widget_5->setMaximumSize(QSize(350, 50));
        widget_5->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"border: 5px solid black;\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(5, 5, 14, 5);
        tb_menu_text = new QToolButton(widget_5);
        tb_menu_text->setObjectName(QStringLiteral("tb_menu_text"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tb_menu_text->sizePolicy().hasHeightForWidth());
        tb_menu_text->setSizePolicy(sizePolicy2);
        tb_menu_text->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Impact"));
        font.setPointSize(14);
        tb_menu_text->setFont(font);
        tb_menu_text->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border:0px;\n"
"background:#c3c3c3;\n"
"}\n"
"\n"
"QToolButton::menu-indicator { image: none; }\n"
"\n"
"QToolButton:hover\n"
"{\n"
"border:0px;\n"
"background:#83d7f3;\n"
"}\n"
"\n"
""));
        tb_menu_text->setPopupMode(QToolButton::DelayedPopup);
        tb_menu_text->setArrowType(Qt::NoArrow);

        gridLayout_3->addWidget(tb_menu_text, 0, 1, 1, 1);

        tb_menu_file = new QToolButton(widget_5);
        tb_menu_file->setObjectName(QStringLiteral("tb_menu_file"));
        sizePolicy2.setHeightForWidth(tb_menu_file->sizePolicy().hasHeightForWidth());
        tb_menu_file->setSizePolicy(sizePolicy2);
        tb_menu_file->setMaximumSize(QSize(70, 16777215));
        tb_menu_file->setFont(font);
        tb_menu_file->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border:0px;\n"
"background:#c3c3c3;\n"
"}\n"
"\n"
"QToolButton::menu-indicator { image: none; }\n"
"\n"
"QToolButton:hover\n"
"{\n"
"border:0px;\n"
"background:#83d7f3;\n"
"}\n"
"\n"
""));
        tb_menu_file->setPopupMode(QToolButton::InstantPopup);

        gridLayout_3->addWidget(tb_menu_file, 0, 0, 1, 1);

        tb_start = new QToolButton(widget_5);
        tb_start->setObjectName(QStringLiteral("tb_start"));
        sizePolicy2.setHeightForWidth(tb_start->sizePolicy().hasHeightForWidth());
        tb_start->setSizePolicy(sizePolicy2);
        tb_start->setMinimumSize(QSize(3, 35));
        tb_start->setMaximumSize(QSize(16777215, 35));
        tb_start->setFont(font);
        tb_start->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border:0px;\n"
"border:3px solid black;\n"
"background:#c3c3c3;\n"
"}\n"
"\n"
"QToolButton::menu-indicator { image: none; }\n"
"\n"
"QToolButton:hover\n"
"{\n"
"border:0px;\n"
"border:3px solid black;\n"
"background:#83d7f3;\n"
"}\n"
"\n"
""));
        tb_start->setPopupMode(QToolButton::DelayedPopup);
        tb_start->setArrowType(Qt::NoArrow);

        gridLayout_3->addWidget(tb_start, 0, 2, 1, 1);

        tb_add_chapter = new QToolButton(widget_5);
        tb_add_chapter->setObjectName(QStringLiteral("tb_add_chapter"));
        sizePolicy2.setHeightForWidth(tb_add_chapter->sizePolicy().hasHeightForWidth());
        tb_add_chapter->setSizePolicy(sizePolicy2);
        tb_add_chapter->setMinimumSize(QSize(0, 35));
        tb_add_chapter->setMaximumSize(QSize(16777215, 35));
        tb_add_chapter->setFont(font);
        tb_add_chapter->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border:0px;\n"
"background:#c3c3c3;\n"
"border:3px solid black;\n"
"\n"
"}\n"
"\n"
"QToolButton::menu-indicator { image: none; }\n"
"\n"
"QToolButton:hover\n"
"{\n"
"border:0px;\n"
"background:#83d7f3;\n"
"border:3px solid black;\n"
"}\n"
"\n"
""));
        tb_add_chapter->setPopupMode(QToolButton::DelayedPopup);
        tb_add_chapter->setArrowType(Qt::NoArrow);

        gridLayout_3->addWidget(tb_add_chapter, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget_5, 0, 0, 1, 1);

        widget_7 = new QWidget(w_top);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy3);
        widget_7->setMinimumSize(QSize(200, 0));
        gridLayout_19 = new QGridLayout(widget_7);
        gridLayout_19->setSpacing(0);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 15);
        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:black;\n"
"}"));
        gridLayout_7 = new QGridLayout(widget_6);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        tb_minimize = new QToolButton(widget_6);
        tb_minimize->setObjectName(QStringLiteral("tb_minimize"));
        tb_minimize->setMinimumSize(QSize(30, 30));
        tb_minimize->setMaximumSize(QSize(30, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icon/minimize-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_minimize->setIcon(icon4);
        tb_minimize->setIconSize(QSize(30, 30));

        gridLayout_7->addWidget(tb_minimize, 0, 1, 1, 1);

        tb_maximize = new QToolButton(widget_6);
        tb_maximize->setObjectName(QStringLiteral("tb_maximize"));
        tb_maximize->setMinimumSize(QSize(30, 30));
        tb_maximize->setMaximumSize(QSize(30, 30));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icon/maximize-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/res/icon/restore-window-256.png"), QSize(), QIcon::Normal, QIcon::On);
        tb_maximize->setIcon(icon5);
        tb_maximize->setIconSize(QSize(30, 30));
        tb_maximize->setCheckable(true);

        gridLayout_7->addWidget(tb_maximize, 0, 2, 1, 1);

        tb_close = new QToolButton(widget_6);
        tb_close->setObjectName(QStringLiteral("tb_close"));
        tb_close->setMinimumSize(QSize(30, 30));
        tb_close->setMaximumSize(QSize(30, 30));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icon/close-window-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_close->setIcon(icon6);
        tb_close->setIconSize(QSize(30, 30));

        gridLayout_7->addWidget(tb_close, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        gridLayout_19->addWidget(widget_6, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_7, 0, 2, 1, 1);

        lbl_title = new QLabel(w_top);
        lbl_title->setObjectName(QStringLiteral("lbl_title"));
        lbl_title->setMinimumSize(QSize(140, 0));
        lbl_title->setMaximumSize(QSize(500, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Impact"));
        font1.setPointSize(20);
        lbl_title->setFont(font1);
        lbl_title->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background-color:#969696;\n"
"border-top: 3px solid black;\n"
"}"));
        lbl_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbl_title, 0, 1, 1, 1);


        gridLayout->addWidget(w_top, 0, 0, 1, 1);

        w_main = new QWidget(Form_MainWindow);
        w_main->setObjectName(QStringLiteral("w_main"));
        w_main->setMinimumSize(QSize(1250, 300));
        w_main->setMaximumSize(QSize(211111, 211111));
        w_main->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:#c3c3c3;\n"
"}"));
        gridLayout_5 = new QGridLayout(w_main);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        w_content = new QWidget(w_main);
        w_content->setObjectName(QStringLiteral("w_content"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(w_content->sizePolicy().hasHeightForWidth());
        w_content->setSizePolicy(sizePolicy4);
        w_content->setMinimumSize(QSize(300, 0));
        w_content->setMaximumSize(QSize(600, 16777215));
        gridLayout_9 = new QGridLayout(w_content);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(0);
        gridLayout_9->setVerticalSpacing(5);
        gridLayout_9->setContentsMargins(0, 0, 10, 10);
        widget = new QWidget(w_content);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 40));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout_10 = new QGridLayout(widget);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(15);
        gridLayout_10->setVerticalSpacing(0);
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        tb_create_text = new CxCenterButton(widget);
        tb_create_text->setObjectName(QStringLiteral("tb_create_text"));
        sizePolicy2.setHeightForWidth(tb_create_text->sizePolicy().hasHeightForWidth());
        tb_create_text->setSizePolicy(sizePolicy2);
        tb_create_text->setFont(font);
        tb_create_text->setLayoutDirection(Qt::RightToLeft);
        tb_create_text->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#ebebeb;\n"
"border:1px solid #c3c3c3;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icon/down-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_create_text->setIcon(icon7);
        tb_create_text->setIconSize(QSize(25, 25));
        tb_create_text->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_10->addWidget(tb_create_text, 0, 1, 1, 1);

        tb_upload = new CxCenterButton(widget);
        tb_upload->setObjectName(QStringLiteral("tb_upload"));
        sizePolicy2.setHeightForWidth(tb_upload->sizePolicy().hasHeightForWidth());
        tb_upload->setSizePolicy(sizePolicy2);
        tb_upload->setFont(font);
        tb_upload->setLayoutDirection(Qt::RightToLeft);
        tb_upload->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:#ebebeb;\n"
"border:1px solid #c3c3c3;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/icon/Upload-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_upload->setIcon(icon8);
        tb_upload->setIconSize(QSize(25, 25));
        tb_upload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_10->addWidget(tb_upload, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(w_content);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 70));
        widget_2->setMaximumSize(QSize(16777215, 70));
        gridLayout_11 = new QGridLayout(widget_2);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(15);
        gridLayout_11->setVerticalSpacing(0);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        w_res_1 = new QWidget(widget_2);
        w_res_1->setObjectName(QStringLiteral("w_res_1"));
        w_res_1->setStyleSheet(QStringLiteral("QWidget{background:transparent;}"));
        gridLayout_17 = new QGridLayout(w_res_1);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        tb_res_1 = new QToolButton(w_res_1);
        tb_res_1->setObjectName(QStringLiteral("tb_res_1"));
        sizePolicy2.setHeightForWidth(tb_res_1->sizePolicy().hasHeightForWidth());
        tb_res_1->setSizePolicy(sizePolicy2);
        tb_res_1->setFont(font1);
        tb_res_1->setStyleSheet(QStringLiteral(""));

        gridLayout_17->addWidget(tb_res_1, 0, 0, 1, 1);


        gridLayout_11->addWidget(w_res_1, 0, 0, 1, 1);

        w_res_2 = new QWidget(widget_2);
        w_res_2->setObjectName(QStringLiteral("w_res_2"));
        w_res_2->setStyleSheet(QStringLiteral("QWidget{background:transparent;}"));
        gridLayout_18 = new QGridLayout(w_res_2);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        tb_res_2 = new QToolButton(w_res_2);
        tb_res_2->setObjectName(QStringLiteral("tb_res_2"));
        sizePolicy2.setHeightForWidth(tb_res_2->sizePolicy().hasHeightForWidth());
        tb_res_2->setSizePolicy(sizePolicy2);
        tb_res_2->setFont(font1);
        tb_res_2->setStyleSheet(QLatin1String("QToolButton{\n"
"color:#7f7f7f;\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color:black;\n"
" border-radius: 15px;\n"
"}"));

        gridLayout_18->addWidget(tb_res_2, 0, 0, 1, 1);


        gridLayout_11->addWidget(w_res_2, 0, 1, 1, 1);


        gridLayout_9->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(w_content);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_16 = new QGridLayout(widget_3);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        lw_res_1 = new CxResListWidget(widget_3);
        lw_res_1->setObjectName(QStringLiteral("lw_res_1"));
        sizePolicy2.setHeightForWidth(lw_res_1->sizePolicy().hasHeightForWidth());
        lw_res_1->setSizePolicy(sizePolicy2);
        lw_res_1->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"border-radius:15px;\n"
"border-style:solid;\n"
"border-width:3px;\n"
"border-color:#fff864;\n"
"background:#fff864;\n"
"}"));
        lw_res_1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lw_res_1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_16->addWidget(lw_res_1, 0, 0, 1, 1);

        lw_res_2 = new CxResListWidget(widget_3);
        lw_res_2->setObjectName(QStringLiteral("lw_res_2"));
        sizePolicy2.setHeightForWidth(lw_res_2->sizePolicy().hasHeightForWidth());
        lw_res_2->setSizePolicy(sizePolicy2);
        lw_res_2->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"border-radius:15px;\n"
"border-style:solid;\n"
"border-width:3px;\n"
"border-color:#fff864;\n"
"background:#fff864;\n"
"}"));
        lw_res_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_16->addWidget(lw_res_2, 1, 0, 1, 1);


        gridLayout_9->addWidget(widget_3, 2, 0, 1, 1);


        gridLayout_5->addWidget(w_content, 0, 1, 1, 1);

        w_text = new QWidget(w_main);
        w_text->setObjectName(QStringLiteral("w_text"));
        w_text->setMinimumSize(QSize(850, 0));
        w_text->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_6 = new QGridLayout(w_text);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        w_text_control = new QWidget(w_text);
        w_text_control->setObjectName(QStringLiteral("w_text_control"));
        w_text_control->setMinimumSize(QSize(850, 0));
        w_text_control->setMaximumSize(QSize(16777215, 40));
        gridLayout_8 = new QGridLayout(w_text_control);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(4);
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 10, 0);
        w_cfmt_bar = new QWidget(w_text_control);
        w_cfmt_bar->setObjectName(QStringLiteral("w_cfmt_bar"));
        w_cfmt_bar->setMinimumSize(QSize(500, 0));
        w_cfmt_bar->setMaximumSize(QSize(8999, 16777215));
        gridLayout_21 = new QGridLayout(w_cfmt_bar);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setHorizontalSpacing(0);
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        cb_font = new QFontComboBox(w_cfmt_bar);
        cb_font->setObjectName(QStringLiteral("cb_font"));
        sizePolicy2.setHeightForWidth(cb_font->sizePolicy().hasHeightForWidth());
        cb_font->setSizePolicy(sizePolicy2);
        cb_font->setMinimumSize(QSize(0, 30));
        cb_font->setMaximumSize(QSize(250, 30));
        cb_font->setStyleSheet(QLatin1String("QFontComboBox\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_21->addWidget(cb_font, 0, 1, 1, 1);

        cb_fontsize = new QComboBox(w_cfmt_bar);
        cb_fontsize->setObjectName(QStringLiteral("cb_fontsize"));
        cb_fontsize->setMinimumSize(QSize(0, 30));
        cb_fontsize->setMaximumSize(QSize(60, 30));
        cb_fontsize->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background:white;\n"
"}"));

        gridLayout_21->addWidget(cb_fontsize, 0, 2, 1, 1);

        tb_font_inc = new QToolButton(w_cfmt_bar);
        tb_font_inc->setObjectName(QStringLiteral("tb_font_inc"));
        tb_font_inc->setMinimumSize(QSize(30, 30));
        tb_font_inc->setMaximumSize(QSize(30, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        tb_font_inc->setFont(font2);
        tb_font_inc->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/icon/font_increase.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_font_inc->setIcon(icon9);
        tb_font_inc->setIconSize(QSize(20, 20));

        gridLayout_21->addWidget(tb_font_inc, 0, 3, 1, 1);

        tb_font_dec = new QToolButton(w_cfmt_bar);
        tb_font_dec->setObjectName(QStringLiteral("tb_font_dec"));
        tb_font_dec->setMinimumSize(QSize(30, 30));
        tb_font_dec->setMaximumSize(QSize(30, 30));
        tb_font_dec->setFont(font2);
        tb_font_dec->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/res/icon/font_decrease.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_font_dec->setIcon(icon10);
        tb_font_dec->setIconSize(QSize(20, 20));

        gridLayout_21->addWidget(tb_font_dec, 0, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_4, 0, 5, 1, 1);

        tb_bold = new QToolButton(w_cfmt_bar);
        tb_bold->setObjectName(QStringLiteral("tb_bold"));
        tb_bold->setMinimumSize(QSize(30, 30));
        tb_bold->setMaximumSize(QSize(30, 30));
        tb_bold->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/res/icon/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_bold->setIcon(icon11);
        tb_bold->setIconSize(QSize(25, 25));
        tb_bold->setCheckable(true);

        gridLayout_21->addWidget(tb_bold, 0, 6, 1, 1);

        tb_italic = new QToolButton(w_cfmt_bar);
        tb_italic->setObjectName(QStringLiteral("tb_italic"));
        tb_italic->setMinimumSize(QSize(30, 30));
        tb_italic->setMaximumSize(QSize(30, 30));
        tb_italic->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/res/icon/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_italic->setIcon(icon12);
        tb_italic->setIconSize(QSize(25, 25));
        tb_italic->setCheckable(true);

        gridLayout_21->addWidget(tb_italic, 0, 7, 1, 1);

        tb_underline = new QToolButton(w_cfmt_bar);
        tb_underline->setObjectName(QStringLiteral("tb_underline"));
        tb_underline->setMinimumSize(QSize(30, 30));
        tb_underline->setMaximumSize(QSize(30, 30));
        tb_underline->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/res/icon/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_underline->setIcon(icon13);
        tb_underline->setIconSize(QSize(25, 25));
        tb_underline->setCheckable(true);

        gridLayout_21->addWidget(tb_underline, 0, 8, 1, 1);

        tb_left = new QToolButton(w_cfmt_bar);
        buttonGroup = new QButtonGroup(Form_MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(tb_left);
        tb_left->setObjectName(QStringLiteral("tb_left"));
        tb_left->setMinimumSize(QSize(30, 30));
        tb_left->setMaximumSize(QSize(30, 30));
        tb_left->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/res/icon/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_left->setIcon(icon14);
        tb_left->setIconSize(QSize(25, 25));
        tb_left->setCheckable(true);

        gridLayout_21->addWidget(tb_left, 0, 9, 1, 1);

        tb_center = new QToolButton(w_cfmt_bar);
        buttonGroup->addButton(tb_center);
        tb_center->setObjectName(QStringLiteral("tb_center"));
        tb_center->setMinimumSize(QSize(30, 30));
        tb_center->setMaximumSize(QSize(30, 30));
        tb_center->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/res/icon/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_center->setIcon(icon15);
        tb_center->setIconSize(QSize(25, 25));
        tb_center->setCheckable(true);

        gridLayout_21->addWidget(tb_center, 0, 10, 1, 1);

        tb_right = new QToolButton(w_cfmt_bar);
        buttonGroup->addButton(tb_right);
        tb_right->setObjectName(QStringLiteral("tb_right"));
        tb_right->setMinimumSize(QSize(30, 30));
        tb_right->setMaximumSize(QSize(30, 30));
        tb_right->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/res/icon/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_right->setIcon(icon16);
        tb_right->setIconSize(QSize(25, 25));
        tb_right->setCheckable(true);

        gridLayout_21->addWidget(tb_right, 0, 11, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_3, 0, 12, 1, 1);

        w_textcolor = new CxColorWidget(w_cfmt_bar);
        w_textcolor->setObjectName(QStringLiteral("w_textcolor"));
        w_textcolor->setMinimumSize(QSize(45, 30));
        w_textcolor->setMaximumSize(QSize(45, 30));

        gridLayout_21->addWidget(w_textcolor, 0, 13, 1, 1);

        w_highlightcolor = new CxColorWidget(w_cfmt_bar);
        w_highlightcolor->setObjectName(QStringLiteral("w_highlightcolor"));
        w_highlightcolor->setMinimumSize(QSize(45, 30));
        w_highlightcolor->setMaximumSize(QSize(45, 30));

        gridLayout_21->addWidget(w_highlightcolor, 0, 14, 1, 1);

        w_backgroundcolor = new CxColorWidget(w_cfmt_bar);
        w_backgroundcolor->setObjectName(QStringLiteral("w_backgroundcolor"));
        w_backgroundcolor->setMinimumSize(QSize(45, 30));
        w_backgroundcolor->setMaximumSize(QSize(45, 30));

        gridLayout_21->addWidget(w_backgroundcolor, 0, 15, 1, 1);

        tb_pdf = new QToolButton(w_cfmt_bar);
        tb_pdf->setObjectName(QStringLiteral("tb_pdf"));
        tb_pdf->setMinimumSize(QSize(30, 30));
        tb_pdf->setMaximumSize(QSize(30, 30));
        tb_pdf->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/res/icon/exportpdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_pdf->setIcon(icon17);
        tb_pdf->setIconSize(QSize(32, 32));

        gridLayout_21->addWidget(tb_pdf, 0, 16, 1, 1);

        tb_print = new QToolButton(w_cfmt_bar);
        tb_print->setObjectName(QStringLiteral("tb_print"));
        tb_print->setMinimumSize(QSize(30, 30));
        tb_print->setMaximumSize(QSize(30, 30));
        tb_print->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/res/icon/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_print->setIcon(icon18);
        tb_print->setIconSize(QSize(32, 32));

        gridLayout_21->addWidget(tb_print, 0, 17, 1, 1);

        tb_save = new QToolButton(w_cfmt_bar);
        tb_save->setObjectName(QStringLiteral("tb_save"));
        tb_save->setMinimumSize(QSize(30, 30));
        tb_save->setMaximumSize(QSize(30, 30));
        tb_save->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:white;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background:#e5e5e5;\n"
"}"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/res/icon/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_save->setIcon(icon19);
        tb_save->setIconSize(QSize(32, 32));

        gridLayout_21->addWidget(tb_save, 0, 18, 1, 1);


        gridLayout_8->addWidget(w_cfmt_bar, 0, 2, 1, 1);

        w_pagination = new QWidget(w_text_control);
        w_pagination->setObjectName(QStringLiteral("w_pagination"));
        w_pagination->setMinimumSize(QSize(270, 40));
        w_pagination->setMaximumSize(QSize(270, 40));
        w_pagination->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"}"));
        gridLayout_15 = new QGridLayout(w_pagination);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setHorizontalSpacing(3);
        gridLayout_15->setVerticalSpacing(0);
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        lb_page_2 = new CxPageLabel(w_pagination);
        lb_page_2->setObjectName(QStringLiteral("lb_page_2"));
        lb_page_2->setMinimumSize(QSize(20, 30));
        lb_page_2->setMaximumSize(QSize(20, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Impact"));
        font3.setPointSize(28);
        lb_page_2->setFont(font3);
        lb_page_2->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:none;\n"
"}"));
        lb_page_2->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_2, 0, 2, 1, 1);

        lb_page_3 = new CxPageLabel(w_pagination);
        lb_page_3->setObjectName(QStringLiteral("lb_page_3"));
        lb_page_3->setMinimumSize(QSize(20, 30));
        lb_page_3->setMaximumSize(QSize(20, 30));
        lb_page_3->setFont(font3);
        lb_page_3->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_3, 0, 3, 1, 1);

        lb_page_5 = new CxPageLabel(w_pagination);
        lb_page_5->setObjectName(QStringLiteral("lb_page_5"));
        lb_page_5->setMinimumSize(QSize(20, 30));
        lb_page_5->setMaximumSize(QSize(20, 30));
        lb_page_5->setFont(font3);
        lb_page_5->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_5, 0, 5, 1, 1);

        lb_page_1 = new CxPageLabel(w_pagination);
        lb_page_1->setObjectName(QStringLiteral("lb_page_1"));
        lb_page_1->setMinimumSize(QSize(20, 30));
        lb_page_1->setMaximumSize(QSize(20, 30));
        lb_page_1->setFont(font3);
        lb_page_1->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_1, 0, 1, 1, 1);

        lb_page_4 = new CxPageLabel(w_pagination);
        lb_page_4->setObjectName(QStringLiteral("lb_page_4"));
        lb_page_4->setMinimumSize(QSize(20, 30));
        lb_page_4->setMaximumSize(QSize(20, 30));
        lb_page_4->setFont(font3);
        lb_page_4->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(lb_page_4, 0, 4, 1, 1);

        tb_next_page = new QToolButton(w_pagination);
        tb_next_page->setObjectName(QStringLiteral("tb_next_page"));
        tb_next_page->setMinimumSize(QSize(20, 30));
        tb_next_page->setMaximumSize(QSize(20, 30));
        tb_next_page->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background:transparent;\n"
"}"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/res/icon/arrow-dropright-icon_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_next_page->setIcon(icon20);
        tb_next_page->setIconSize(QSize(100, 100));

        gridLayout_15->addWidget(tb_next_page, 0, 7, 1, 1);

        tb_prev_page = new QToolButton(w_pagination);
        tb_prev_page->setObjectName(QStringLiteral("tb_prev_page"));
        tb_prev_page->setMinimumSize(QSize(20, 30));
        tb_prev_page->setMaximumSize(QSize(20, 30));
        tb_prev_page->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background-color:transparent;\n"
"}"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/res/icon/arrow-dropleft-icon_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_prev_page->setIcon(icon21);
        tb_prev_page->setIconSize(QSize(50, 50));

        gridLayout_15->addWidget(tb_prev_page, 0, 0, 1, 1);

        widget_4 = new QWidget(w_pagination);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(65, 0));
        widget_4->setMaximumSize(QSize(65, 16777215));
        widget_4->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:white;\n"
"border: 1px solid blue;\n"
"}"));
        gridLayout_20 = new QGridLayout(widget_4);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        gridLayout_20->setHorizontalSpacing(0);
        gridLayout_20->setVerticalSpacing(5);
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        tb_undo = new QToolButton(widget_4);
        tb_undo->setObjectName(QStringLiteral("tb_undo"));
        tb_undo->setMinimumSize(QSize(30, 30));
        tb_undo->setMaximumSize(QSize(30, 30));
        tb_undo->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background-color:transparent;\n"
"border:none;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"border:0px;\n"
"background:#83d7f3;\n"
"}\n"
""));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/res/icon/Undo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_undo->setIcon(icon22);
        tb_undo->setIconSize(QSize(25, 25));

        gridLayout_20->addWidget(tb_undo, 0, 0, 1, 1);

        tb_redo = new QToolButton(widget_4);
        tb_redo->setObjectName(QStringLiteral("tb_redo"));
        tb_redo->setMinimumSize(QSize(30, 30));
        tb_redo->setMaximumSize(QSize(30, 30));
        tb_redo->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"background-color:transparent;\n"
"border:none;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"border:0px;\n"
"background:#83d7f3;\n"
"}\n"
""));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/res/icon/Redo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_redo->setIcon(icon23);
        tb_redo->setIconSize(QSize(25, 25));

        gridLayout_20->addWidget(tb_redo, 0, 1, 1, 1);


        gridLayout_15->addWidget(widget_4, 0, 10, 1, 1);

        tb_show_page = new CxPageButton(w_pagination);
        tb_show_page->setObjectName(QStringLiteral("tb_show_page"));
        tb_show_page->setEnabled(true);
        tb_show_page->setMinimumSize(QSize(40, 40));
        tb_show_page->setMaximumSize(QSize(40, 40));
        tb_show_page->setIcon(icon1);
        tb_show_page->setIconSize(QSize(40, 40));

        gridLayout_15->addWidget(tb_show_page, 0, 9, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_2, 0, 8, 1, 1);


        gridLayout_8->addWidget(w_pagination, 0, 0, 1, 1);


        gridLayout_6->addWidget(w_text_control, 0, 0, 1, 1);

        widget_9 = new QWidget(w_text);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMinimumSize(QSize(800, 0));
        widget_9->setMaximumSize(QSize(101111, 16777215));
        gridLayout_12 = new QGridLayout(widget_9);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        w_text_area = new QWidget(widget_9);
        w_text_area->setObjectName(QStringLiteral("w_text_area"));
        w_text_area->setMinimumSize(QSize(400, 0));
        w_text_area->setMaximumSize(QSize(16777215, 16777215));
        w_text_area->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background:white;\n"
"border: 15px solid #ababab;\n"
"}"));
        gridLayout_13 = new QGridLayout(w_text_area);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setVerticalSpacing(0);
        gridLayout_13->setContentsMargins(20, 20, 40, 30);
        widget_12 = new QWidget(w_text_area);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        gridLayout_14 = new QGridLayout(widget_12);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        textEdit = new CxTextEdit(widget_12);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        textEdit->setMinimumSize(QSize(400, 0));
        textEdit->setMaximumSize(QSize(111111, 16777215));
        textEdit->setStyleSheet(QLatin1String("QTextEdit\n"
"{\n"
"background:white;\n"
"border:1px solid #a0a0a0;\n"
"}"));

        gridLayout_14->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_13->addWidget(widget_12, 1, 1, 1, 1);

        widget_8 = new QWidget(w_text_area);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(30, 0));
        widget_8->setMaximumSize(QSize(30, 16777215));
        widget_8->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"border:none;\n"
"}"));
        gridLayout_22 = new QGridLayout(widget_8);
        gridLayout_22->setSpacing(0);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        tb_copy_all = new QToolButton(widget_8);
        tb_copy_all->setObjectName(QStringLiteral("tb_copy_all"));
        tb_copy_all->setMinimumSize(QSize(30, 30));
        tb_copy_all->setMaximumSize(QSize(30, 30));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/res/icon/red-book.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_copy_all->setIcon(icon24);
        tb_copy_all->setIconSize(QSize(30, 30));

        gridLayout_22->addWidget(tb_copy_all, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_22->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_13->addWidget(widget_8, 1, 0, 1, 1);


        gridLayout_12->addWidget(w_text_area, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_9, 1, 0, 1, 1);


        gridLayout_5->addWidget(w_text, 0, 0, 1, 1);


        gridLayout->addWidget(w_main, 2, 0, 1, 1);


        retranslateUi(Form_MainWindow);

        QMetaObject::connectSlotsByName(Form_MainWindow);
    } // setupUi

    void retranslateUi(QWidget *Form_MainWindow)
    {
        Form_MainWindow->setWindowTitle(QApplication::translate("Form_MainWindow", "Form", 0));
        tb_collect->setText(QApplication::translate("Form_MainWindow", "->", 0));
        tb_prev_chapter->setText(QApplication::translate("Form_MainWindow", "<-", 0));
        tb_next_chapter->setText(QApplication::translate("Form_MainWindow", "->", 0));
        tb_menu_text->setText(QApplication::translate("Form_MainWindow", "TEXT", 0));
        tb_menu_file->setText(QApplication::translate("Form_MainWindow", "FILE", 0));
        tb_start->setText(QApplication::translate("Form_MainWindow", "START", 0));
        tb_add_chapter->setText(QApplication::translate("Form_MainWindow", "ADD CHAP", 0));
        tb_minimize->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_maximize->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_close->setText(QApplication::translate("Form_MainWindow", "...", 0));
        lbl_title->setText(QString());
        tb_create_text->setText(QApplication::translate("Form_MainWindow", "CREATE TEXT", 0));
        tb_upload->setText(QApplication::translate("Form_MainWindow", "UPLOAD FILE ", 0));
        tb_res_1->setText(QApplication::translate("Form_MainWindow", "CONTENT+", 0));
        tb_res_2->setText(QApplication::translate("Form_MainWindow", "CONTENT-", 0));
        tb_font_inc->setText(QApplication::translate("Form_MainWindow", "A+", 0));
        tb_font_dec->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_bold->setText(QApplication::translate("Form_MainWindow", "B", 0));
        tb_italic->setText(QApplication::translate("Form_MainWindow", "I", 0));
        tb_underline->setText(QApplication::translate("Form_MainWindow", "U", 0));
        tb_left->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_center->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_right->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_pdf->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_print->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        tb_save->setText(QApplication::translate("Form_MainWindow", "A-", 0));
        lb_page_2->setText(QApplication::translate("Form_MainWindow", "2", 0));
        lb_page_3->setText(QApplication::translate("Form_MainWindow", "3", 0));
        lb_page_5->setText(QApplication::translate("Form_MainWindow", "5", 0));
        lb_page_1->setText(QApplication::translate("Form_MainWindow", "1", 0));
        lb_page_4->setText(QApplication::translate("Form_MainWindow", "4", 0));
        tb_next_page->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_prev_page->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_undo->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_redo->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_show_page->setText(QApplication::translate("Form_MainWindow", "...", 0));
        tb_copy_all->setText(QApplication::translate("Form_MainWindow", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_MainWindow: public Ui_Form_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
