/********************************************************************************
** Form generated from reading UI file 'SQL.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQL_H
#define UI_SQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SQLClass
{
public:
    QWidget *centralWidget;
    QComboBox *test;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SQLClass)
    {
        if (SQLClass->objectName().isEmpty())
            SQLClass->setObjectName(QStringLiteral("SQLClass"));
        SQLClass->resize(600, 400);
        centralWidget = new QWidget(SQLClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        test = new QComboBox(centralWidget);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(260, 170, 69, 22));
        SQLClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SQLClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        SQLClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SQLClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SQLClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SQLClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SQLClass->setStatusBar(statusBar);

        retranslateUi(SQLClass);

        QMetaObject::connectSlotsByName(SQLClass);
    } // setupUi

    void retranslateUi(QMainWindow *SQLClass)
    {
        SQLClass->setWindowTitle(QApplication::translate("SQLClass", "SQL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SQLClass: public Ui_SQLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQL_H
