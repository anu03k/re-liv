#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class home;
}

class home : public QMainWindow
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private:
    Ui::home *ui;
};

#endif // HOME_H
