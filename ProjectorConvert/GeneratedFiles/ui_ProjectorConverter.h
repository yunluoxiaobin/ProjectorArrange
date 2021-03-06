/********************************************************************************
** Form generated from reading UI file 'ProjectorConverter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTORCONVERTER_H
#define UI_PROJECTORCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ProjectorConverter
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    MapWidget *widgetProjector;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxScreenWidth;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxScreenHeight;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBoxDistanceToScreen;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBoxDisBelow;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_20;
    QSpinBox *spinBoxDisMid;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_18;
    QDoubleSpinBox *doubleSpinBoxDistanceToRealScreen;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBoxRotateX;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBoxRotateY;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBoxRotateZ;
    QLabel *label_14;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_24;
    QSpinBox *spinBoxx;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_23;
    QSpinBox *spinBoxy;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_21;
    QSpinBox *spinBoxz;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_22;
    QSpinBox *spinBoxr;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_26;
    QSpinBox *spinBoxtheta;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_25;
    QSpinBox *spinBoxphi;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_27;
    QSpinBox *spinBoxdelta;

    void setupUi(QWidget *ProjectorConverter)
    {
        if (ProjectorConverter->objectName().isEmpty())
            ProjectorConverter->setObjectName(QStringLiteral("ProjectorConverter"));
        ProjectorConverter->resize(870, 680);
        gridLayout_2 = new QGridLayout(ProjectorConverter);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widgetProjector = new MapWidget(ProjectorConverter);
        widgetProjector->setObjectName(QStringLiteral("widgetProjector"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(widgetProjector->sizePolicy().hasHeightForWidth());
        widgetProjector->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widgetProjector, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(ProjectorConverter);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(ProjectorConverter);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        doubleSpinBoxScreenWidth = new QDoubleSpinBox(ProjectorConverter);
        doubleSpinBoxScreenWidth->setObjectName(QStringLiteral("doubleSpinBoxScreenWidth"));
        doubleSpinBoxScreenWidth->setMaximum(1e+15);
        doubleSpinBoxScreenWidth->setValue(800);

        horizontalLayout_3->addWidget(doubleSpinBoxScreenWidth);

        label_3 = new QLabel(ProjectorConverter);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(ProjectorConverter);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        doubleSpinBoxScreenHeight = new QDoubleSpinBox(ProjectorConverter);
        doubleSpinBoxScreenHeight->setObjectName(QStringLiteral("doubleSpinBoxScreenHeight"));
        doubleSpinBoxScreenHeight->setMaximum(1e+15);
        doubleSpinBoxScreenHeight->setValue(600);

        horizontalLayout_4->addWidget(doubleSpinBoxScreenHeight);

        label_5 = new QLabel(ProjectorConverter);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(ProjectorConverter);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        doubleSpinBoxDistanceToScreen = new QDoubleSpinBox(ProjectorConverter);
        doubleSpinBoxDistanceToScreen->setObjectName(QStringLiteral("doubleSpinBoxDistanceToScreen"));
        doubleSpinBoxDistanceToScreen->setMaximum(1e+15);
        doubleSpinBoxDistanceToScreen->setValue(2000);

        horizontalLayout_5->addWidget(doubleSpinBoxDistanceToScreen);

        label_7 = new QLabel(ProjectorConverter);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(ProjectorConverter);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        spinBoxDisBelow = new QSpinBox(ProjectorConverter);
        spinBoxDisBelow->setObjectName(QStringLiteral("spinBoxDisBelow"));
        spinBoxDisBelow->setMaximum(100000);

        horizontalLayout_2->addWidget(spinBoxDisBelow);

        label_12 = new QLabel(ProjectorConverter);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_2->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_20 = new QLabel(ProjectorConverter);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_7->addWidget(label_20);

        spinBoxDisMid = new QSpinBox(ProjectorConverter);
        spinBoxDisMid->setObjectName(QStringLiteral("spinBoxDisMid"));
        spinBoxDisMid->setMaximum(100000);

        horizontalLayout_7->addWidget(spinBoxDisMid);

        label_11 = new QLabel(ProjectorConverter);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_17 = new QLabel(ProjectorConverter);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_2->addWidget(label_17);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_18 = new QLabel(ProjectorConverter);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_10->addWidget(label_18);

        doubleSpinBoxDistanceToRealScreen = new QDoubleSpinBox(ProjectorConverter);
        doubleSpinBoxDistanceToRealScreen->setObjectName(QStringLiteral("doubleSpinBoxDistanceToRealScreen"));
        doubleSpinBoxDistanceToRealScreen->setMaximum(1e+15);
        doubleSpinBoxDistanceToRealScreen->setValue(2000);

        horizontalLayout_10->addWidget(doubleSpinBoxDistanceToRealScreen);

        label_19 = new QLabel(ProjectorConverter);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_10->addWidget(label_19);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(ProjectorConverter);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        doubleSpinBoxRotateX = new QDoubleSpinBox(ProjectorConverter);
        doubleSpinBoxRotateX->setObjectName(QStringLiteral("doubleSpinBoxRotateX"));
        doubleSpinBoxRotateX->setMaximum(360);
        doubleSpinBoxRotateX->setValue(90);

        horizontalLayout_6->addWidget(doubleSpinBoxRotateX);

        label_10 = new QLabel(ProjectorConverter);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_15 = new QLabel(ProjectorConverter);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_9->addWidget(label_15);

        doubleSpinBoxRotateY = new QDoubleSpinBox(ProjectorConverter);
        doubleSpinBoxRotateY->setObjectName(QStringLiteral("doubleSpinBoxRotateY"));
        doubleSpinBoxRotateY->setMaximum(360);
        doubleSpinBoxRotateY->setValue(90);

        horizontalLayout_9->addWidget(doubleSpinBoxRotateY);

        label_16 = new QLabel(ProjectorConverter);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_9->addWidget(label_16);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_13 = new QLabel(ProjectorConverter);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_8->addWidget(label_13);

        doubleSpinBoxRotateZ = new QDoubleSpinBox(ProjectorConverter);
        doubleSpinBoxRotateZ->setObjectName(QStringLiteral("doubleSpinBoxRotateZ"));
        doubleSpinBoxRotateZ->setMaximum(360);
        doubleSpinBoxRotateZ->setValue(0);

        horizontalLayout_8->addWidget(doubleSpinBoxRotateZ);

        label_14 = new QLabel(ProjectorConverter);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_8->addWidget(label_14);


        verticalLayout_2->addLayout(horizontalLayout_8);

        textBrowser = new QTextBrowser(ProjectorConverter);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMaximumSize(QSize(300, 16777215));

        verticalLayout_2->addWidget(textBrowser);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_24 = new QLabel(ProjectorConverter);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_15->addWidget(label_24);

        spinBoxx = new QSpinBox(ProjectorConverter);
        spinBoxx->setObjectName(QStringLiteral("spinBoxx"));
        spinBoxx->setMinimum(-1000000);
        spinBoxx->setMaximum(1000000);

        horizontalLayout_15->addWidget(spinBoxx);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_23 = new QLabel(ProjectorConverter);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_14->addWidget(label_23);

        spinBoxy = new QSpinBox(ProjectorConverter);
        spinBoxy->setObjectName(QStringLiteral("spinBoxy"));
        spinBoxy->setMinimum(-1000000);
        spinBoxy->setMaximum(1000000);

        horizontalLayout_14->addWidget(spinBoxy);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_21 = new QLabel(ProjectorConverter);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_12->addWidget(label_21);

        spinBoxz = new QSpinBox(ProjectorConverter);
        spinBoxz->setObjectName(QStringLiteral("spinBoxz"));
        spinBoxz->setMinimum(-1000000);
        spinBoxz->setMaximum(1000000);

        horizontalLayout_12->addWidget(spinBoxz);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_22 = new QLabel(ProjectorConverter);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_13->addWidget(label_22);

        spinBoxr = new QSpinBox(ProjectorConverter);
        spinBoxr->setObjectName(QStringLiteral("spinBoxr"));
        spinBoxr->setMaximum(1000000);

        horizontalLayout_13->addWidget(spinBoxr);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_26 = new QLabel(ProjectorConverter);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_17->addWidget(label_26);

        spinBoxtheta = new QSpinBox(ProjectorConverter);
        spinBoxtheta->setObjectName(QStringLiteral("spinBoxtheta"));
        spinBoxtheta->setMaximum(360);

        horizontalLayout_17->addWidget(spinBoxtheta);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_25 = new QLabel(ProjectorConverter);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_16->addWidget(label_25);

        spinBoxphi = new QSpinBox(ProjectorConverter);
        spinBoxphi->setObjectName(QStringLiteral("spinBoxphi"));
        spinBoxphi->setMaximum(360);

        horizontalLayout_16->addWidget(spinBoxphi);


        verticalLayout_3->addLayout(horizontalLayout_16);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));

        verticalLayout_2->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_27 = new QLabel(ProjectorConverter);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_18->addWidget(label_27);

        spinBoxdelta = new QSpinBox(ProjectorConverter);
        spinBoxdelta->setObjectName(QStringLiteral("spinBoxdelta"));
        spinBoxdelta->setMaximum(360);

        horizontalLayout_18->addWidget(spinBoxdelta);


        verticalLayout_2->addLayout(horizontalLayout_18);


        horizontalLayout_11->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_11);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ProjectorConverter);

        QMetaObject::connectSlotsByName(ProjectorConverter);
    } // setupUi

    void retranslateUi(QWidget *ProjectorConverter)
    {
        ProjectorConverter->setWindowTitle(QApplication::translate("ProjectorConverter", "ProjectorSetting", 0));
        label_8->setText(QApplication::translate("ProjectorConverter", "\346\212\225\345\275\261\346\234\272\345\217\202\346\225\260", 0));
        label_2->setText(QApplication::translate("ProjectorConverter", "\345\261\217\345\271\225\345\256\275\345\272\246", 0));
        label_3->setText(QApplication::translate("ProjectorConverter", "mm", 0));
        label_4->setText(QApplication::translate("ProjectorConverter", "\345\261\217\345\271\225\351\253\230\345\272\246", 0));
        label_5->setText(QApplication::translate("ProjectorConverter", "mm", 0));
        label_6->setText(QApplication::translate("ProjectorConverter", "\350\267\235\345\261\217\345\271\225\350\267\235\347\246\273", 0));
        label_7->setText(QApplication::translate("ProjectorConverter", "mm", 0));
        label->setText(QApplication::translate("ProjectorConverter", "\346\212\225\345\275\261\346\234\272\344\270\213\346\262\277\345\210\260\345\261\217\345\271\225\344\270\213\346\262\277\350\267\235\347\246\273", 0));
        label_12->setText(QApplication::translate("ProjectorConverter", "mm", 0));
        label_20->setText(QApplication::translate("ProjectorConverter", "\346\212\225\345\275\261\346\234\272\344\270\255\351\227\264\345\210\260\345\261\217\345\271\225\344\270\255\351\227\264\350\267\235\347\246\273", 0));
        label_11->setText(QApplication::translate("ProjectorConverter", "mm", 0));
        label_17->setText(QApplication::translate("ProjectorConverter", "\345\261\217\345\271\225\345\217\202\346\225\260", 0));
        label_18->setText(QApplication::translate("ProjectorConverter", "\350\267\235\346\212\225\345\275\261\346\234\272\350\267\235\347\246\273", 0));
        label_19->setText(QApplication::translate("ProjectorConverter", "mm", 0));
        label_9->setText(QApplication::translate("ProjectorConverter", "\346\227\213\350\275\254x:", 0));
        label_10->setText(QApplication::translate("ProjectorConverter", "\302\260", 0));
        label_15->setText(QApplication::translate("ProjectorConverter", "\346\227\213\350\275\254y:", 0));
        label_16->setText(QApplication::translate("ProjectorConverter", "\302\260", 0));
        label_13->setText(QApplication::translate("ProjectorConverter", "\346\227\213\350\275\254z:", 0));
        label_14->setText(QApplication::translate("ProjectorConverter", "\302\260", 0));
        label_24->setText(QApplication::translate("ProjectorConverter", "x:", 0));
        label_23->setText(QApplication::translate("ProjectorConverter", "y:", 0));
        label_21->setText(QApplication::translate("ProjectorConverter", "z:", 0));
        label_22->setText(QApplication::translate("ProjectorConverter", "r:", 0));
        label_26->setText(QApplication::translate("ProjectorConverter", "\316\270", 0));
        label_25->setText(QApplication::translate("ProjectorConverter", "\317\206", 0));
        label_27->setText(QApplication::translate("ProjectorConverter", "\316\264", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjectorConverter: public Ui_ProjectorConverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTORCONVERTER_H
