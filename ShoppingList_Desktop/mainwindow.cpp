#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    addbutton->setText("Add");
    setAddRow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setAddRow(){
    int rowid = ui->itemTable->rowCount();
    ui->itemTable->setRowCount(rowid + 1);
    ui->itemTable->setCellWidget(rowid, 0, itemedit);
    ui->itemTable->setCellWidget(rowid, 1, countedit);
    ui->itemTable->setCellWidget(rowid, 3, addbutton);
}
