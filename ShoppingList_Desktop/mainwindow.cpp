#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->addButton->setIcon(QIcon::fromTheme("list-add"));
    ui->refreshButton->setIcon(QIcon::fromTheme("view-refresh"));
    setExampleRow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setExampleRow(){
    ui->itemTable->setRowCount(1);
    QLabel *item = new QLabel();
    item->setText("Item");
    QLabel *count = new QLabel();
    count->setText("1");
    QCheckBox *done = new QCheckBox();
    QPushButton *remove = new QPushButton();
    remove->setText("");
    remove->setIcon(QIcon::fromTheme("list-remove"));
    ui->itemTable->setCellWidget(0, 0, item);
    ui->itemTable->setCellWidget(0, 1, count);
    ui->itemTable->setCellWidget(0, 2, done);
    ui->itemTable->setCellWidget(0, 3, remove);
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox *amb = new QMessageBox();
    amb->aboutQt((QWidget*) parent(), "About Qt");
}
