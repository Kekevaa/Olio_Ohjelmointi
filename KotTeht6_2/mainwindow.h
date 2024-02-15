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
    int num = 0;
    float result = 1;
    float num1 = 0;
    float num2 = 0;
    int special;
    int nub = 0;
    int numOfPresses = 0;


private slots:
    void AddNum(const QString &digit);

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_num0_clicked();

    void on_Plus_clicked();

    void on_Minus_clicked();

    void on_Kerto_clicked();

    void on_Jako_clicked();

    void on_clear_clicked();

    void on_Enter_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
