#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>

namespace Ui {
class WelcomeVIew;
}

class WelcomeVIew : public QWidget
{
    Q_OBJECT

public:
    explicit WelcomeVIew(QWidget *parent = nullptr);
    ~WelcomeVIew();

private slots:
    void on_btDepartment_clicked();

    void on_btDoctor_clicked();

    void on_btPatient_clicked();

signals:
    void goDepartmentView();

    void goDoctorView();

    void goPatientView();

private:
    Ui::WelcomeVIew *ui;
};

#endif // WELCOMEVIEW_H
