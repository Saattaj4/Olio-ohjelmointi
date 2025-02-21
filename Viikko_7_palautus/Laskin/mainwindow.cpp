#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveControls();
    qDebug() << "Aloitettu lohkosta " << tila;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Count_clicked()
{
    // 1. Lue numero elementistä
    QString str = ui->NumeroNaytto->text();
    int num = str.toInt();
    qDebug() << "Numero=" << num;
    // 2. Kasvata numeroa yhdellä
    num++;
    // 3. aseta numero takaisin elementtiin
    QString uusStr = QString::number(num);
    qDebug() << "Kasvatettu numero=" << num;
    ui->NumeroNaytto->setText(uusStr);
}


void MainWindow::on_masterReset_clicked()
{
    // 1. Aseta nolla elementtiin
    int num = 0;
    QString uusStr = QString::number(num);
    ui->NumeroNaytto->setText(uusStr);
}

// *****************************************************************************************
void MainWindow::on_Plus_clicked()
{
    if (tila == 3){
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1+num2;

    QString resStr = QString ::number(result);
    ui->result->setText(resStr);
    qDebug() << "Plus:" << result << "=" << num1 << "+" << num2;

    tila = 0;
    }else{
        qDebug() << "Paska laite, korjaappa!";
    }

}

void MainWindow::on_Minus_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1-num2;

    QString resStr = QString ::number(result);
    ui->result->setText(resStr);
    qDebug() << "Minus:" << result << "=" << num1 << "-" << num2;
}

void MainWindow::on_Divide_clicked()
{
    QString num1Str = ui->num1->text();
    float num1 = num1Str.toFloat();

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toFloat();

    float result = num1 / num2;

    QString resStr = QString ::number(result);
    ui->result->setText(resStr);
    qDebug() << "Divide:" << result << "=" << num1 << "/" << num2;
}


void MainWindow::on_Multiply_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1*num2;

    QString resStr = QString ::number(result);
    ui->result->setText(resStr);
    qDebug() << "Multiply:" << result << "=" << num1 << "*" << num2;
}


void MainWindow::on_push1_clicked()
{
    QString str = ui->push1->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push2_clicked()
{
    QString str = ui->push2->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push3_clicked()
{
    QString str = ui->push3->text();
    int n = str.toInt();
    numberClickerHandler(n);
}

void MainWindow::numberClickerHandler(int n)
{
    qDebug() << "Valittu numero=" << n;

    QString str = QString::number(n);
    if (tila == 1){
        // Aseta n-> num1
        ui->num1->setText(str);
    }else if(tila == 2){
        // Aseta n-> num2
        ui->num2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    if (tila == 1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
    }else if (tila == 2){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
    }else if(tila == 3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->Plus->setEnabled(true);
    }
}


void MainWindow::on_Enter_clicked()
{
    /*
     * 1. syötä numero 1
     * 2. syötä numero 2
     * 3. laske tulos
     * palataan tila 1
     * */



    if (tila == 3){
        tila = 1;
    }else {
        tila++;
    }
    qDebug() << "Lokeron numero: " << tila;
    setActiveControls();
}

// numeroiden resetointi ja palautus alkuun
void MainWindow::on_Clear_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    tila = 1;
    setActiveControls();
    qDebug() << "Palattu ruutuun " << tila;
}


void MainWindow::on_push4_clicked()
{
    QString str = ui->push4->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push5_clicked()
{
    QString str = ui->push5->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push6_clicked()
{
    QString str = ui->push6->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push7_clicked()
{
    QString str = ui->push7->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push8_clicked()
{
    QString str = ui->push8->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push9_clicked()
{
    QString str = ui->push9->text();
    int n = str.toInt();
    numberClickerHandler(n);
}


void MainWindow::on_push0_clicked()
{
    QString str = ui->push0->text();
    int n = str.toInt();
    numberClickerHandler(n);
}

