#ifndef PATIENTEDITVIEW_H
#define PATIENTEDITVIEW_H

#include <QWidget>

namespace Ui {
class patientEditView;
}

class patientEditView : public QWidget
{
    Q_OBJECT

public:
    explicit patientEditView(QWidget *parent = nullptr);
    ~patientEditView();

private:
    Ui::patientEditView *ui;
};

#endif // PATIENTEDITVIEW_H
