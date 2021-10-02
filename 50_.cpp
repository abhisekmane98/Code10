#include<iostream>

int main()
{
	float a=3.5;
	float *p=&a;
	
	printf("%x\n",p);
	printf("%p\n\n",(void*)p);

	std::cout<<p<<"\n";
	std::cout<<*p;
}
