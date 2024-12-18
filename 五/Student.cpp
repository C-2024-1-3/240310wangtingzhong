#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过

// 在类外定义display类函数
void Student::display()
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

// 新增的set_value函数的定义，用于给数据成员赋初值
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    strcpy(name, nm);
    sex = s;
}