#include<iostream>

int main()
{
	int *p=new int[5];
	for(int i=0;i<=4;i++)
	{
		std::cout<<"Enter a number ";
		std::cin>>*(p+i);
	}
	for(int i=0;i<=4;i++)
	{
		std::cout<<*(p+i)<<"\n";
	}
//	delete []p;
//	p=nullptr;
	std::cout<<p;
}
