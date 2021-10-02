#include<iostream>

int main()
{
	int a=3;
	int *p=&a;
	float *q=nullptr;
	const char *r="hello";
	
	std::cout<<"hey "<<p<<" bye\n";
	std::cout<<"hey "<<q<<" bye\n";
	std::cout<<"hey "<<r<<" bye\n";
}
