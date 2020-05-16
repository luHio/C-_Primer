#include<iostream>
unsigned long long  Fact(unsigned long long  n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	return n*Fact(n-1);
}


int main()
{
	int x;
	std::cin>>x;
	if(x>10)
	{
		std::cout<<"太大 算不过来 放弃了"<<std::endl;
		return 0;
	}
	std::cout<<Fact(x)<<std::endl;
	return 0;
}
