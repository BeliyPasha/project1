#include "mainwindowproject1.h"
#include "ui_mainwindowproject1.h"

MainWindowProject1::MainWindowProject1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowProject1)
{
    ui->setupUi(this);
}

MainWindowProject1::~MainWindowProject1()
{
    delete ui;
}

