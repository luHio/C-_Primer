#include<iostream>
#include"Chapter6.h"
int main()
{
	int x;
	std::cin>>x;
	if(x>12)
	{
		std::cout<<"太大 算不过来 放弃了"<<std::endl;
		return 0;
	}
	std::cout<<Fact(x)<<std::endl;
	return 0;
}

unsigned int Fact(unsigned int n)
{
	if(n==0|n==1)
		return 1;
	return n*Fact(n-1);
}
