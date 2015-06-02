#ifndef FORMDIAGNOSTIC_H
#define FORMDIAGNOSTIC_H

#include <QWidget>

#include <vector>

namespace Ui {
class FormDiagnostic;
}

class FormDiagnostic : public QWidget
{
    Q_OBJECT

public:
    explicit FormDiagnostic(QWidget *parent = 0);
    ~FormDiagnostic();

    std::vector <double> diagnostic;

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormDiagnostic *ui;
};

#endif // FORMDIAGNOSTIC_H
