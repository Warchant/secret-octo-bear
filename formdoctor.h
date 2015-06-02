#ifndef FORMDOCTOR_H
#define FORMDOCTOR_H

#include <QWidget>
#include <QLabel>
#include "formcontact.h"
#include "formfeedback.h"
#include "formdiagnostic.h"

#include "shared_funcs.h"


namespace Ui {
class FormDoctor;
}

class FormDoctor : public QWidget
{
    Q_OBJECT

public:
    explicit FormDoctor(QWidget *parent = 0);
    ~FormDoctor();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FormDoctor *ui;

    QLabel *startImage;

    FormContact *contacts;
    FormFeedback *feedback;
    FormDiagnostic *diagnostic;
};

#endif // FORMDOCTOR_H
