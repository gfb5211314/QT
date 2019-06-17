/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_12;
    QTextBrowser *textBrowser_RX;
    QPushButton *pushButton_rhex;
    QPushButton *pushButton_cleardata;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *comboBox_serial_port_select;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *comboBox_parity;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *comboBox_baud;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_databit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBox_stopbit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *pushButton_open_serial;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_check_version_data;
    QPushButton *pushButton_check_version_data;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_data_file;
    QPushButton *pushButton_open_flie_data;
    QPushButton *pushButton_start_update_data;
    QProgressBar *progressBar_data;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_check_version_paper;
    QPushButton *pushButton_check_version_paper;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_paper_file;
    QPushButton *pushButton_open_file_paper;
    QPushButton *pushButton_start_update_paper;
    QProgressBar *progressBar_paper;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_check_version_door;
    QPushButton *pushButton_check_version_door;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_door_file;
    QPushButton *pushButton_open_file_door;
    QPushButton *pushButton_start_update_door;
    QProgressBar *progressBar_door;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEdit_check_version_cream;
    QPushButton *pushButton_check_version_cream;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *lineEdit_cream_file;
    QPushButton *pushButton_open_file_cream;
    QPushButton *pushButton_start_update_cream;
    QProgressBar *progressBar_cream;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *lineEdit_check_version_cup;
    QPushButton *pushButton_check_version_cup;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *lineEdit_open_file_cup;
    QPushButton *pushButton_open_file_cup;
    QPushButton *pushButton_start_update_cup;
    QProgressBar *progressBar_cup;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(932, 690);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(40, 530, 101, 23));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(40, 570, 101, 23));
        dateTimeEdit = new QDateTimeEdit(centralWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(490, 570, 221, 22));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(490, 540, 54, 12));
        textBrowser_RX = new QTextBrowser(centralWidget);
        textBrowser_RX->setObjectName(QStringLiteral("textBrowser_RX"));
        textBrowser_RX->setGeometry(QRect(200, 220, 271, 291));
        pushButton_rhex = new QPushButton(centralWidget);
        pushButton_rhex->setObjectName(QStringLiteral("pushButton_rhex"));
        pushButton_rhex->setGeometry(QRect(230, 170, 75, 23));
        pushButton_cleardata = new QPushButton(centralWidget);
        pushButton_cleardata->setObjectName(QStringLiteral("pushButton_cleardata"));
        pushButton_cleardata->setGeometry(QRect(350, 170, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 90, 141, 397));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_6->addWidget(label);

        comboBox_serial_port_select = new QComboBox(layoutWidget);
        comboBox_serial_port_select->setObjectName(QStringLiteral("comboBox_serial_port_select"));

        horizontalLayout_6->addWidget(comboBox_serial_port_select);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_2->addWidget(label_5);

        comboBox_parity = new QComboBox(layoutWidget);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        horizontalLayout_2->addWidget(comboBox_parity);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_5->addWidget(label_2);

        comboBox_baud = new QComboBox(layoutWidget);
        comboBox_baud->setObjectName(QStringLiteral("comboBox_baud"));

        horizontalLayout_5->addWidget(comboBox_baud);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_3->addWidget(label_4);

        comboBox_databit = new QComboBox(layoutWidget);
        comboBox_databit->setObjectName(QStringLiteral("comboBox_databit"));

        horizontalLayout_3->addWidget(comboBox_databit);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_4->addWidget(label_3);

        comboBox_stopbit = new QComboBox(layoutWidget);
        comboBox_stopbit->setObjectName(QStringLiteral("comboBox_stopbit"));

        horizontalLayout_4->addWidget(comboBox_stopbit);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFrameShape(QFrame::StyledPanel);

        horizontalLayout->addWidget(label_6);

        pushButton_open_serial = new QPushButton(layoutWidget);
        pushButton_open_serial->setObjectName(QStringLiteral("pushButton_open_serial"));

        horizontalLayout->addWidget(pushButton_open_serial);


        gridLayout->addLayout(horizontalLayout, 10, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 9, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(490, 80, 419, 432));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEdit_check_version_data = new QLineEdit(layoutWidget1);
        lineEdit_check_version_data->setObjectName(QStringLiteral("lineEdit_check_version_data"));

        horizontalLayout_7->addWidget(lineEdit_check_version_data);

        pushButton_check_version_data = new QPushButton(layoutWidget1);
        pushButton_check_version_data->setObjectName(QStringLiteral("pushButton_check_version_data"));

        horizontalLayout_7->addWidget(pushButton_check_version_data);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEdit_data_file = new QLineEdit(layoutWidget1);
        lineEdit_data_file->setObjectName(QStringLiteral("lineEdit_data_file"));

        horizontalLayout_8->addWidget(lineEdit_data_file);

        pushButton_open_flie_data = new QPushButton(layoutWidget1);
        pushButton_open_flie_data->setObjectName(QStringLiteral("pushButton_open_flie_data"));

        horizontalLayout_8->addWidget(pushButton_open_flie_data);

        pushButton_start_update_data = new QPushButton(layoutWidget1);
        pushButton_start_update_data->setObjectName(QStringLiteral("pushButton_start_update_data"));

        horizontalLayout_8->addWidget(pushButton_start_update_data);

        progressBar_data = new QProgressBar(layoutWidget1);
        progressBar_data->setObjectName(QStringLiteral("progressBar_data"));
        progressBar_data->setValue(0);

        horizontalLayout_8->addWidget(progressBar_data);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_8);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lineEdit_check_version_paper = new QLineEdit(layoutWidget1);
        lineEdit_check_version_paper->setObjectName(QStringLiteral("lineEdit_check_version_paper"));

        horizontalLayout_9->addWidget(lineEdit_check_version_paper);

        pushButton_check_version_paper = new QPushButton(layoutWidget1);
        pushButton_check_version_paper->setObjectName(QStringLiteral("pushButton_check_version_paper"));

        horizontalLayout_9->addWidget(pushButton_check_version_paper);


        formLayout->setLayout(6, QFormLayout::LabelRole, horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lineEdit_paper_file = new QLineEdit(layoutWidget1);
        lineEdit_paper_file->setObjectName(QStringLiteral("lineEdit_paper_file"));

        horizontalLayout_10->addWidget(lineEdit_paper_file);

        pushButton_open_file_paper = new QPushButton(layoutWidget1);
        pushButton_open_file_paper->setObjectName(QStringLiteral("pushButton_open_file_paper"));

        horizontalLayout_10->addWidget(pushButton_open_file_paper);

        pushButton_start_update_paper = new QPushButton(layoutWidget1);
        pushButton_start_update_paper->setObjectName(QStringLiteral("pushButton_start_update_paper"));

        horizontalLayout_10->addWidget(pushButton_start_update_paper);

        progressBar_paper = new QProgressBar(layoutWidget1);
        progressBar_paper->setObjectName(QStringLiteral("progressBar_paper"));
        progressBar_paper->setValue(0);

        horizontalLayout_10->addWidget(progressBar_paper);


        formLayout->setLayout(8, QFormLayout::LabelRole, horizontalLayout_10);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lineEdit_check_version_door = new QLineEdit(layoutWidget1);
        lineEdit_check_version_door->setObjectName(QStringLiteral("lineEdit_check_version_door"));

        horizontalLayout_11->addWidget(lineEdit_check_version_door);

        pushButton_check_version_door = new QPushButton(layoutWidget1);
        pushButton_check_version_door->setObjectName(QStringLiteral("pushButton_check_version_door"));

        horizontalLayout_11->addWidget(pushButton_check_version_door);


        formLayout->setLayout(10, QFormLayout::LabelRole, horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        lineEdit_door_file = new QLineEdit(layoutWidget1);
        lineEdit_door_file->setObjectName(QStringLiteral("lineEdit_door_file"));

        horizontalLayout_12->addWidget(lineEdit_door_file);

        pushButton_open_file_door = new QPushButton(layoutWidget1);
        pushButton_open_file_door->setObjectName(QStringLiteral("pushButton_open_file_door"));

        horizontalLayout_12->addWidget(pushButton_open_file_door);

        pushButton_start_update_door = new QPushButton(layoutWidget1);
        pushButton_start_update_door->setObjectName(QStringLiteral("pushButton_start_update_door"));

        horizontalLayout_12->addWidget(pushButton_start_update_door);

        progressBar_door = new QProgressBar(layoutWidget1);
        progressBar_door->setObjectName(QStringLiteral("progressBar_door"));
        progressBar_door->setValue(0);

        horizontalLayout_12->addWidget(progressBar_door);


        formLayout->setLayout(12, QFormLayout::LabelRole, horizontalLayout_12);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        lineEdit_check_version_cream = new QLineEdit(layoutWidget1);
        lineEdit_check_version_cream->setObjectName(QStringLiteral("lineEdit_check_version_cream"));

        horizontalLayout_13->addWidget(lineEdit_check_version_cream);

        pushButton_check_version_cream = new QPushButton(layoutWidget1);
        pushButton_check_version_cream->setObjectName(QStringLiteral("pushButton_check_version_cream"));

        horizontalLayout_13->addWidget(pushButton_check_version_cream);


        formLayout->setLayout(14, QFormLayout::LabelRole, horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lineEdit_cream_file = new QLineEdit(layoutWidget1);
        lineEdit_cream_file->setObjectName(QStringLiteral("lineEdit_cream_file"));

        horizontalLayout_14->addWidget(lineEdit_cream_file);

        pushButton_open_file_cream = new QPushButton(layoutWidget1);
        pushButton_open_file_cream->setObjectName(QStringLiteral("pushButton_open_file_cream"));

        horizontalLayout_14->addWidget(pushButton_open_file_cream);

        pushButton_start_update_cream = new QPushButton(layoutWidget1);
        pushButton_start_update_cream->setObjectName(QStringLiteral("pushButton_start_update_cream"));

        horizontalLayout_14->addWidget(pushButton_start_update_cream);

        progressBar_cream = new QProgressBar(layoutWidget1);
        progressBar_cream->setObjectName(QStringLiteral("progressBar_cream"));
        progressBar_cream->setValue(0);

        horizontalLayout_14->addWidget(progressBar_cream);


        formLayout->setLayout(16, QFormLayout::LabelRole, horizontalLayout_14);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(17, QFormLayout::LabelRole, label_11);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        lineEdit_check_version_cup = new QLineEdit(layoutWidget1);
        lineEdit_check_version_cup->setObjectName(QStringLiteral("lineEdit_check_version_cup"));

        horizontalLayout_15->addWidget(lineEdit_check_version_cup);

        pushButton_check_version_cup = new QPushButton(layoutWidget1);
        pushButton_check_version_cup->setObjectName(QStringLiteral("pushButton_check_version_cup"));

        horizontalLayout_15->addWidget(pushButton_check_version_cup);


        formLayout->setLayout(18, QFormLayout::LabelRole, horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        lineEdit_open_file_cup = new QLineEdit(layoutWidget1);
        lineEdit_open_file_cup->setObjectName(QStringLiteral("lineEdit_open_file_cup"));

        horizontalLayout_16->addWidget(lineEdit_open_file_cup);

        pushButton_open_file_cup = new QPushButton(layoutWidget1);
        pushButton_open_file_cup->setObjectName(QStringLiteral("pushButton_open_file_cup"));

        horizontalLayout_16->addWidget(pushButton_open_file_cup);

        pushButton_start_update_cup = new QPushButton(layoutWidget1);
        pushButton_start_update_cup->setObjectName(QStringLiteral("pushButton_start_update_cup"));

        horizontalLayout_16->addWidget(pushButton_start_update_cup);

        progressBar_cup = new QProgressBar(layoutWidget1);
        progressBar_cup->setObjectName(QStringLiteral("progressBar_cup"));
        progressBar_cup->setValue(0);

        horizontalLayout_16->addWidget(progressBar_cup);


        formLayout->setLayout(20, QFormLayout::LabelRole, horizontalLayout_16);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer_7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::LabelRole, verticalSpacer_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(11, QFormLayout::LabelRole, verticalSpacer_9);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(15, QFormLayout::LabelRole, verticalSpacer_10);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(19, QFormLayout::LabelRole, verticalSpacer_11);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 932, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\345\215\207\347\272\247", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\266\351\227\264", Q_NULLPTR));
        pushButton_rhex->setText(QApplication::translate("MainWindow", "RHex", Q_NULLPTR));
        pushButton_cleardata->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214", Q_NULLPTR));
        comboBox_parity->clear();
        comboBox_parity->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        comboBox_baud->clear();
        comboBox_baud->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "460800", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        comboBox_databit->clear();
        comboBox_databit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        comboBox_stopbit->clear();
        comboBox_stopbit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\346\223\215\344\275\234", Q_NULLPTR));
        pushButton_open_serial->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\216\247\345\210\266\345\231\250", Q_NULLPTR));
        pushButton_check_version_data->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\211\210\346\234\254", Q_NULLPTR));
        pushButton_open_flie_data->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_start_update_data->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\215\207\347\272\247", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\346\234\252\345\274\200\345\220\257", Q_NULLPTR));
        pushButton_check_version_paper->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\211\210\346\234\254", Q_NULLPTR));
        pushButton_open_file_paper->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_start_update_paper->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\215\207\347\272\247", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\234\252\345\274\200\345\220\257", Q_NULLPTR));
        pushButton_check_version_door->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\211\210\346\234\254", Q_NULLPTR));
        pushButton_open_file_door->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_start_update_door->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\215\207\347\272\247", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\346\234\252\345\274\200\345\220\257", Q_NULLPTR));
        pushButton_check_version_cream->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\211\210\346\234\254", Q_NULLPTR));
        pushButton_open_file_cream->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_start_update_cream->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\215\207\347\272\247", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\346\234\252\345\274\200\345\220\257", Q_NULLPTR));
        pushButton_check_version_cup->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\211\210\346\234\254", Q_NULLPTR));
        pushButton_open_file_cup->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_start_update_cup->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\215\207\347\272\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
