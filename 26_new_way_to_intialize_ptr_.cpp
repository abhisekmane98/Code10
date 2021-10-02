#include<iostream>

int main()
{
	int a=3;
	std::cout<<&a<<"\n";
	int *p=nullptr;
	p=(int*)0x70fe14;
	std::cout<<*p<<","<<p;
	
}
