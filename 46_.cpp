#include<iostream>

int main()
{
	float a=3,*p;
	p=&a;
	
	printf("%x\n%x\n%x\n%f\n%f\n\n",p,&a,&p,*p,a);
	std::cout<<p<<"\n";
	std::cout<<&a<<"\n";
	std::cout<<&p<<"\n";
	std::cout<<*p<<"\n";
	std::cout<<a;
}
