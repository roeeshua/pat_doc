#include "welcomeview.h"
#include "ui_welcomeview.h"

WelcomeVIew::WelcomeVIew(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WelcomeVIew)
{
    ui->setupUi(this);
}

WelcomeVIew::~WelcomeVIew()
{
    delete ui;
}
