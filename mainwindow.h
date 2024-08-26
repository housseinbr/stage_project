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
    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_b_plus_clicked();

    void on_result_clicked();

    void on_b_negative_clicked();

    void on_b_moin_clicked();

    void on_b0_clicked();

    void on_b_ac_clicked();

    void on_b_fois_clicked();

    void on_b_sur_clicked();

    void on_b_vir_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
