#include<iostream>
#include<cmath>

int main()
{
	int x;
	std::cin>>x;
	if(x<0)
	x=abs(x);
	std::cout<<x<<std::endl;
	return 0;
}
