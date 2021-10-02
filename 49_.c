#include<stdio.h>
int main()
{
	float a=3.5;
	float *p=&a;
	printf("%u\n",p);
	printf("%p",(void*)p);

}
