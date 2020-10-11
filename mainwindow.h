#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

#include "customgraphicsview.h"
#include "customgraphicsscene.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    customgraphicsview *gview;
    customgraphicsscene *gscene;

private slots:
    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
    QString openfilename;

    void loadfile(QString s);

};
#endif // MAINWINDOW_H
