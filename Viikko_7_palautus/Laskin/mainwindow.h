#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Count_clicked();

    void on_masterReset_clicked();

    void on_Plus_clicked();

    void on_Minus_clicked();

    void on_Divide_clicked();

    void on_Multiply_clicked();

    void on_push1_clicked();

    void on_push2_clicked();

    void on_push3_clicked();

    void on_Enter_clicked();

    void on_Clear_clicked();

    void on_push4_clicked();

    void on_push5_clicked();

    void on_push6_clicked();

    void on_push7_clicked();

    void on_push8_clicked();

    void on_push9_clicked();

    void on_push0_clicked();

private:
    Ui::MainWindow *ui;
    void numberClickerHandler(int n);
    int tila = 1;
    void setActiveControls();
};
#endif // MAINWINDOW_H
