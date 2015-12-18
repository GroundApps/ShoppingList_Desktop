#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->addButton->setIcon(QIcon::fromTheme("list-add"));
    ui->refreshButton->setIcon(QIcon::fromTheme("view-refresh"));
    int big = (float)(ui->itemTable->width() - 10) * 0.35;
    int small = (float)(ui->itemTable->width() - 10) * 0.15;
    ui->itemTable->setColumnWidth(0, big);
    ui->itemTable->setColumnWidth(1, big);
    ui->itemTable->setColumnWidth(2, small);
    ui->itemTable->setColumnWidth(3, small);
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
    item->setAlignment(Qt::AlignCenter);
    QLabel *count = new QLabel();
    count->setText("1");
    count->setAlignment(Qt::AlignCenter);
    QWidget *qw = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(qw);
    layout->addWidget(new QCheckBox(), 0, Qt::AlignCenter);
    qw->setLayout(layout);
//QCheckBox *done = new QCheckBox();
    QPushButton *remove = new QPushButton();
    remove->setText("");
    remove->setIcon(QIcon::fromTheme("list-remove"));
    ui->itemTable->setCellWidget(0, 0, item);
    ui->itemTable->setCellWidget(0, 1, count);
    ui->itemTable->setCellWidget(0, 2, qw);
    ui->itemTable->setCellWidget(0, 3, remove);
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox *amb = new QMessageBox();
    amb->aboutQt((QWidget*) parent(), "About Qt");
}
