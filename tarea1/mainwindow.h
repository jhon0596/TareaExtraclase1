#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class LocalServer;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_botonIniciar_clicked();

    void on_botonSalir_clicked();

    void on_botonEnviar_clicked();

private:
    Ui::MainWindow *ui;
    LocalServer *mLocalServer;
};
#endif // MAINWINDOW_H
