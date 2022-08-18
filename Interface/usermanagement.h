#ifndef USERMANAGEMENT_H
#define USERMANAGEMENT_H

#include <QDialog>

namespace Ui {
class UserManagement;
}

class UserManagement : public QDialog
{
    Q_OBJECT

public:
    explicit UserManagement(QWidget *parent = nullptr);
    ~UserManagement();

private slots:
    void insertRow();

    void removeRow();

    void updateActions();

    void on_AddUserBtn_clicked();

    void on_DelUserBtn_clicked();

    void readUserFile();

    void saveUserFile();

    void on_UserManagementCloseBtn_clicked();

private:
    Ui::UserManagement *ui;

    bool isChanged;
};

#endif // USERMANAGEMENT_H
