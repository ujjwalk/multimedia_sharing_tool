#include "frmrunning.h"
#include "ui_frmrunning.h"

FrmRunning::FrmRunning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmRunning)
{
    ui->setupUi(this);
    setFixedSize(size());

    enableListConfiguration();
    startServer();
}

FrmRunning::~FrmRunning()
{
    delete ui;
}

void FrmRunning::startServer()
{
    QPixmap yellow_state(QDir::currentPath() + "/media/yellow_state.png");
    ui->lblState2->setPixmap(yellow_state);

    tcp_server_thread = new TcpServerThread();
    tcp_server_thread->setConnectivity(&c);
    QObject::connect(tcp_server_thread, SIGNAL(writeText(QString)), this, SLOT(writeTextOnTxtBox(QString)));
    QObject::connect(tcp_server_thread, SIGNAL(clientConnected()), this, SLOT(clientConnected()));
    QObject::connect(tcp_server_thread, SIGNAL(otherGuyDisconnected()), this, SLOT(otherGuyDisconnected()));
    QObject::connect(tcp_server_thread, SIGNAL(startServerStream()), this, SLOT(startServerStream()));
    tcp_server_thread->start();
}

void FrmRunning::setDict(Dictionary* dict)
{
    this->dict = dict;
    (*dict).getTextOflblStateRunning(ui->lblState);
    ui->btnStop->setText(QString::fromStdString((*dict).getTextOfbtnStopRunning()));
}

void FrmRunning::setSelector(int* selector)
{
    this->selector = selector;
}

void FrmRunning::on_btnStop_clicked()
{
    client_connected = false;
    c.tcpWriteCommand(-1);
    *selector = 1;
    this->close();
}

void FrmRunning::writeTextOnTxtBox(QString str)
{
    ui->txtBox->append(str);
}

void FrmRunning::on_btnSend_clicked()
{
    if(ui->txtLine->text() != "" && client_connected)
    {
        c.tcpWriteData(ui->txtLine->text());
        ui->txtLine->setText("");
    }
}

void FrmRunning::clientConnected()
{
    client_connected = true;
    QPixmap green_state(QDir::currentPath() + "/media/green_state.png");
    ui->lblState2->setPixmap(green_state);
}

void FrmRunning::otherGuyDisconnected()
{
    client_connected = false;
    disconnect(tcp_server_thread, nullptr, nullptr, nullptr);
    tcp_server_thread->terminate();
    tcp_server_thread->wait();

    ui->txtBox->clear();
    startServer();
}

void FrmRunning::enableListConfiguration()
{
    QPixmap eye(QDir::currentPath() + "/media/eye.png");
    QIcon eye_button(eye);
    ui->btnToggleConfig->setText("");
    ui->btnToggleConfig->setIcon(eye_button);
    ui->btnToggleConfig->setIconSize(eye.size());

    ui->listConfigurations->setHidden(false);
}
void FrmRunning::disableListConfiguration()
{
    QPixmap eyegrey(QDir::currentPath() + "/media/eyegrey.png");
    QIcon eye_button(eyegrey);
    ui->btnToggleConfig->setText("");
    ui->btnToggleConfig->setIcon(eye_button);
    ui->btnToggleConfig->setIconSize(eyegrey.size());

    ui->listConfigurations->setHidden(true);
}

void FrmRunning::on_btnToggleConfig_clicked()
{
    if(listconfig_active)
    {
        disableListConfiguration();
        listconfig_active = false;
    }
    else
    {
        enableListConfiguration();
        listconfig_active = true;
    }
}

void FrmRunning::startServerStream()
{
    ui->txtBox->append("Start Server streaming");

}
