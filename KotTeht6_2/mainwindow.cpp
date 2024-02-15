#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_num1_clicked()
{
    qDebug("num1 clicked");
    QString str = QStringLiteral("1");
    AddNum(str);

}


void MainWindow::on_num2_clicked()
{
    qDebug("num2 clicked");
    QString str = QStringLiteral("2");
    AddNum(str);

}


void MainWindow::on_num3_clicked()
{
    qDebug("num3 clicked");
    QString str = QStringLiteral("3");
    AddNum(str);

}


void MainWindow::on_num4_clicked()
{
    qDebug("num4 clicked");
    QString str = QStringLiteral("4");
    AddNum(str);

}


void MainWindow::on_num5_clicked()
{
    qDebug("num5 clicked");
    QString str = QStringLiteral("5");
    AddNum(str);

}


void MainWindow::on_num6_clicked()
{
    qDebug("num6 clicked");
    QString str = QStringLiteral("6");
    AddNum(str);

}


void MainWindow::on_num7_clicked()
{
    qDebug("num7 clicked");
    QString str = QStringLiteral("7");
    AddNum(str);

}


void MainWindow::on_num8_clicked()
{
    qDebug("num8 clicked");
    QString str = QStringLiteral("8");
    AddNum(str);

}


void MainWindow::on_num9_clicked()
{
    qDebug("num9 clicked");
    QString str = QStringLiteral("9");
    AddNum(str);

}


void MainWindow::on_num0_clicked()
{
    qDebug("num0 clicked");
    QString str = QStringLiteral("0");
    AddNum(str);

}


void MainWindow::on_Plus_clicked()
{
    qDebug("Add Plus clicked");
    special = 1;
    nub = 1;
}


void MainWindow::on_Minus_clicked()
{
    qDebug("Add Minus clicked");
    special = 2;
    nub = 1;
}


void MainWindow::on_Kerto_clicked()
{
    qDebug("Add Kerto clicked");
    special = 3;
    nub = 1;
}


void MainWindow::on_Jako_clicked()
{
    qDebug("Add Jako clicked");
    special = 4;
    nub = 1;
}


void MainWindow::on_clear_clicked()
{
    qDebug("Resetoitu");
    ui->lineEdit_1->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    num = 1;
    result = 1;
    nub = 0;
    special = 0;
}


void MainWindow::on_Enter_clicked()
{
    qDebug("Count clicked");

    num1 = ui->lineEdit_1->text().toFloat();
    num2 = ui->lineEdit_2->text().toFloat();
    float n1 = num1;
    float n2 = num2;

    switch(special){
    case 1:
        result = n1 +n2;
        qDebug("%d", result);
        break;
    case 2:
        result = n1 - n2;
        qDebug("%d", result);
        break;
    case 3:
        result = n1 * n2;
        qDebug("%d", result);
        break;
    case 4:
        result = n1 / n2;
        qDebug("%d", result);
        break;
    }
    QString res = QString::number(result);
    ui->lineEdit_3->setText(res);
}


void MainWindow::AddNum(const QString &digit)
{
    if (nub == 0){
        QString currentText = ui->lineEdit_1->text();
        ui->lineEdit_1->setText(currentText + digit);
    }
    else if (nub == 1){
        QString currentText = ui->lineEdit_2->text();
        ui->lineEdit_2->setText(currentText + digit);
    }

}
