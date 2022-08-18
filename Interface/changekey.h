#ifndef CHANGEKEY_H
#define CHANGEKEY_H

#include <QDialog>

namespace Ui {
class ChangeKey;
}

class ChangeKey : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeKey(QWidget *parent = nullptr);
    ~ChangeKey();

private slots:
    void on_ChangeKeyAckBtn_clicked();

    void on_ChangeKeyCancerBtn_clicked();

    void saveUserFile();

private:
    Ui::ChangeKey *ui;
};

#endif // CHANGEKEY_H
