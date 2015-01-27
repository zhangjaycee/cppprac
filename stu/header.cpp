//header.cpp
#include<iostream>
#include"header.h"
/*Student���Ա����*/
//Student���캯��
Student::Student(string Nname,int Nheight,int Nweight,int Nsexaul):
name(Nname),height(Nheight)
{
//	weight=Nweight;
//	sexaul=Nsexaul;
//	if(Nname=="voidname"||Nheight==-1||Nweight==-1||Nsexaul==-1){
		inputInfo();
//	}
	cout<<"Student Constructor!!"<<endl;
}
//Student��������
Student::~Student()
{
	cout<<"Student Destructor!"<<endl;
}
//inputInfo()
void Student::inputInfo()
{
	cout<<"name?"<<endl;
	cin>>name;
	cout<<"height?"<<endl;
	cin>>height;
	cout<<"weight?"<<endl;
	cin>>weight;
	cout<<"sexaul?(0 for M,1 for F)"<<endl;
	cin>>sexaul;
}

//getSex()
string Student::getSex()
{
	string temp;
	if(sexaul==1)
		return "Female";
	if(sexaul==0)
		return "Male  ";
	return "Void  ";
}
//getName()
string Student::getName()
{
	return name;
}
//showInfo()
void Student::showInfo()
{
	cout<<"***************"<<name<<"'s Information"<<"****************"<<endl;
	cout<<"height    "<<height<<" cm"<<endl;
	cout<<"weight    "<<weight<<" kg"<<endl;
	cout<<"sexaul    "<<getSex()<<endl;
}

/*BasicGrades���Ա����*/
//BasicGrades���캯��
BasicGrades::BasicGrades(int a,int b,int c):
math(a),english(b),Student()
{
	physics=c;
//	inputInfo();
	cout<<"BasicGrades Constructor!!"<<endl;
}
//BasicGrades��������
BasicGrades::~BasicGrades()
{
	cout<<"BasicGrades Destructor!"<<endl;
}
//showBasicGrades()
void BasicGrades::showBasicGrades()
{
	cout<<"***************"<<getName()<<"'s Basic Grades"<<"****************"<<endl;
	cout<<"Math      "<<math<<endl;
	cout<<"English   "<<english<<endl;
	cout<<"Physics   "<<physics<<endl;
}

/*CSGrades���Ա����*/
//CSGrade���캯��
CSGrades::CSGrades(int newCppProgamming,int newNetworkEngineering):Student()
{
	cppProgramming=newCppProgamming;
	networkEngineering=newNetworkEngineering;
	//inputInfo();
	cout<<"CSGrades Constructor!!"<<endl;
}
//CSGrades��������
CSGrades::~CSGrades()
{
	cout<<"CSGrades Destructor!"<<endl;
}
//show()
void CSGrades::showCSGrades()
{
	cout<<"***************"<<getName()<<"'s CS Grades"<<"****************"<<endl;
	cout<<"CppPrg    "<<cppProgramming<<endl;
	cout<<"Net'Eng   "<<networkEngineering<<endl;
}
/*CSStudent���Ա��������*/
//CSStudent���캯��
CSStudent::CSStudent(int newMath,int newEnglish,int newPhysics,int cppProgramming,int newNetworkEngineering,int newGrade):
	BasicGrades(newMath,newEnglish,newPhysics),
	CSGrades(cppProgramming,newNetworkEngineering)
{
	grade=newGrade;
	cout<<"CSStudent Constructor!!"<<endl;
}
CSStudent::~CSStudent()
{
	cout<<"CSStudent Destructor!"<<endl;
}
void CSStudent::showall()
{
	showInfo();
    showBasicGrades();
	showCSGrades();
	cout<<getName()<<" is now in "<<grade<<" grade"<<endl;
}













