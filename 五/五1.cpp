#include <iostream>
using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void input()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void output()
	{
		cout << hour << ":" << minute << ":" <<
	}
};

int main()
{
	Time t1;
	t1.input();
	t1.output();
	return 0;
}