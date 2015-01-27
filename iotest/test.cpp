#include<iostream>//从流读写
#include<string>
#include<fstream>//从文件读写
using namespace std;
int main()
{
	ofstream ostrm;//可以（向文件）输出
	ostrm.open("123");
	ostrm<<"my"<<endl;
	ostrm<<123<<endl;
	ostrm.close();
	ifstream istrm;//可以（从文件）输入
	istrm.open("123");
	string str;
	int n;
	istrm>>str>>n;
	cout<<str<<"&"<<n<<endl;
	istrm.close();
	return 0;
}
