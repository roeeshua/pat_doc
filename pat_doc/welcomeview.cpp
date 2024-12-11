#include "welcomeview.h"
#include "ui_welcomeview.h"
#include <QDebug>

WelcomeVIew::WelcomeVIew(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WelcomeVIew)
{
    qDebug()<<"create WelcomeView";
    ui->setupUi(this);
}

WelcomeVIew::~WelcomeVIew()
{
    qDebug()<<"distroy WelcomeView";
    delete ui;
}



void WelcomeVIew::on_btDepartment_clicked()
{
    emit goDepartmentView();
}


void WelcomeVIew::on_btDoctor_clicked()
{
    emit goDoctorView();
}


void WelcomeVIew::on_btPatient_clicked()
{
    emit goPatientView();
}

