#include<iostream>//������д
#include<string>
#include<fstream>//���ļ���д
using namespace std;
int main()
{
	ofstream ostrm;//���ԣ����ļ������
	ostrm.open("123");
	ostrm<<"my"<<endl;
	ostrm<<123<<endl;
	ostrm.close();
	ifstream istrm;//���ԣ����ļ�������
	istrm.open("123");
	string str;
	int n;
	istrm>>str>>n;
	cout<<str<<"&"<<n<<endl;
	istrm.close();
	return 0;
}
