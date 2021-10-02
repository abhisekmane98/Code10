#include<iostream>

int main()
{
	int *p=new int[5];
	p[0]=2;
	p[1]=3;
	p[2]=5;
	p[3]=7;
	p[4]=11;
	
	for(int i=0;i<=4;i++)
	{
		std::cout<<*(p+i)<<"\n";
	}
	delete []p;
//	p=nullptr;
//	std::cout<<*p;
}
