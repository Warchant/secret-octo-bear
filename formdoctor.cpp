#include "formdoctor.h"
#include "ui_formdoctor.h"

FormDoctor::FormDoctor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDoctor)
{
    ui->setupUi(this);

    startImage = new QLabel;
    startImage->setPixmap( QPixmap(":images/src/BMC.png") );
    startImage->setScaledContents(true);

    ui->placeholder->addWidget(startImage);

}

FormDoctor::~FormDoctor()
{
    delete startImage;
    delete ui;
}

void FormDoctor::on_pushButton_3_clicked()
{
    clearLayout(ui->placeholder);
    contacts = new FormContact;
    ui->placeholder->addWidget(this->contacts);
}

void FormDoctor::on_pushButton_4_clicked()
{
    clearLayout(ui->placeholder);
    feedback = new FormFeedback;
    ui->placeholder->addWidget(this->feedback);
}

void FormDoctor::on_pushButton_2_clicked()
{
    clearLayout(ui->placeholder);
    diagnostic = new FormDiagnostic;
    ui->placeholder->addWidget(this->diagnostic);
}
