/********************************************************************************
** Form generated from reading UI file 'LexiEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEXIEDITOR_H
#define UI_LEXIEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LexiEditorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LexiEditorClass)
    {
        if (LexiEditorClass->objectName().isEmpty())
            LexiEditorClass->setObjectName(QStringLiteral("LexiEditorClass"));
        LexiEditorClass->resize(600, 400);
        menuBar = new QMenuBar(LexiEditorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LexiEditorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LexiEditorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LexiEditorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LexiEditorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LexiEditorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LexiEditorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LexiEditorClass->setStatusBar(statusBar);

        retranslateUi(LexiEditorClass);

        QMetaObject::connectSlotsByName(LexiEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *LexiEditorClass)
    {
        LexiEditorClass->setWindowTitle(QApplication::translate("LexiEditorClass", "LexiEditor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LexiEditorClass: public Ui_LexiEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEXIEDITOR_H
