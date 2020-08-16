//HEADERS
#include "mainwindow.h"
#include "ui_mainwindow.h"

//QT Libs
#include <Qt>
#include <QApplication>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QLabel>
#include <QObject>
#include <QPixmap>
#include <QFileDialog>
#include <QDebug>
#include <QImage>
#include <QDialog>
#include <QMatrix3x3>
#include <QIcon>

#include <cmath>

//About Dialog HEADER
#include "abdialog.h"

QLabel *listLabel[5];
QImage stackedImage;

//Constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    this->setWindowTitle("Stackyy");
    QIcon smallIcon(":/icons/icon-small.png");
    this->setWindowIcon(smallIcon);
    this->setMinimumSize(1280,720);

    //Progress Bar

    ui->progressBar->setStyleSheet("QProgressBar:horizontal{border-radius: 3px; background: #FFFFFF; padding: 1px;}"
                                   "QProgressBar::chunk:horizontal{background: qlineargradient(x1: 0.1, y1: 0.5, x2: 0.5, y2: 0.5, stop: 0 #B0E0E6, stop: 1 #2952A3)}");
    ui->progressBar->setAlignment(Qt::AlignCenter);


}

//Destructor
MainWindow::~MainWindow()
{

    delete ui;

}

//Adding Files
void MainWindow::on_action_Add_Files_triggered()
{

    QStringList fileName = QFileDialog::getOpenFileNames(this,tr("Select Files"),"",tr("JPG (*.jpg);;PNG (*.png);;All file types (*.*)"));

    if (!fileName.isEmpty())
    {
        for (int i=0 ;i<fileName.length() ; i++)
        {
            QString src = fileName.at(i);
            QImage img(src);

            listLabel[i] = new QLabel(this);
            listLabel[i]->setGeometry(1,1*i,1,1);
            listLabel[i]->setPixmap(QPixmap::fromImage(img));
            //listLabel[i]->show();
        }
    }
}

//Saving File
void MainWindow::on_action_Save_triggered()
{
    QString file_Name = QFileDialog::getSaveFileName(this,tr("Save as"),"",tr("JPG (*.jpg);;PNG (*.png)"));

    if (!file_Name.isEmpty())
    {
        stackedImage.save(file_Name);
    }
}

//Closing
void MainWindow::on_action_Quit_triggered()
{

    QApplication::quit();

}

//Displaying Help
void MainWindow::on_action_Help_triggered()
{

    QMessageBox helpBox;
    helpBox.setWindowTitle("Help");
    helpBox.setInformativeText("Using Stackyy is super easy, just simply go to \"File\" then click \"Add Files\" and select images you want to stack, or you can simply press Alt+A"
                               " and select up to 5 images you want to stack, once you have done this simply press STACK! ");
    helpBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");


    QAbstractButton* helpButton;
    helpButton = helpBox.addButton(tr("OK"), QMessageBox::YesRole);
    helpButton->setStyleSheet("background: #252525; font-family: Arial; color: #BFBFBF;");
    helpBox.exec();

}

//Displaing Tip Of The Day
void MainWindow::on_action_Tip_of_the_day_triggered()
{

    int x{rand()%6 + 1};
    switch( x )
    {

    case 1:
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Did you know?");
        msgBox.setText(tr("The Moon is drifting away from the Earth"));
        msgBox.setInformativeText("The Moon is moving approximately 3,8cm away from Earth every year.");
        msgBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");


        QAbstractButton* msgBttn;
        msgBttn = msgBox.addButton(tr("Got it!"), QMessageBox::YesRole);
        msgBox.exec();
        break;
    }
    case 2:
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Did you know?");
        msgBox.setText(tr("QT Creator was created by two persons"));
        msgBox.setInformativeText("Haavard Nord and Eirik Chambe-Eng created Qt Development Frameworks in 1994.");
        msgBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");


        QAbstractButton* msgBttn;
        msgBttn = msgBox.addButton(tr("Got it!"), QMessageBox::YesRole);
        msgBox.exec();
        break;
    }
    case 3:
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Did you know?");
        msgBox.setText(tr("The first color photography was taken in 1861"));
        msgBox.setInformativeText("The first color photograph is a colored ribbon.");
        msgBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");


        QAbstractButton* msgBttn;
        msgBttn = msgBox.addButton(tr("Got it!"), QMessageBox::YesRole);
        msgBox.exec();
        break;
    }
    case 4:
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Did you know?");
        msgBox.setText(tr("Mount Everest isn't really the tallest mountain known to man"));
        msgBox.setInformativeText("Olympus Mons is 3 times higher that the Mount Everest, and its located on Mars!");
        msgBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");


        QAbstractButton* msgBttn;
        msgBttn = msgBox.addButton(tr("Got it!"), QMessageBox::YesRole);
        msgBox.exec();
        break;
    }
    case 5:
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Did you know?");
        msgBox.setText(tr("The Moon has quakes too"));
        msgBox.setInformativeText("They're called moonquakes and they are caused by the gravitational influence of the Earth.");
        msgBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");


        QAbstractButton* msgBttn;
        msgBttn = msgBox.addButton(tr("Got it!"), QMessageBox::YesRole);
        msgBox.exec();
        break;
    }

    case 6:
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Did you know?");
        msgBox.setText(tr("You pronounced Qt wrong"));
        msgBox.setInformativeText("Qt is pronounced as \"cute\" not \"cu-tee\".");
        msgBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");


        QAbstractButton* msgBttn;
        msgBttn = msgBox.addButton(tr("Got it!"), QMessageBox::YesRole);
        msgBox.exec();
        break;
    }

    }
}

//Displaying Info/About
void MainWindow::on_action_About_Stackyy_triggered()
{
    AbDialog aboutDialog;
    aboutDialog.setModal(true);

    aboutDialog.setFixedSize(QSize(480,360));

    aboutDialog.exec();
}

//Page redirection
void MainWindow::on_action_Website_triggered()
{

    //MAKE WEBSITE!
    QDesktopServices::openUrl(QUrl("https://en.wikipedia.org/wiki/Focus_stacking"));

}

//Sources
void MainWindow::on_action_Sources_triggered()
{
    QMessageBox srcBox;
    srcBox.setTextFormat(Qt::RichText);
    srcBox.setText(tr("All Icons were Desgined by Freepik from Flaticon"));
    srcBox.setInformativeText("<a href='https://www.flaticon.com/free-icon/moon-phase-symbol_39263'>Icon Author</a>");
    srcBox.setStyleSheet("background: #252525; border: none; font-family: Arimo; font-style: bold; font-size: 15px; color: #BFBFBF;");

    QAbstractButton* srcButton;
    srcButton = srcBox.addButton(tr("OK"), QMessageBox::YesRole);
    srcButton->setStyleSheet("background: #252525; font-family: Arial; color: #BFBFBF;");
    srcBox.exec();
}

//Stacking
void MainWindow::on_stackButton_clicked()
{
    //Creating 3x3 kernel using 3x3 Matrix from QMatrix Class, more info in documentation
    QMatrix3x3 gau_kernel;
    gau_kernel(0,0) = 1; gau_kernel(0,1) = 2; gau_kernel(0,2) = 1;
    gau_kernel(1,0) = 2; gau_kernel(1,1) = 4; gau_kernel(1,2) = 2;
    gau_kernel(2,0) = 1; gau_kernel(2,1) = 2; gau_kernel(2,2) = 1;
    float gau_sum = 16.0;

    QMatrix3x3 lap_kernel;
    lap_kernel(0,0) = -1; lap_kernel(0,1) = -1; lap_kernel(0,2) = -1;
    lap_kernel(1,0) = -1; lap_kernel(1,1) = 8; lap_kernel(1,2) = -1;
    lap_kernel(2,0) = -1; lap_kernel(2,1) = -1; lap_kernel(2,2) = -1;

    //Stacking process
    /*------------------------------------------*/
    QImage stack,x, image = listLabel[0]->pixmap()->toImage();
    int w = image.width();
    int h = image.height();
    //Creating blank image
    stackedImage = QPixmap(w, h).toImage();

    uint LoG;

    QRgb logRGB;
    stack = listLabel[0]->pixmap()->toImage();

    for(int i=1; i<stack.width() - 1; i++)
    {
        for(int j=1; j<stack.height() - 1; j++)
        {
            LoG = 0;
            for (int k = 0; k < 5; k++)
            {
                x = listLabel[k]->pixmap()->toImage();
                logRGB = x.pixel(i, j);

                LoG = LoG + logRGB;
            }

            stackedImage.setPixel(i, j, LoG/5);
        }
    }
    /*------------------------------------------*/

    //Gauss Blur to reduce noise
    /*------------------------------------------*/
    for(int k=0 ; k < 5 ; k++)
    {
        image = listLabel[k]->pixmap()->toImage();

        for(int i=1; i<image.width() - 1; i++)
        {
            for(int j=1; j<image.height() - 1; j++)
            {
                float rgb_r = 0, rgb_g = 0, rgb_b = 0;

                //Performing a Gaussian Blur on each iamge channel...
                rgb_r = gau_kernel(0, 0 ) * qRed(image.pixel(i+1, j+1)) + gau_kernel(0, 1) * qRed(image.pixel(i, j+1)) + gau_kernel(0, 2) * qRed(image.pixel(i-1, j+1)) +
                        gau_kernel(1, 0) * qRed(image.pixel(i+1, j)) + gau_kernel(1, 1) * qRed(image.pixel(i, j)) + gau_kernel(1, 2) * qRed(image.pixel(i-1, j)) +
                        gau_kernel(2, 0) * qRed(image.pixel(i+1, j-1)) + gau_kernel(2, 1) * qRed(image.pixel(i, j-1)) + gau_kernel(2,2) * qRed(image.pixel(i-1, j-1));


                rgb_g = gau_kernel(0, 0) * qGreen(image.pixel(i+1, j+1)) + gau_kernel(0, 1) * qGreen(image.pixel(i, j+1)) + gau_kernel(0, 2) * qGreen(image.pixel(i-1, j+1)) +
                        gau_kernel(1, 0) * qGreen(image.pixel(i+1, j)) + gau_kernel(1, 1) * qGreen(image.pixel(i, j)) + gau_kernel(1, 2) * qGreen(image.pixel(i-1, j)) +
                        gau_kernel(2, 0) * qGreen(image.pixel(i+1, j-1)) + gau_kernel(2, 1) * qGreen(image.pixel(i, j-1)) + gau_kernel(2, 2) * qGreen(image.pixel(i-1, j-1));

                rgb_b = gau_kernel(0, 0) * qBlue(image.pixel(i+1, j+1)) + gau_kernel(0, 1) * qBlue(image.pixel(i, j+1)) + gau_kernel(0, 2) * qBlue(image.pixel(i-1, j+1)) +
                        gau_kernel(1, 0) * qBlue(image.pixel(i+1, j)) + gau_kernel(1, 1) * qBlue(image.pixel(i, j)) + gau_kernel(1, 2) * qBlue(image.pixel(i-1, j)) +
                        gau_kernel(2, 0) * qBlue(image.pixel(i+1, j-1)) + gau_kernel(2, 1) * qBlue(image.pixel(i, j-1)) + gau_kernel(2, 2) * qBlue(image.pixel(i-1, j-1));


                //Performing a Laplacian Edge Detection on each Gaussian blured image
                rgb_r = lap_kernel(0,0) * qRed(image.pixel(i+1, j+1)) + lap_kernel(0, 1) * qRed(image.pixel(i, j+1)) + lap_kernel(0, 2) * qRed(image.pixel(i-1, j+1)) +
                        lap_kernel(1,0) * qRed(image.pixel(i+1, j)) + lap_kernel(1, 1) * qRed(image.pixel(i, j)) + lap_kernel(1, 2) * qRed(image.pixel(i-1, j)) +
                        lap_kernel(2,0) * qRed(image.pixel(i+1, j-1)) + lap_kernel(2, 1) * qRed(image.pixel(i, j-1)) + lap_kernel(2, 2) * qRed(image.pixel(i-1, j-1));

                rgb_g = lap_kernel(0, 0) * qGreen(image.pixel(i+1, j+1)) + lap_kernel(0, 1) * qGreen(image.pixel(i, j+1)) + lap_kernel(0, 2) * qGreen(image.pixel(i-1, j+1)) +
                        lap_kernel(1, 0) * qGreen(image.pixel(i+1, j)) + lap_kernel(1, 1) * qGreen(image.pixel(i, j)) + lap_kernel(1, 2) * qGreen(image.pixel(i-1, j)) +
                        lap_kernel(2, 0) * qGreen(image.pixel(i+1, j-1)) + lap_kernel(2, 1) * qGreen(image.pixel(i, j-1)) + lap_kernel(2, 2) * qGreen(image.pixel(i-1, j-1));

                rgb_b = lap_kernel(0, 0) * qBlue(image.pixel(i+1, j+1)) + lap_kernel(0, 1) * qBlue(image.pixel(i, j+1)) + lap_kernel(0, 2) * qBlue(image.pixel(i-1, j+1)) +
                        lap_kernel(1, 0) * qBlue(image.pixel(i+1, j)) + lap_kernel(1, 1) * qBlue(image.pixel(i, j)) + lap_kernel(1, 2) * qBlue(image.pixel(i-1, j)) +
                        lap_kernel(2, 0) * qBlue(image.pixel(i+1, j-1)) + lap_kernel(2, 1) * qBlue(image.pixel(i, j-1)) + lap_kernel(2, 2) * qBlue(image.pixel(i-1, j-1));

                image.setPixel(i,j, qRgb(abs(rgb_r/gau_sum), abs(rgb_g/gau_sum), abs(rgb_b/gau_sum)));
            }
        }
    }
    /*------------------------------------------*/

    //Displaying stacked image
    ui->label_IMG->setPixmap(QPixmap::fromImage(image));
    stackedImage = ui->label_IMG->pixmap()->toImage();
}
