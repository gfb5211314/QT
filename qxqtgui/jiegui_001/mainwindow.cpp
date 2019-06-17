#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtimer.h"
#include <QMessageBox>
#include <qdebug.h>
#include "crc.H"
#include "qfile.h"
#include "QFileDialog"
#include "qstring.h"
#include "qchar.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    update_serial_port_clicked();



 //    QString str =" QString(vb)""";

//        QString   str1 = QString("%1").arg(vb);
//        QString   str2 = QString("%1").arg(vb1);

//    ui->lineEdit_check_version_data->setText(str1+str2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::update_serial_port_clicked()
{


 foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
   {

        serial.setPort(info);

     if(serial.open(QIODevice::ReadWrite))
      {
              ui->comboBox_serial_port_select->addItem(serial.portName());
                serial.close();
       }
  }

}

void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_check_version_data_clicked()
{
    uchar index;
    uchar YAR_data[300];
    ushort crc_data;
      YAR_data[index++]=0x7b;
      YAR_data[index++]=0xb7;  //包头
      YAR_data[index++]=0x01;  //地址
      YAR_data[index++]=0x01;   //功能码
      YAR_data[index++]=0x00;
      YAR_data[index++]=0x02;   //长度
      YAR_data[index++]=0x00;
      YAR_data[index++]=0x00;
      YAR_data[index++]=0xb7;
      YAR_data[index++]=0x7b;
      crc_data=Calc_CRC16( YAR_data, index);
      YAR_data[index++]=uchar(crc_data>>8);
      YAR_data[index++]=(uchar)crc_data;


  serial.write((const char *)YAR_data,index);

}

uchar data_update_buff[60000];  //数据区
uchar data_version_buff[2];        //版本号
uchar data_block_buff[2];           //文件大小


uchar paper_update_buff[40000];  //数据区
uchar paper_version_buff[2];        //版本号
uchar paper_block_buff[2];           //文件大小


uchar door_update_buff[40000];  //数据区
uchar door_version_buff[2];        //版本号
uchar door_block_buff[2];           //文件大小

uchar cream_update_buff[40000];  //数据区
uchar cream_version_buff[2];        //版本号
uchar cream_block_buff[2];           //文件大小

uchar  check_flag;
uchar  update_version_flag;
uchar  update_data_flag;
uchar  update_key_flag;
uchar  version_arr[2];
uchar  update_brock[2];
ushort  now_kuaishu;
uchar update_scuess;
uchar update_scuess_flag;
uchar start_upgrade;
uchar start_upgrade_flag;
void MainWindow::on_pushButton_open_flie_data_clicked()
{
        ushort    data_zongbyte;
        ushort    data_block_number;
        ushort    temp_data_zongbyte,temp_data_zongbyte_1;
        ushort    version_ch;
    QString datafileName = QFileDialog::getOpenFileName(this,
                                                    tr("control升级文件"), "C:/Users/SixSix/Desktop",
                                                       tr("binFile (*.* *.bin)")
                                                    );
   ui->lineEdit_data_file->setText(datafileName);

     QFile data_file(datafileName);
       data_file.open(QIODevice::ReadOnly);
         QByteArray  t = data_file.readAll();

          data_zongbyte=t.size();

         for(ushort cont=0;cont<data_zongbyte;cont++)
         {
                 data_update_buff[cont]=t.at(cont);


         }
  //       qDebug()<<zongbyte;
     QFileInfo info(data_file);

   qDebug() << info.exists();
   qDebug() << info.isFile();
     qDebug() << info.isReadable();
     qDebug() << info.isWritable();

   qDebug() << info.path();
   qDebug() << info.fileName();
   qDebug() << info.suffix();
   qDebug() << info.size();
 //  QString bundle = i
       QString base =info.baseName();
   //获取版本号字符
       version_ch =base.toShort();
   ushort version;
   version=version_ch/100*256+version_ch%100;
     qDebug() << version;
        data_version_buff[0]=version/256;
        data_version_buff[1]=version%256;
      qDebug()<<   data_version_buff[0];
       qDebug()<<     data_version_buff[1];
            data_block_number   = info.size();

             temp_data_zongbyte=data_block_number/256;
             temp_data_zongbyte_1=data_block_number%256;

             if(temp_data_zongbyte_1>0)
             {
                  temp_data_zongbyte=  temp_data_zongbyte+1;
                data_block_buff[0]=temp_data_zongbyte/256;
                data_block_buff[1]=temp_data_zongbyte%256;
             }
             else
             {
             data_block_buff[0]=temp_data_zongbyte/256;
             data_block_buff[1]=temp_data_zongbyte%256;
             }
   data_file.close();

}



void MainWindow::on_pushButton_check_version_paper_clicked()
{
    uchar index=0;
    uchar YAR_data[300];
    ushort crc_data;
      YAR_data[index++]=0xff;
      YAR_data[index++]=0xfe;
      YAR_data[index++]=0x02;
      YAR_data[index++]=0x10;         //
      YAR_data[index++]=0x01;
      YAR_data[index++]=10;
      YAR_data[index++]=0x00;
      YAR_data[index++]=0x00;
      YAR_data[index++]=0xfe;
      YAR_data[index++]=0xff;
      crc_data=Calc_CRC16( YAR_data, index);
      YAR_data[index++]=uchar(crc_data>>8);
      YAR_data[index++]=(uchar)crc_data;


  serial.write((const char *)YAR_data,index);

}

void MainWindow::on_pushButton_open_file_paper_clicked()
{
    ushort    paper_zongbyte;
    ushort    paper_block_number;
    ushort    temp_paper_zongbyte,temp_paper_zongbyte_1;
    ushort    version_ch;
QString paperfileName = QFileDialog::getOpenFileName(this,
                                                tr("纸巾机机升级文件"), "C:/Users/SixSix/Desktop",
                                                   tr("binFile (*.* *.bin)")
                                                );
ui->lineEdit_paper_file->setText(paperfileName);

 QFile paper_file(paperfileName);
   paper_file.open(QIODevice::ReadOnly);
     QByteArray  t = paper_file.readAll();

      paper_zongbyte=t.size();

     for(ushort cont=0;cont<paper_zongbyte;cont++)
     {
             paper_update_buff[cont]=t.at(cont);


     }
//       qDebug()<<zongbyte;
 QFileInfo info(paper_file);

qDebug() << info.exists();
qDebug() << info.isFile();
 qDebug() << info.isReadable();
 qDebug() << info.isWritable();

qDebug() << info.path();
qDebug() << info.fileName();
qDebug() << info.suffix();
qDebug() << info.size();
//  QString bundle = i
   QString base =info.baseName();
//获取版本号字符
   version_ch =base.toShort();
ushort version;
version=version_ch/100*256+version_ch%100;
 qDebug() << version;
    paper_version_buff[0]=version/256;
    paper_version_buff[1]=version%256;
  qDebug()<<   paper_version_buff[0];
   qDebug()<<     paper_version_buff[1];
        paper_block_number   = info.size();

         temp_paper_zongbyte=paper_block_number/128;
         temp_paper_zongbyte_1=paper_block_number%128;

         if(temp_paper_zongbyte_1>0)
         {
              temp_paper_zongbyte=  temp_paper_zongbyte+1;
            paper_block_buff[0]=temp_paper_zongbyte/256;
            paper_block_buff[1]=temp_paper_zongbyte%256;
         }
         else
         {
         paper_block_buff[0]=temp_paper_zongbyte/256;
         paper_block_buff[1]=temp_paper_zongbyte%256;
         }
paper_file.close();
}

void MainWindow::on_pushButton_start_update_paper_clicked()
{
send_update_command(0x02);
}

void MainWindow::on_pushButton_check_version_door_clicked()
{
    uchar index=0;
    uchar YAR_data[300];
    ushort crc_data;
      YAR_data[index++]=0xff;
      YAR_data[index++]=0xfe;
      YAR_data[index++]=0x07;
      YAR_data[index++]=0x10;         //
      YAR_data[index++]=0x01;
      YAR_data[index++]=10;
      YAR_data[index++]=0x00;
      YAR_data[index++]=0x00;
      YAR_data[index++]=0xfe;
      YAR_data[index++]=0xff;
      crc_data=Calc_CRC16( YAR_data, index);
      YAR_data[index++]=uchar(crc_data>>8);
      YAR_data[index++]=(uchar)crc_data;


  serial.write((const char *)YAR_data,index);
}

void MainWindow::on_pushButton_open_file_door_clicked()
{
    ushort    door_zongbyte;
    ushort    door_block_number;
    ushort    temp_door_zongbyte,temp_door_zongbyte_1;
    ushort    version_ch;
QString doorfileName = QFileDialog::getOpenFileName(this,
                                                tr("纸巾机机升级文件"), "C:/Users/Fubiao.Guo/Desktop",
                                                   tr("binFile (*.* *.bin)")
                                                );
ui->lineEdit_door_file->setText(doorfileName);

 QFile door_file(doorfileName);
   door_file.open(QIODevice::ReadOnly);
     QByteArray  t = door_file.readAll();

      door_zongbyte=t.size();

     for(ushort cont=0;cont<door_zongbyte;cont++)
     {
             door_update_buff[cont]=t.at(cont);


     }
//       qDebug()<<zongbyte;
 QFileInfo info(door_file);

qDebug() << info.exists();
qDebug() << info.isFile();
 qDebug() << info.isReadable();
 qDebug() << info.isWritable();

qDebug() << info.path();
qDebug() << info.fileName();
qDebug() << info.suffix();
qDebug() << info.size();
//  QString bundle = i
   QString base =info.baseName();
//获取版本号字符
   version_ch =base.toShort();
ushort version;
version=version_ch/100*256+version_ch%100;
 qDebug() << version;
    door_version_buff[0]=version/256;
    door_version_buff[1]=version%256;
  qDebug()<<   door_version_buff[0];
   qDebug()<<     door_version_buff[1];
        door_block_number   = info.size();

         temp_door_zongbyte=door_block_number/128;
         temp_door_zongbyte_1=door_block_number%128;

         if(temp_door_zongbyte_1>0)
         {
              temp_door_zongbyte=  temp_door_zongbyte+1;
            door_block_buff[0]=temp_door_zongbyte/256;
            door_block_buff[1]=temp_door_zongbyte%256;
         }
         else
         {
         door_block_buff[0]=temp_door_zongbyte/256;
         door_block_buff[1]=temp_door_zongbyte%256;
         }
door_file.close();

}

void MainWindow::on_pushButton_start_update_door_clicked()
{
send_update_command(0x07);
}
void MainWindow::on_pushButton_check_version_cream_clicked()
{
    uchar index=0;
    uchar YAR_data[300];
    ushort crc_data;
      YAR_data[index++]=0xff;
      YAR_data[index++]=0xfe;
      YAR_data[index++]=0x03;
      YAR_data[index++]=0x10;         //
      YAR_data[index++]=0x01;
      YAR_data[index++]=10;
      YAR_data[index++]=0x00;
      YAR_data[index++]=0x00;
      YAR_data[index++]=0xfe;
      YAR_data[index++]=0xff;
      crc_data=Calc_CRC16( YAR_data, index);
      YAR_data[index++]=uchar(crc_data>>8);
      YAR_data[index++]=(uchar)crc_data;


  serial.write((const char *)YAR_data,index);
}

void MainWindow::on_pushButton_open_file_cream_clicked()
{
    ushort    cream_zongbyte;
    ushort    cream_block_number;
    ushort    temp_cream_zongbyte,temp_cream_zongbyte_1;
    ushort    version_ch;
QString creamfileName = QFileDialog::getOpenFileName(this,
                                                tr("纸巾机机升级文件"), "C:/Users/SixSix/Desktop",
                                                   tr("binFile (*.* *.bin)")
                                                );
ui->lineEdit_cream_file->setText(creamfileName);

 QFile cream_file(creamfileName);
   cream_file.open(QIODevice::ReadOnly);
     QByteArray  t = cream_file.readAll();

      cream_zongbyte=t.size();

     for(ushort cont=0;cont<cream_zongbyte;cont++)
     {
             cream_update_buff[cont]=t.at(cont);


     }
//       qDebug()<<zongbyte;
 QFileInfo info(cream_file);

qDebug() << info.exists();
qDebug() << info.isFile();
 qDebug() << info.isReadable();
 qDebug() << info.isWritable();

qDebug() << info.path();
qDebug() << info.fileName();
qDebug() << info.suffix();
qDebug() << info.size();
//  QString bundle = i
   QString base =info.baseName();
//获取版本号字符
   version_ch =base.toShort();
ushort version;
version=version_ch/100*256+version_ch%100;
 qDebug() << version;
    cream_version_buff[0]=version/256;
    cream_version_buff[1]=version%256;
  qDebug()<<   cream_version_buff[0];
   qDebug()<<     cream_version_buff[1];
        cream_block_number   = info.size();

         temp_cream_zongbyte=cream_block_number/128;
         temp_cream_zongbyte_1=cream_block_number%128;

         if(temp_cream_zongbyte_1>0)
         {
              temp_cream_zongbyte=  temp_cream_zongbyte+1;
            cream_block_buff[0]=temp_cream_zongbyte/256;
            cream_block_buff[1]=temp_cream_zongbyte%256;
         }
         else
         {
         cream_block_buff[0]=temp_cream_zongbyte/256;
         cream_block_buff[1]=temp_cream_zongbyte%256;
         }
cream_file.close();

}

void MainWindow::on_pushButton_start_update_cream_clicked()
{
   send_update_command(0x03);
}

void MainWindow::on_pushButton_check_version_cup_clicked()
{

}

void MainWindow::on_pushButton_open_file_cup_clicked()
{

}

void MainWindow::on_pushButton_start_update_cup_clicked()
{

}

void MainWindow::on_pushButton_open_serial_clicked()
{
    if(ui->pushButton_open_serial->text()==tr("打开串口"))
    {


          serial.setPortName(ui->comboBox_serial_port_select->currentText());
          if(serial.open(QIODevice::ReadWrite))
          {
              //设置波特率
              serial.setBaudRate(ui->comboBox_baud->currentText().toInt());
              //设置数据位
              serial.setDataBits(QSerialPort::Data8);
                 //设置校验位
              serial.setParity(QSerialPort::NoParity);
                //设置流控制
              serial.setFlowControl(QSerialPort::NoFlowControl);
             //设置停止位
              serial.setStopBits(QSerialPort::OneStop);
            ui->pushButton_open_serial->setText("关闭串口");
             ui->pushButton_open_serial->setStyleSheet("QPushButton { background-color: red }");

            QTimer *timer = new QTimer(this);
                 connect(timer, SIGNAL(timeout()), this, SLOT(serial_read_data_clicked()));
              timer->start(100);
          }
          else
          {

              QMessageBox::about(this, "提示", "串口没有打开！");
                         return;

          }


    }
    else
    {


        serial.close();
        ui->pushButton_open_serial->setText("打开串口");
         ui->pushButton_open_serial->setStyleSheet("QPushButton { background-color: white }");
    }
}
//下发升级命令
void MainWindow::on_pushButton_start_update_data_clicked()
{
     send_update_command(0x01);
}

void MainWindow::send_update_command(uchar addr )
{

        uchar index=0;
        uchar send_update_command_data[300];
        ushort crc_data=0;
          send_update_command_data[index++]=0x7b;
          send_update_command_data[index++]=0xb7;
          send_update_command_data[index++]=addr;
          send_update_command_data[index++]=0x02;         //功能码
          send_update_command_data[index++]=0x00;
          send_update_command_data[index++]=0x01;    //长度
          send_update_command_data[index++]=0x01;    //data
          send_update_command_data[index++]=0xb7;    //尾
          send_update_command_data[index++]=0x7b;
          crc_data=Calc_CRC16( send_update_command_data, index);
          send_update_command_data[index++]=uchar(crc_data>>8);
          send_update_command_data[index++]=(uchar)crc_data;


      serial.write((const char *)send_update_command_data,index);
}
//下发LOGO升级包大小
void MainWindow::send_update_pack_data(uchar addr , uchar *p,  uchar *update_block)
{



    uchar index=0;
    uchar send_update_command_data[300];
    ushort crc_data=0;
      send_update_command_data[index++]=0x7b;
      send_update_command_data[index++]=0xb7;
      send_update_command_data[index++]=addr;
      send_update_command_data[index++]=0x03;         //功能码
      send_update_command_data[index++]=0x00;
      send_update_command_data[index++]=0x04;           //长度
      send_update_command_data[index++]=*p;            //版本
      send_update_command_data[index++]=*(p+1);        //版本
      send_update_command_data[index++]=*update_block;
      send_update_command_data[index++]=*(update_block+1);  //块数
      send_update_command_data[index++]=0xb7;
      send_update_command_data[index++]=0x7b;
      crc_data=Calc_CRC16( send_update_command_data, index);
      send_update_command_data[index++]=uchar(crc_data>>8);
      send_update_command_data[index++]=(uchar)crc_data;


  serial.write((const char *)send_update_command_data,index);


}
//升级数据包
void MainWindow::send_update_data(uchar addr,uchar*ver, uchar *Block_Num,  uchar *update_data,uchar * block_buff)
{

    uint index=0;
    uchar send_update_data[600];
    ushort crc_data=0;
      send_update_data[index++]=0x7b;
      send_update_data[index++]=0xb7;
      send_update_data[index++]=addr;
      send_update_data[index++]=0x04;         //功能码
      send_update_data[index++]=0x01;
      send_update_data[index++]=0x2c;         //长度
      send_update_data[index++]=*ver;
      send_update_data[index++]=*(ver+1);     //版本
      send_update_data[index++]=*Block_Num;
      send_update_data[index++]=*(Block_Num+1);   //块数

      /**拆包数据***/
    //  send_update_data[index++]=*update_data;
     // send_update_data[index++]=*(update_data+1);


      uchar   progress_data;
           progress_data   = ((*Block_Num)*256+(*(Block_Num+1))+1)*100/(block_buff[0]*256+block_buff[1]);
           if(addr==0x01)
           {
     ui->progressBar_data->setValue(progress_data);
           }
           if(addr==0x02)
           {


           ui->progressBar_paper->setValue(progress_data+1);
           }

           if(addr==0x07)
           {


           ui->progressBar_door->setValue(progress_data+1);
           }
           if(addr==0x03)
           {


           ui->progressBar_cream->setValue(progress_data+1);
           }
      for(uint data_count=0;data_count<256;data_count++)
      {
        send_update_data[index++]=update_data[data_count+((*Block_Num)*256+(*(Block_Num+1)))*256];

     }

      send_update_data[index++]=0xb7;
      send_update_data[index++]=0x7b;
      crc_data=Calc_CRC16( send_update_data, index);
      send_update_data[index++]=uchar(crc_data>>8);
      send_update_data[index++]=(uchar)crc_data;
  serial.write((const char *)send_update_data,index);

}

void MainWindow::on_pushButton_rhex_clicked()
{
    if(ui->pushButton_rhex->text()=="RHex")
    {
           ui->pushButton_rhex->setText(tr("ASCII"));
    }
    else if(ui->pushButton_rhex->text()=="ASCII")
    {
       ui->pushButton_rhex->setText(tr("RHex"));
    }
}

void MainWindow::on_pushButton_cleardata_clicked()
{
         ui->textBrowser_RX->clear();
}
   QString   str1;
   QString   str2;
        QTimer *timer1;
void MainWindow::serial_read_data_clicked()
{

          ushort    crc_data=0;
             ushort    crc_data1=0;
             uchar   version_1,version_2;
             uchar   length1_data;
         QByteArray temp = serial.readAll();
            length1_data=temp.size();
              uchar temp_data[500];
     //
         //读取串口缓冲区的所有数据给临时变量temp
          if(!temp.isEmpty())
          {
              //   qDebug    ("length=%d",temp.length());
              for(ushort i=0;i<temp.length();i++)
              {
                //  qDebug<<temp.at(0);
// qDebug    ("length=%d",temp.at(i));

               temp_data[i]=temp.at(i);
              }
                if((temp_data[0]==0x7b)&&(temp_data[1]==0xb7)
                     &&(temp_data[temp.size()-3]==0x7b)&&(temp_data[temp.size()-4]==0xb7))
                {

                       crc_data=Calc_CRC16(temp_data,((temp.size())-2));

                      crc_data1=  temp_data[length1_data-1]+temp_data[length1_data-2]*256;


                           qDebug    ("crc_data=%d",crc_data);
                           qDebug    ("crc_data1=%d",crc_data1);
                           if(crc_data==crc_data1)
                           {
                           qDebug() << "CRC正确";
                           switch(temp_data[3])
                                 {

                                    case  0x12 :
                                                    qDebug()<<"jinru shengji ";
                                                   /*数据线机*/
                                                  if((temp_data[6]==data_version_buff[0])&&(temp_data[7]==data_version_buff[1])&&(temp_data[2]==0x05))
                                                  {

                                                      qDebug()<<"请求版本号一致";
                                                      qDebug()<<(temp_data[8]*256+temp_data[9]);
                                                      uchar ver_data_num[2];
                                                      ver_data_num[0]=temp_data[8]*256;
                                                      ver_data_num[1]=temp_data[9];
                                                      qDebug()<<"请求升级快数";
                                                        qDebug()<<(ver_data_num[0]*256+ver_data_num[1]);
                                                send_update_data(0x05,data_version_buff, ver_data_num, data_update_buff,data_block_buff);
                                                  }
                                                  else if((temp_data[6]==paper_version_buff[0])&&(temp_data[7]==paper_version_buff[1])&&(temp_data[2]==0x02))
                                                  {

                                                      qDebug()<<"请求版本号一致";
                                                      qDebug()<<(temp_data[8]*256+temp_data[9]);
                                                      uchar ver_paper_num[2];
                                                      ver_paper_num[0]=temp_data[8]*256;
                                                      ver_paper_num[1]=temp_data[9];
                                                      qDebug()<<"请求升级快数";
                                                        qDebug()<<(ver_paper_num[0]*256+ver_paper_num[1]);
                                                send_update_data(0x02,paper_version_buff, ver_paper_num, paper_update_buff,paper_block_buff);
                                                  }
                                                  else if((temp_data[6]==door_version_buff[0])&&(temp_data[7]==door_version_buff[1])&&(temp_data[2]==0x07))
                                                  {

                                                      qDebug()<<"请求版本号一致";
                                                      qDebug()<<(temp_data[8]*256+temp_data[9]);
                                                      uchar ver_door_num[2];
                                                      ver_door_num[0]=temp_data[8]*256;
                                                      ver_door_num[1]=temp_data[9];
                                                      qDebug()<<"请求升级快数";
                                                        qDebug()<<(ver_door_num[0]*256+ver_door_num[1]);
                                                send_update_data(0x07,door_version_buff, ver_door_num, door_update_buff,door_block_buff);
                                                  }
                                                  else if((temp_data[6]==cream_version_buff[0])&&(temp_data[7]==cream_version_buff[1])&&(temp_data[2]==0x03))
                                                  {

                                                      qDebug()<<"请求版本号一致";
                                                      qDebug()<<(temp_data[8]*256+temp_data[9]);
                                                      uchar ver_cream_num[2];
                                                      ver_cream_num[0]=temp_data[8]*256;
                                                      ver_cream_num[1]=temp_data[9];
                                                      qDebug()<<"请求升级快数";
                                                        qDebug()<<(ver_cream_num[0]*256+ver_cream_num[1]);
                                                send_update_data(0x03,cream_version_buff, ver_cream_num, cream_update_buff,cream_block_buff);
                                                  }
                                                          break;


                                        case  0x01  :         qDebug()<<"当前版本号";
                                                               qDebug()<<temp_data[6] ;
                                                              qDebug()<<temp_data[7] ;
                                                                   version_1=temp_data[6] ;
                                                                    version_2=temp_data[7] ;
                                                                   str1 = QString("0%1").arg(version_1);
                                                                    str2 = QString("0%1").arg(version_2);
                                                                    //control
                                                               if(temp_data[2]==0x01)
                                                               {
                                                                ui->lineEdit_check_version_data->setText(str1+str2);
                                                               }
                                                               else if(temp_data[2]==0x02)
                                                               {
                                                                ui->lineEdit_check_version_paper->setText(str1+str2);
                                                               }
                                                               else if(temp_data[2]==0x07)
                                                               {
                                                                ui->lineEdit_check_version_door->setText(str1+str2);
                                                               }
                                                               else if(temp_data[2]==0x03)
                                                               {
                                                                ui->lineEdit_check_version_cream->setText(str1+str2);
                                                               }
                                                              break;
                                     case 0x02 :
                                          qDebug()<<"MCU收到升级命令 ";
                                //收到MCU --ACK


                                       start_upgrade=1;
                                   timer1 = new QTimer(this);
                              connect(timer1, SIGNAL(timeout()), this, SLOT(send_update_data_pake()));
                               timer1->start(300);
                                    break;
                               //sheng升级包应答
                           case 0x03 :
                                qDebug()<<"MCU收到升级包大小ACK ";
                                  start_upgrade=0;
                                       //收到MCU --ACK
                                  start_upgrade_flag=1;

                          break;
                           case 0x04 :
                                qDebug()<<"MCU收到升级包数据大小ACK ";

                                       //收到MCU --ACK

                          break;

















                                 }
                           }
                           else
                           {
                                     qDebug() << "CRC错误";

                           }


                }
                if(ui->pushButton_rhex->text()=="RHex")
                {
                ui->textBrowser_RX->insertPlainText(temp.toHex());
          ui->textBrowser_RX->insertPlainText("\n");
                }
                else if(ui->pushButton_rhex->text()=="ASCII")
                {
                    ui->textBrowser_RX->insertPlainText(temp);

                }
                 }
}
uint block_num_count;
void MainWindow::send_update_data_pake()
{
    //发送升级包大小
        if(start_upgrade==1)
        {
           send_update_pack_data(0x01 , data_version_buff,  data_block_buff);
        }

        if(start_upgrade_flag==1)
        {

            uchar ver_data_num[2];
            ver_data_num[0]=block_num_count/256;
            ver_data_num[1]=block_num_count%256;
                   qDebug()<<"总块数";
            qDebug()<<(data_block_buff[0]*256+data_block_buff[1]);

             qDebug()<<"请求升级快数";
              qDebug()<<(block_num_count);
      send_update_data(0x01,data_version_buff, ver_data_num, data_update_buff,data_block_buff);


                block_num_count++;
               if(block_num_count==((data_block_buff[0]*256+data_block_buff[1])+1))
               {
                         qDebug()<<"发送完成";
                   start_upgrade_flag=0;
                   timer1->stop();
                       block_num_count=0;
               }
        }
}

