#include <iostream>
#include "student.h"

int main()
{
    Student stud;                //定义对象
    Student stud1;
    // 使用set_value函数给stud1对象的数据成员赋初值
    stud1.set_value(007, "tcg", 'm');
    stud.display();
    stud1.display();
    return 0;
