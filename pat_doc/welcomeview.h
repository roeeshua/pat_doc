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

private:
    Ui::WelcomeVIew *ui;
};

#endif // WELCOMEVIEW_H
