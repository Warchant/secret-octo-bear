#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QList>
#include <QPair>

#include "formadmin.h"
#include "formdoctor.h"
#include "formpatient.h"

#define LOGIN_LIMIT 3
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QList <QPair<QString, QString> > users;

    QWidget *startForm;

    int login_counter;

};

#endif // MAINWINDOW_H
