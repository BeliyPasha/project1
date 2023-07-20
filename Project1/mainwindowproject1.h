#ifndef MAINWINDOWPROJECT1_H
#define MAINWINDOWPROJECT1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowProject1; }
QT_END_NAMESPACE

class MainWindowProject1 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowProject1(QWidget *parent = nullptr);
    ~MainWindowProject1();

private:
    Ui::MainWindowProject1 *ui;
};
#endif // MAINWINDOWPROJECT1_H
