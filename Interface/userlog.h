#ifndef USERLOG_H
#define USERLOG_H

#include <QDialog>

namespace Ui {
class UserLog;
}

class UserLog : public QDialog
{
    Q_OBJECT

public:
    explicit UserLog(QWidget *parent = nullptr);
    ~UserLog();

    void mouseMoveEvent(QMouseEvent *event);

    void mousePressEvent(QMouseEvent *event);

private slots:
    void on_UserLogInBtn_clicked();

    void on_UserExitBtn_clicked();

    void on_LogedHideBtn_clicked();

    void on_LogedLogoutBtn_clicked();

private:
    Ui::UserLog *ui;

    QPoint Ref;

    QString exceldata[9][3];
};

#endif // USERLOG_H
