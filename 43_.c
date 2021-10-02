#include<stdio.h>
int main()
{
	float a=3,*p;
	p=&a;
	printf("%u\n",p);
	printf("%f",*p);
}
