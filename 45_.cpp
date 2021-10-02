#include<iostream>

int main()
{
	int a=3,*p;
	p=&a;
	
	printf("%x\n%x\n%x\n%x\n\n",p,&a,&p,*p);
	std::cout<<p<<"\n";
	std::cout<<&a<<"\n";
	std::cout<<&p<<"\n";
	std::cout<<*p;
}
