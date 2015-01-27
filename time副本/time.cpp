#include"time.h"
//构造函数
Time::Time(int h,int m,int s,string st):
Hour(h),Minute(m),Second(s)
{
	if(st!="NULL")
		setName(st);
	cout<<name<<"   Construct completed!!!"<<endl;
}
//复制构造函数
Time::Time(const Time & t0)
{
	Hour=t0.Hour;
	Minute=t0.Minute;
	Second=t0.Second;
	name=t0.name;
}
void Time::setName(string st)
{
	name=st;
}
void Time::setNextTime(string st)
{
	nextTime=new Time(0,0,0,st);
	showNextTime();
}
void Time::showNextTime()
{
	cout<<"################NOW,Showing nextTime of" <<name<<"!################"<<endl;
	cout<<nextTime->name<<"   "<<nextTime->Hour<<":"<<nextTime->Minute<<":"<<nextTime->Second<<endl;
	cout<<"#####################################################"<<endl;
}
void Time::SetTime(int NewH,int NewM,int NewS)
{
	Hour=NewH;
	Minute=NewM;
	Second=NewS;
}
void Time::ShowTime()
{
	cout<<name<<"    "<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
Time::~Time()
{
	cout<<name<<"    Destruct completed!!"<<endl;
}
