#include "formpatient.h"
#include "ui_formpatient.h"

FormPatient::FormPatient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPatient)
{
    ui->setupUi(this);

    startImage = new QLabel;
    startImage->setPixmap( QPixmap(":images/src/BMC.png") );
    startImage->setScaledContents(true);

    ui->placeholder->addWidget(startImage);

}

FormPatient::~FormPatient()
{
    delete startImage;
    delete ui;
}


void FormPatient::on_button_contacts_clicked()
{
    clearLayout(ui->placeholder);
    contacts = new FormContact;
    ui->placeholder->addWidget(this->contacts);
}

void FormPatient::on_pushButton_2_clicked()
{
    clearLayout(ui->placeholder);
    feedback = new FormFeedback;
    ui->placeholder->addWidget(this->feedback);
}

void FormPatient::on_pushButton_clicked()
{
    clearLayout(ui->placeholder);
    diagnostic = new FormDiagnostic;
    ui->placeholder->addWidget(this->diagnostic);
}
