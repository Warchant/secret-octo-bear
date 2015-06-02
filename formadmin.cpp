#include "formadmin.h"
#include "ui_formadmin.h"

FormAdmin::FormAdmin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAdmin)
{
    ui->setupUi(this);

    startImage = new QLabel;
    startImage->setPixmap( QPixmap(":images/src/BMC.png") );
    startImage->setScaledContents(true);

    ui->placeholder->addWidget(startImage);

}

FormAdmin::~FormAdmin()
{
    delete startImage;
    delete ui;
}

void FormAdmin::on_pushButton_4_clicked()
{
    clearLayout(ui->placeholder);
    this->contacts = new FormContact;
    ui->placeholder->addWidget(this->contacts);
}

void FormAdmin::on_pushButton_3_clicked()
{
    clearLayout(ui->placeholder);
    this->feedback = new FormFeedback;
    ui->placeholder->addWidget(this->feedback);
}
