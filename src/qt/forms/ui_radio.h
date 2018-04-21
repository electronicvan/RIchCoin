/********************************************************************************
** Form generated from reading UI file 'radio.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIO_H
#define UI_RADIO_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Radio
{
public:
    QVBoxLayout *verticalLayout;
    QWebView *webView;

    void setupUi(QWidget *Radio)
    {
        if (Radio->objectName().isEmpty())
            Radio->setObjectName(QStringLiteral("Radio"));
        Radio->resize(1066, 600);
        verticalLayout = new QVBoxLayout(Radio);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        webView = new QWebView(Radio);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setProperty("url", QVariant(QUrl(QStringLiteral("http://radiocrypto.com/index.html"))));

        verticalLayout->addWidget(webView);


        retranslateUi(Radio);

        QMetaObject::connectSlotsByName(Radio);
    } // setupUi

    void retranslateUi(QWidget *Radio)
    {
        Radio->setWindowTitle(QApplication::translate("Radio", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Radio: public Ui_Radio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIO_H
