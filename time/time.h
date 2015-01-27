#include<iostream>
#include<string>
using namespace std;
class Time{
public:
	Time(int=10,int=10,int=10,string="default");//构造函数
	~Time();//析构函数
	Time(const Time &);//复制构造函数声明
	void SetTime(int NewH,int NewM ,int NewS);
	void ShowTime();
	void setName(string);
	void setNextTime(string="setNextTimeDefault");
	void showNextTime();
private:
	int Hour,Minute,Second;
	string name;
	Time * nextTime;
};
