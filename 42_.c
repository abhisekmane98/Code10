#include<stdio.h>
int main()
{
	int *p=NULL;
	float *q=NULL;
	char *r=NULL;
	
	printf("%u,%u,%u\n",p,q,r);
	printf("%p",(void*)q);
}
