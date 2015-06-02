#include "formfeedback.h"
#include "ui_formfeedback.h"

FormFeedback::FormFeedback(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormFeedback)
{
    ui->setupUi(this);
}

FormFeedback::~FormFeedback()
{
    delete ui;
}

void FormFeedback::on_pushButton_clicked()
{
    ui->textEdit->clear();
}
