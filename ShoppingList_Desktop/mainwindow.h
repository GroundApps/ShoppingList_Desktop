#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QSpinBox>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void setAddRow();
    QTextEdit *itemedit = new QTextEdit();
    QSpinBox *countedit = new QSpinBox();
    QPushButton *addbutton = new QPushButton();
};

#endif // MAINWINDOW_H
