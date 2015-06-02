#ifndef FORMCONTACT_H
#define FORMCONTACT_H

#include <QWidget>

namespace Ui {
class FormContact;
}

class FormContact : public QWidget
{
    Q_OBJECT

public:
    explicit FormContact(QWidget *parent = 0);
    ~FormContact();

private:
    Ui::FormContact *ui;
};

#endif // FORMCONTACT_H
