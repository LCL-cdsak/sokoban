#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QStackedLayout>
#include <QVBoxLayout>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool if_there_is_an_wall(int x,int y);
    bool if_there_is_an_box(int x,int y);
    bool win();
    void bomb();
    void clear_stage();
signals:
    void returntrue();
protected:
    void keyPressEvent(QKeyEvent *e);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void pushButton_5();

private:
    Ui::MainWindow *ui;
    int foot;

};

#endif // MAINWINDOW_H
