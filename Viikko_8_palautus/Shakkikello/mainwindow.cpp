#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
    pQtimer = new QTimer(this);
    pQtimer->start(1000);

    setGameInfoText("Odotetaan pelivalintaa",12);

    ui->startGameButton->setEnabled(false);
    ui->stopGameButton->setEnabled(false);
    ui->SwitchPlayer1->setEnabled(false);
    ui->SwitcPlayer2->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SwitchPlayer1_clicked()
{
    currentPlayer = 2;
}

void MainWindow::on_SwitcPlayer2_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_startGameButton_clicked()
{
    currentPlayer = 1;
    connect(pQtimer, SIGNAL(timeout()),this, SLOT(timeout()));

    ui->stopGameButton->setEnabled(true);
    ui->startGameButton->setEnabled(false);
}


void MainWindow::timeout()
{
    updateProgressBar();
}

void MainWindow::updateProgressBar()
{
    if(tila == 1 & currentPlayer == 1){
        player1Time--;
        ui->progressBar1->setValue(player1Time);
        setGameInfoText("Pelaajan 1 vuoro", 12);
        ui->SwitcPlayer2->setEnabled(false);
        ui->SwitchPlayer1->setEnabled(true);
        ui->pushButton2min->setEnabled(false);
        ui->pushButton5min->setEnabled(false);

    }else if(tila == 1 & currentPlayer == 2){
        player2Time--;
        ui->progressBar2->setValue(player2Time);
        setGameInfoText("Pelaajan 2 vuoro", 12);
        ui->SwitcPlayer2->setEnabled(true);
        ui->SwitchPlayer1->setEnabled(false);
        ui->pushButton2min->setEnabled(false);
        ui->pushButton5min->setEnabled(false);
    }
     else if(tila == 2 & currentPlayer == 1){
        player1Time--;
        ui->progressBar1->setValue(player1Time);
        setGameInfoText("Pelaajan 1 vuoro", 12);
        ui->SwitcPlayer2->setEnabled(false);
        ui->SwitchPlayer1->setEnabled(true);
        ui->pushButton2min->setEnabled(false);
        ui->pushButton5min->setEnabled(false);

    } else if(tila == 2 & currentPlayer == 2){
        player2Time--;
        ui->progressBar2->setValue(player2Time);
        setGameInfoText("Pelaajan 2 vuoro", 12);
        ui->SwitcPlayer2->setEnabled(true);
        ui->SwitchPlayer1->setEnabled(false);
        ui->pushButton2min->setEnabled(false);
        ui->pushButton5min->setEnabled(false);

    } if(player1Time == 0){
        setGameInfoText("Aika loppui. Pelaaja 2 voittaa! Valitse uusi peli.", 15);
        disconnect(pQtimer, SIGNAL(timeout()),this, SLOT(timeout()));
        ui->SwitcPlayer2->setEnabled(false);
        ui->SwitchPlayer1->setEnabled(false);
        ui->pushButton2min->setEnabled(true);
        ui->pushButton5min->setEnabled(true);

    } if(player2Time == 0){
        setGameInfoText("Aika loppui. Pelaaja 1 voittaa! Valitse uusi peli.", 15);
        disconnect(pQtimer, SIGNAL(timeout()),this, SLOT(timeout()));
        ui->SwitcPlayer2->setEnabled(false);
        ui->SwitchPlayer1->setEnabled(false);
        ui->pushButton2min->setEnabled(true);
        ui->pushButton5min->setEnabled(true);
    }
}

void MainWindow::setGameInfoText(QString a, short b)
{
    QFont gameText = ui->label->font();
        ui->label->setText(a);

    gameText.setPointSize(b);
}

void MainWindow::on_pushButton2min_clicked()
{
    tila = 1;

    player1Time = 120;
    player2Time = 120;

    ui->progressBar1->setRange(0,120);
    ui->progressBar1->setValue(120);
    ui->progressBar2->setRange(0,120);
    ui->progressBar2->setValue(120);

    setGameInfoText("2 min peli valittu",12);

    ui->startGameButton->setEnabled(true);
}


void MainWindow::on_pushButton5min_clicked()
{
    tila = 2;

    player1Time = 300;
    player2Time = 300;

    ui->progressBar1->setRange(0,300);
    ui->progressBar1->setValue(300);
    ui->progressBar2->setRange(0,300);
    ui->progressBar2->setValue(300);

    setGameInfoText("5 min peli valittu",12);

    ui->startGameButton->setEnabled(true);
}


void MainWindow::on_stopGameButton_clicked()
{
    disconnect(pQtimer, SIGNAL(timeout()),this, SLOT(timeout()));
    setGameInfoText("Peli pysäytetty!", 15);
}
