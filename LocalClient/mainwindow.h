#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class QLocalSocket;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_conectar_clicked();



    void on_quitar_clicked();

private:
    Ui::MainWindow *ui;
    QLocalSocket *mSocket;
};
#endif // MAINWINDOW_H
