#include <iostream>
#include "student.h"

int main()
{
    Student stud;                //�������
    Student stud1;
    // ʹ��set_value������stud1��������ݳ�Ա����ֵ
    stud1.set_value(007, "tcg", 'm');
    stud.display();
    stud1.display();
    return 0;
