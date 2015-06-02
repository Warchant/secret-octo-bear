#ifndef FORMPATIENT_H
#define FORMPATIENT_H

#include <QWidget>
#include <QLabel>
#include "formcontact.h"
#include "formfeedback.h"
#include "formdiagnostic.h"

#include "shared_funcs.h"

namespace Ui {
class FormPatient;
}

class FormPatient : public QWidget
{
    Q_OBJECT

public:
    explicit FormPatient(QWidget *parent = 0);
    ~FormPatient();

private slots:
    void on_button_contacts_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FormPatient *ui;

    QLabel *startImage;

    FormContact *contacts;
    FormFeedback *feedback;
    FormDiagnostic *diagnostic;

};

#endif // FORMPATIENT_H
