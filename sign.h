#ifndef SIGN_H
#define SIGN_H

#include <QMainWindow>

namespace Ui {
class sign;
}

class sign : public QMainWindow
{
    Q_OBJECT

public:
    explicit sign(QWidget *parent = nullptr);
    ~sign();

private slots:
    void on_toolButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::sign *ui;
};

#endif // SIGN_H
