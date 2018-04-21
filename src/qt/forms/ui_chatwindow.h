/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QWidget *hide3;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_5;
    QLineEdit *editPseudo;
    QPushButton *buttonConnect;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QWidget *splitter;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit;
    QListView *userView;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QPushButton *disconnect;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QStringLiteral("ChatWindowClass"));
        ChatWindowClass->resize(747, 514);
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QStringLiteral("actionCloseTab"));
        gridLayout_2 = new QGridLayout(ChatWindowClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_2 = new QWidget(ChatWindowClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QStringLiteral("hide3"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hide3->sizePolicy().hasHeightForWidth());
        hide3->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(hide3);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_9 = new QLabel(hide3);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Open Sans,sans-serif"));
        label_9->setFont(font);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_9);

        label_10 = new QLabel(hide3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_10);

        label_5 = new QLabel(hide3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        editPseudo = new QLineEdit(hide3);
        editPseudo->setObjectName(QStringLiteral("editPseudo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editPseudo->sizePolicy().hasHeightForWidth());
        editPseudo->setSizePolicy(sizePolicy2);
        editPseudo->setStyleSheet(QLatin1String("\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"border: 2px solid #000000;\n"
"min-height: 25px;\n"
"max-height: 25px;\n"
"min-width: 175px;\n"
"max-width: 175px;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editPseudo);

        buttonConnect = new QPushButton(hide3);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));
        sizePolicy2.setHeightForWidth(buttonConnect->sizePolicy().hasHeightForWidth());
        buttonConnect->setSizePolicy(sizePolicy2);
        buttonConnect->setMinimumSize(QSize(129, 29));
        buttonConnect->setStyleSheet(QLatin1String("border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"border: 2px solid #000000;\n"
"min-height: 25px;\n"
"max-height: 25px;\n"
"min-width: 125px;\n"
"max-width: 125px;"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, buttonConnect);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::LabelRole, verticalSpacer_2);

        label = new QLabel(hide3);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, label);

        label_9->raise();
        editPseudo->raise();
        label_5->raise();
        buttonConnect->raise();
        label_10->raise();
        label->raise();

        gridLayout_3->addWidget(hide3, 0, 0, 1, 1);

        splitter = new QWidget(widget_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setEnabled(true);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setStyleSheet(QStringLiteral(""));
        gridLayout_4 = new QGridLayout(splitter);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);
        lineEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout_4->addWidget(lineEdit, 3, 0, 1, 2);

        userView = new QListView(splitter);
        userView->setObjectName(QStringLiteral("userView"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(userView->sizePolicy().hasHeightForWidth());
        userView->setSizePolicy(sizePolicy4);
        userView->setMinimumSize(QSize(0, 300));
        userView->setMaximumSize(QSize(150, 16777215));
        userView->setStyleSheet(QStringLiteral("border-radius:40px;border:1px solid grey"));

        gridLayout_4->addWidget(userView, 0, 1, 1, 1);

        tab = new QTabWidget(splitter);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QStringLiteral(""));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QStringLiteral("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab->addTab(tab_5, QString());

        gridLayout_4->addWidget(tab, 0, 0, 3, 1);

        disconnect = new QPushButton(splitter);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(disconnect->sizePolicy().hasHeightForWidth());
        disconnect->setSizePolicy(sizePolicy5);
        disconnect->setMinimumSize(QSize(154, 29));
        disconnect->setStyleSheet(QLatin1String("border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"border: 2px solid #000000;\n"
"min-height: 25px;\n"
"max-height: 25px;\n"
"min-width: 150px;\n"
"max-width: 150px;"));

        gridLayout_4->addWidget(disconnect, 1, 1, 2, 1);

        tab->raise();
        lineEdit->raise();
        userView->raise();
        disconnect->raise();

        gridLayout_3->addWidget(splitter, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);


        retranslateUi(ChatWindowClass);

        tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", 0));
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", 0));
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", 0));
        label_9->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">RIchCoin Chat</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-weight:600; color:#000000;\">Connect to IRC:</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" color:#000000;\">Nickname</span></p></body></html>", 0));
        editPseudo->setText(QString());
        buttonConnect->setText(QApplication::translate("ChatWindowClass", "Connect", 0));
        label->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p>A few IRC commands :</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 7px; margin-right: 0px; -qt-list-indent: 0;\"><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/JOIN #channel <span style=\" color:#9a9a9a;\">Join a channel</span></li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/NICK nickname <span style=\" color:#9a9a9a;\">Change nickname</span></li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/PRIVMSG nickname message <span style=\" color:#9a9a9a;\">Send PM </span></li></ul><p>If userlist gets buggy, switch tabs to fix</p></body></html>", 0));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("ChatWindowClass", "Tab 1", 0));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("ChatWindowClass", "Tab 2", 0));
        disconnect->setText(QApplication::translate("ChatWindowClass", "Disconnect", 0));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
