#include<iostream>
#include<string>
using namespace std;
class Time{
public:
	Time(int=10,int=10,int=10,string="default");//���캯��
	~Time();//��������
	Time(const Time &);//���ƹ��캯������
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
