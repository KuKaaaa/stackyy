#include "abdialog.h"
#include "ui_abdialog.h"

AbDialog::AbDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("About Stackyy");

    QImage Logo(":/icons/icon-main.png");
    ui->label_Logo->setPixmap(QPixmap::fromImage(Logo));

}

AbDialog::~AbDialog()
{

    delete ui;

}

void AbDialog::on_closeButton_clicked()
{

    AbDialog::close();

}
