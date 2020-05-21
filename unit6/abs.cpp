#include<iostream>
#include<cmath>
#include"Chapter6.h"
int main()
{
	int x;
	std::cin>>x;
	std::cout<<Abs(x)<<std::endl;
	return 0;
}

unsigned int Abs(int x)
{
	if(x<0)	
	x=abs(x);
	return x;
}
