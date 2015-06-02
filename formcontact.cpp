#include "formcontact.h"
#include "ui_formcontact.h"

FormContact::FormContact(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormContact)
{
    ui->setupUi(this);
}

FormContact::~FormContact()
{
    delete ui;
}
