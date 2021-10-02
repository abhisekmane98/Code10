#include<iostream>

int main()
{
//	int *p=nullptr;
//	std::cout<<p<<"\n";
	
	int *p=new int[5];
//	std::cout<<p<<"\n";
	
	p[0]=4;
	p[1]=5;
	p[2]=7;
	p[3]=11;
	p[4]=21;
	
	for(int i=0;i<=4;i++)
	{
		std::cout<<*(p+i)<<"\n";
	}
	delete []p;
}
