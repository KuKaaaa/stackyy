#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "abdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_Quit_triggered();

    void on_action_Help_triggered();

    void on_action_Tip_of_the_day_triggered();

    void on_action_About_Stackyy_triggered();

    void on_action_Website_triggered();

    void on_action_Add_Files_triggered();

    void on_action_Save_triggered();

    void on_stackButton_clicked();

    void on_action_Sources_triggered();

private:
    Ui::MainWindow *ui;
    QDialog *AboutDialog;


};
#endif // MAINWINDOW_H
