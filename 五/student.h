class Student              //类声明
{
public:
    void display();
    void set_value(int n, const char* nm, char s);  // 新增的设置值的成员函数声明
private:
    int num;
    char name[20];
    char sex;
};