#ifndef SHARED_BUTTONS_CPP
#define SHARED_BUTTONS_CPP
#include <QObject>
#include <QWidget>

#include "formcontact.h"

// w это указатель изображение
void on_contacts_pressed(QWidget *w){
    QObject parent = w->parent();

    FormContact contacts;

    contacts->setParent(parent);

    w->hide();

    contacts->show();
}

#endif // SHARED_BUTTONS_CPP
