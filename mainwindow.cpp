#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gview = new customgraphicsview();
    this->setCentralWidget(gview);
    gscene = new customgraphicsscene();
    gview->setScene(gscene);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    openfilename = QFileDialog().getOpenFileName();
    if (openfilename == ""){return;}
    loadfile(openfilename);

}

void MainWindow::loadfile(QString s)
{
    if (s.contains(QString(".json")))
    {
        qDebug() << "File is JSON";
    }
}
