//header.h
#include<iostream>
#include<string>
using namespace std;
class Student{
public:
	Student(string name="voidName",int height=-1,int weight=-1,int sexaul=-1);
	~Student();
	void inputInfo();
	string getSex();
	string getName();
	void showInfo();//显示个人基本信息
private:
	string name;
	int height;//cm
	int weight;//kg
	int sexaul;//0 for M,1 for F
};
class BasicGrades:virtual public Student{
public:
	BasicGrades(int=-1,int=-1,int=-1);
	~BasicGrades();
	void showBasicGrades();
private:
	int math;
	int english;
	int physics;
};
class CSGrades:virtual public Student{
public:
	CSGrades(int cppProgramming=-1,int networkEngineering=-1);
	~CSGrades();
	void showCSGrades();
private:
	int cppProgramming;
	int networkEngineering;
};
class CSStudent:public BasicGrades,public CSGrades{
public:
	CSStudent(int math=-1,int english=-1,int physics=-1,int cppProgramming=-1,int networkEngineering=-1,int grade=-1);
	~CSStudent();
	void showall();
private:
	int grade;
};
