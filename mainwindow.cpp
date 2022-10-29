#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPushButton a;
    a.setText("qqqqqq");
    a.show();
    QObject::connect(&a,SIGNAL(clicked()),this,SLOT(on_pushButton_msg_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pshButton_msg_clickde()
{
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.aaa");
    msgBox.exec();
    QPushButton* but=(QPushButton*)sender();
    qDebug() << but->text();
    QString str;
    str.toStdString();
    str.clear();

}

void MainWindow::on_actiondsds_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("aaa.");
    msgBox.exec();
}


