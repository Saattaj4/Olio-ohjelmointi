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

    short getGameTime() const;
    void setGameTime(short newGameTime);

private slots:
    void on_SwitchPlayer1_clicked();

    void on_startGameButton_clicked();

    void on_pushButton2min_clicked();
    void on_pushButton5min_clicked();

    void on_stopGameButton_clicked();

    void on_SwitcPlayer2_clicked();

    void on_label_linkActivated(const QString &link);

public slots:
    void timeout();

private:
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    short tila = 0;
    QTimer *pQtimer;
    Ui::MainWindow *ui;

    void updateProgressBar();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
