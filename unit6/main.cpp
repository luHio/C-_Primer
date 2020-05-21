#include<iostream>
using namespace std;


int main(int argc,char **argv)
{
	if(argc<2)
	{
		cout<<"未输入参数"<<endl;
		exit(0);
	}
	string str;
	for(int i=1;i<argc;i++)
	{
		str+=argv[i];
	}

	cout<<str<<endl;
}
		
