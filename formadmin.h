#ifndef FORMADMIN_H
#define FORMADMIN_H

#include <QWidget>
#include <QLabel>

#include "formcontact.h"
#include "formfeedback.h"

#include "shared_funcs.h"

namespace Ui {
class FormAdmin;
}

class FormAdmin : public QWidget
{
    Q_OBJECT

public:
    explicit FormAdmin(QWidget *parent = 0);
    ~FormAdmin();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FormAdmin *ui;

    QLabel *startImage;

    FormContact *contacts;
    FormFeedback *feedback;

};

#endif // FORMADMIN_H
