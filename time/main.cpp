#include"time.h"
int main()
{
	Time t1,t2(2,2,2,"t2");
	int temp;
	cout<<"******************************************************"<<endl;
	cout<<"Time t1,t2(2,2,2,\"t2\")"<<endl;
	cout<<"******************************************************"<<endl;
	t1.ShowTime();
	t2.ShowTime();
	cout<<"******************************************************"<<endl;
	cout<<"t1.SetTime(1,1,1)"<<endl;
	cout<<"******************************************************"<<endl;
	t1.SetTime(1,1,1);
	t1.ShowTime();
	t2.ShowTime();
	cout<<"******************************************************"<<endl;
	cout<<"Time t3(t2)"<<endl;
	cout<<"******************************************************"<<endl;
	Time t3(t2);
	t1.ShowTime();
	t2.ShowTime();
	t3.ShowTime();
	cout<<"******************************************************"<<endl;
	cout<<"t3.setName"<<endl;
	cout<<"******************************************************"<<endl;
	t3.setName("t3");
	t1.setName("t1");
	t1.ShowTime();
	t2.ShowTime();
	t3.ShowTime();
	cout<<"***********TAKS1 DONE!!**************************************"<<endl;
	Time * t4=new Time(4,4,4,"t4");
	t4->ShowTime();
	delete t4;
	cout<<"***********Task2 done!!****************************************"<<endl;
	Time t5=t1;
	t5.ShowTime();
	t5.setNextTime("22222");
	cout<<"************ALL DONE!!!!****************************************"<<endl;
	return 0;
}
