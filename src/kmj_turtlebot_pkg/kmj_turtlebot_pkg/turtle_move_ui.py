# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'turtle_move.ui'
##
## Created by: Qt User Interface Compiler version 6.10.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QLabel, QListWidget, QListWidgetItem,
    QPushButton, QSizePolicy, QWidget)

class Ui_Form(object):
    def setupUi(self, Form):
        if not Form.objectName():
            Form.setObjectName(u"Form")
        Form.resize(776, 432)
        self.listWidget = QListWidget(Form)
        self.listWidget.setObjectName(u"listWidget")
        self.listWidget.setGeometry(QRect(30, 30, 401, 371))
        self.btn_go = QPushButton(Form)
        self.btn_go.setObjectName(u"btn_go")
        self.btn_go.setGeometry(QRect(560, 80, 95, 71))
        self.btn_stop = QPushButton(Form)
        self.btn_stop.setObjectName(u"btn_stop")
        self.btn_stop.setGeometry(QRect(560, 170, 95, 71))
        self.btn_back = QPushButton(Form)
        self.btn_back.setObjectName(u"btn_back")
        self.btn_back.setGeometry(QRect(560, 260, 95, 71))
        self.btn_right = QPushButton(Form)
        self.btn_right.setObjectName(u"btn_right")
        self.btn_right.setGeometry(QRect(670, 170, 95, 71))
        self.btn_left = QPushButton(Form)
        self.btn_left.setObjectName(u"btn_left")
        self.btn_left.setGeometry(QRect(450, 170, 95, 71))
        self.label = QLabel(Form)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(30, 10, 67, 17))
        self.btn_return = QPushButton(Form)
        self.btn_return.setObjectName(u"btn_return")
        self.btn_return.setGeometry(QRect(670, 350, 95, 71))

        self.retranslateUi(Form)

        QMetaObject.connectSlotsByName(Form)
    # setupUi

    def retranslateUi(self, Form):
        Form.setWindowTitle(QCoreApplication.translate("Form", u"Form", None))
        self.btn_go.setText(QCoreApplication.translate("Form", u"GO", None))
        self.btn_stop.setText(QCoreApplication.translate("Form", u"STOP", None))
        self.btn_back.setText(QCoreApplication.translate("Form", u"BACK", None))
        self.btn_right.setText(QCoreApplication.translate("Form", u"RIGHT", None))
        self.btn_left.setText(QCoreApplication.translate("Form", u"LEFT", None))
        self.label.setText(QCoreApplication.translate("Form", u"log", None))
        self.btn_return.setText(QCoreApplication.translate("Form", u"RETURN", None))
    # retranslateUi

