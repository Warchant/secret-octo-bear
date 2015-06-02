#include "formdiagnostic.h"
#include "ui_formdiagnostic.h"

FormDiagnostic::FormDiagnostic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDiagnostic)
{
    ui->setupUi(this);
    diagnostic.resize(9);
}

FormDiagnostic::~FormDiagnostic()
{
    delete ui;
}

void FormDiagnostic::on_pushButton_clicked()
{
    diagnostic[0] = ui->edit_clump->value(); // clump thickness
    diagnostic[1] = ui->edit_cellsize->value();// uniformity of cell size
    diagnostic[2] = ui->edit_cellshape->value();// uniformity of cell shape
    diagnostic[3] = ui->edit_adhesion->value();// marginal adhesion
    diagnostic[4] = ui->edit_epithelialcellsize->value();// single epithelial cell size
    diagnostic[5] = ui->edit_barenuclei->value();// bare nuclei
    diagnostic[6] = ui->edit_chromatin->value();// bland chromatin
    diagnostic[7] = ui->edit_nucleoli->value();// normal nucleoli
    diagnostic[8] = ui->edit_mithoses->value();// mithoses
}
