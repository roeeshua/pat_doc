#include "patienteditview.h"
#include "ui_patienteditview.h"

patientEditView::patientEditView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::patientEditView)
{
    ui->setupUi(this);
}

patientEditView::~patientEditView()
{
    delete ui;
}
