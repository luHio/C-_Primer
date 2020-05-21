#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}


int main()
{
	int a=5,b=17;

	cout<<"a:"<<a<<" b:"<<b<<endl;
	cout<<"交换之后"<<endl;
	swap(&a,&b);
	cout<<"a:"<<a<<" b:"<<b<<endl;
	return 0;
}
