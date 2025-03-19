#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>  // 包含了Qt对话框的基础类
#include <QMouseEvent>  // 包含了处理鼠标事件的类

#include "zscene.h"  // 自定义头文件，假设它定义了一个场景类zScene

namespace Ui {
class mainDialog;  // 前置声明mainDialog类，位于Ui命名空间中
}

// 定义mainDialog类，继承自QDialog
class mainDialog : public QDialog
{
    Q_OBJECT  // 必需的宏，用于启用信号和槽机制

public:
    explicit mainDialog(QWidget *parent = 0);  // 构造函数，explicit防止隐式转换
    zScene* scene;  // 指向zScene对象的指针，可能用于管理视图中的图形元素等
    ~mainDialog();  // 析构函数

protected:
    // 这里可以添加保护成员函数或变量，比如处理特定事件的函数

private:
    Ui::mainDialog *ui;  // 指向UI类的实例，通常由Qt Designer生成的.ui文件创建

public slots:
    void startLawn();  // 公共槽函数，可能是开始某个与草坪相关的功能
    void startDark();  // 另一个公共槽函数，可能涉及暗色主题或其他相关功能
    void back();  // 返回功能的槽函数
};

#endif // MAINDIALOG_H
