#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>
#include <QVector>
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Ui::MainWindow * ForTesting(){
        return ui;
    };

signals:
    void LabelChanged(QString);

private slots:
    void clicked(int);

    void on_Clear_clicked();

private:
    void SetMainTitle();
    int Check(int);
    void ShowWinButtons(int winner, const QVector<int>&);

    bool flag;
    QVector<int> mass;

    Ui::MainWindow *ui;
    QSignalMapper* mapper;

};
#endif // MAINWINDOW_H
