#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , flag(0)
    , mass(9)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("QMainWindow { background-color: rgb(255, 255, 255);} "
                        "QPushButton{ background-color: rgb(225, 225, 225);} "
                        "QPushButton:hover{background-color: rgb(210, 210, 210);} "
                        "QPushButton:disabled{background-color: rgb(240, 240, 240);}");
    mass = {0,0,0,0,0,0,0,0,0};
    SetMainTitle();
    mapper = new QSignalMapper(this);
    connect(ui->First_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->First_button, 1);
    connect(ui->Second_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Second_button, 2);
    connect(ui->Third_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Third_button, 3);
    connect(ui->Fourth_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Fourth_button, 4);
    connect(ui->Fifth_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Fifth_button, 5);
    connect(ui->Sixth_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Sixth_button, 6);
    connect(ui->Seventh_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Seventh_button, 7);
    connect(ui->Eighth_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Eighth_button, 8);
    connect(ui->Ninth_button, SIGNAL(clicked()), mapper, SLOT(map()));
    mapper->setMapping(ui->Ninth_button, 9);
    connect(mapper, SIGNAL(mapped(int)), this, SLOT(clicked(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clicked(int number){
    QString str, url;
    QPixmap base;
    if (ui->label->text() == "Player 1"){
        str = "Player 2";
        url = ":/fir/X.png";
        base.load(":/fir/O.png");
        mass[number-1] = 1;
    }
    else {
         str = "Player 1";
         url = ":/fir/O.png";
         base.load(":/fir/X.png");
         mass[number-1] = 2;
    }
    ui->label->setText(str);
    emit LabelChanged(str);
    QPushButton* but  = qobject_cast<QPushButton *> (mapper->mapping(number));
    but->setStyleSheet("border-image: url(\"" + url + "\")");
    QSize size(40,40);
    QPixmap picture = base.scaled(size,Qt::KeepAspectRatio);
    ui->label_2->setPixmap(picture);
    but->setEnabled(false);

    int winner = Check(number-1);
    if (winner) {
        ui->label->setText("Player " + QString::number(winner) + " win!");
        emit LabelChanged("Player " + QString::number(winner) + " win!");
        ui->label_2->clear();
        for (int i = 1; i < 10; ++i){
            QPushButton* but  = qobject_cast<QPushButton *> (mapper->mapping(i));
            but->setEnabled(false);
        }
    }
    else {
        if (!mass.count(0)){
            ui->label->setText("Draw!");
            ui->label_2->clear();
            emit LabelChanged("Draw!");
        }
    }
}


void MainWindow::on_Clear_clicked()
{
    SetMainTitle();
    mass = {0,0,0,0,0,0,0,0,0};
    for (int i = 1; i < 10; ++i){
        QPushButton* but  = qobject_cast<QPushButton *> (mapper->mapping(i));
        but->setStyleSheet("");
        but->setEnabled(true);
    }
}


void MainWindow::SetMainTitle(){
    ui->label->setText("Player " + QString::number(flag + 1));
    emit LabelChanged("Player " + QString::number(flag + 1));
    QPixmap base;
    if (flag){
        base.load(":/fir/O.png");
    }
    else{
       base.load(":/fir/X.png");
    }
    flag = !flag;
    QSize size(40,40);
    QPixmap picture = base.scaled(size,Qt::KeepAspectRatio);
    ui->label_2->setPixmap(picture);
}

int MainWindow::Check(int number){
    int winner = 0;
    QVector<int> win_numbers(3), empty_list(3);
    win_numbers = empty_list = {0,0,0};

    if (number % 4 == 0){
        if (mass[0]== mass[4] && mass[4] == mass[8]) {
            win_numbers = {0,4,8};
        }
    }
    if (win_numbers != empty_list) {winner = mass[number]; ShowWinButtons(winner, win_numbers); win_numbers = empty_list;}

    if (number == 2 || number == 4 || number == 6){
        if (mass[2]==mass[4] && mass[4] == mass[6]){
            win_numbers = {2,4,6};
        }
    }
    if (win_numbers != empty_list) {winner = mass[number]; ShowWinButtons(winner, win_numbers); win_numbers = empty_list;}

    for (int i = 0; i<3; i++){
        if ((number - i) % 3 == 0){
            if (mass[i]==mass[i+3] && mass[i+3] == mass[i+6]){
                win_numbers = {i, i+3, i+6};
            }
            break;
        }
    }
    if (win_numbers != empty_list) {winner = mass[number]; ShowWinButtons(winner, win_numbers); win_numbers = empty_list;}

    for (int i = 0; i<3; i++){
        if ((number >= 3*i) && number < 3*(i+1)){
            if (mass[3*i]==mass[(3*i)+1] && mass[(3*i)+1] == mass[(3*i)+2]){
                win_numbers = {3*i, (3*i)+1, (3*i)+2};
            }
            break;
        }
    }
    if (win_numbers != empty_list) {winner = mass[number]; ShowWinButtons(winner, win_numbers); win_numbers = empty_list;}

    return winner;
}


void MainWindow::ShowWinButtons(int winner, const QVector<int> & numbers){
    QString url;
    if (winner == 1) {
        url = ":/fir/Xr.png";
    }
    else {
        url = ":/fir/Or.png";
    }
    for (auto i: numbers){
        QPushButton* but  = qobject_cast<QPushButton *> (mapper->mapping(i+1));
        but->setStyleSheet("border-image: url(\"" + url + "\")");
    }
}
