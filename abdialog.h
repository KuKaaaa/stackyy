#ifndef ABDIALOG_H
#define ABDIALOG_H

#include <QDialog>

namespace Ui {
class AbDialog;
}

class AbDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AbDialog(QWidget *parent = nullptr);
    ~AbDialog();

private slots:
    void on_closeButton_clicked();

private:
    Ui::AbDialog *ui;
};

#endif // ABDIALOG_H
