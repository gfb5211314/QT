#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_check_version_data_clicked();

    void on_pushButton_open_flie_data_clicked();

    void on_pushButton_start_update_data_clicked();

    void on_pushButton_check_version_paper_clicked();

    void on_pushButton_open_file_paper_clicked();

    void on_pushButton_start_update_paper_clicked();

    void on_pushButton_check_version_door_clicked();

    void on_pushButton_open_file_door_clicked();

    void on_pushButton_start_update_door_clicked();

    void on_pushButton_check_version_cream_clicked();

    void on_pushButton_open_file_cream_clicked();

    void on_pushButton_start_update_cream_clicked();

    void on_pushButton_check_version_cup_clicked();

    void on_pushButton_open_file_cup_clicked();

    void on_pushButton_start_update_cup_clicked();

    void on_pushButton_open_serial_clicked();
     void    update_serial_port_clicked();
     void    serial_read_data_clicked();
     void on_pushButton_rhex_clicked();

     void on_pushButton_cleardata_clicked();
    void send_update_command(uchar addr);
    void send_update_data(uchar addr,uchar *ver, uchar *Block_Num,  uchar *update_data,uchar * block_buff);
    void send_update_pack_data(uchar addr , uchar *p,  uchar *update_block);
    void send_update_data_pake();
private:
    Ui::MainWindow *ui;


    QSerialPort   serial;
};

#endif // MAINWINDOW_H
