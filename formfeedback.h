#ifndef FORMFEEDBACK_H
#define FORMFEEDBACK_H

#include <QWidget>

namespace Ui {
class FormFeedback;
}

class FormFeedback : public QWidget
{
    Q_OBJECT

public:
    explicit FormFeedback(QWidget *parent = 0);
    ~FormFeedback();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormFeedback *ui;
};

#endif // FORMFEEDBACK_H
