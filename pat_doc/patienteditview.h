#ifndef PATIENTEDITVIEW_H
#define PATIENTEDITVIEW_H

#include <QWidget>
#include<QDataWidgetMapper>

namespace Ui {
class patientEditView;
}

class patientEditView : public QWidget
{
    Q_OBJECT

public:
    explicit patientEditView(QWidget *parent = nullptr,int index = 0);
    ~patientEditView();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::patientEditView *ui;
    QDataWidgetMapper *dataMapper;//数据映射

signals:
    void goPreviousView();
};

#endif // PATIENTEDITVIEW_H
