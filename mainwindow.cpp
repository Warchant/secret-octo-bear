#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // добавляем в список пользователей
    this->users.append(QPair<QString, QString>("admin", "admin"));
    this->users.append(QPair<QString, QString>("doctor", "doctor"));
    this->users.append(QPair<QString, QString>("patient", "patient"));

    this->login_counter = 0;
}

MainWindow::~MainWindow()
{
    delete startForm;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString user = ui->edit_login->text();
    QString pwd  = ui->edit_password->text();

    for(QList<QPair<QString, QString> >::iterator it = this->users.begin(); it!=users.end(); it++){
        if(it->first == user && it->second == pwd){
            if(it->first == users[0].first){ // admin
                startForm = new FormAdmin;
            }
            else if(it->first == users[1].first){ // doctor
                startForm = new FormDoctor;
            }
            else if(it->first == users[2].first){ // patient
                startForm = new FormPatient;
            }
            // ввели все правильно
            this->hide();
            startForm->show();
            return;
        }
    }

    this->login_counter++;
    if (this->login_counter > LOGIN_LIMIT){
        exit(1); // закрыть
    }

    ui->label_auth_msg->setText( QString("Ошибка, осталось ") +
            QString::number(LOGIN_LIMIT - this->login_counter) +
            " попытки" );

    return;
}
