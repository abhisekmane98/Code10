#include<stdio.h>

int main()
{
	int **a,*b,c=3;
	b=&c;
	a=&b;
	printf("%x\n%x\n%x\n%x\n%x\n%d\n%d\n%d\n\n",&a,a,&b,b,&c,c,*b,**a);
	printf("%p\n%p\n%p\n%p\n%p\n%d\n%d\n%d",&a,a,&b,b,&c,c,*b,**a);
	
}
